int __fastcall iic_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  char v11[2048]; // [sp+20h] [bp+10h] BYREF
  _BYTE v12[4096]; // [sp+820h] [bp+810h] BYREF
  int v13; // [sp+1830h] [bp+1820h]

  if ( pthread_mutex_lock(&stru_47B364) )
  {
    strcpy(v11, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
      93,
      "iic_write_reg",
      13,
      146,
      100,
      v12);
    return -4;
  }
  else
  {
    v13 = i2c_write_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_47B364);
    return v13;
  }
}
