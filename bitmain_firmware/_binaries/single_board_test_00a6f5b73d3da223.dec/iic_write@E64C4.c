int __fastcall iic_write(int a1, int a2, unsigned int a3)
{
  int v6; // [sp+14h] [bp+4h]
  char v9[2048]; // [sp+20h] [bp+10h] BYREF
  _BYTE v10[4096]; // [sp+820h] [bp+810h] BYREF

  if ( pthread_mutex_lock(&stru_47B364) )
  {
    strcpy(v9, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
      93,
      "iic_write",
      9,
      103,
      100,
      v10);
    return -4;
  }
  else
  {
    v6 = i2c_write(a1, a2, a3);
    pthread_mutex_unlock(&stru_47B364);
    return v6;
  }
}
