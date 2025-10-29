int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v4[1025]; // [sp+81Ch] [bp+80Ch] BYREF

  v4[1024] = 0;
  if ( pthread_mutex_lock(&stru_47B364) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_iic.c",
             93,
             "iic_uninit",
             10,
             64,
             100,
             v4);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_47B364);
  }
}
