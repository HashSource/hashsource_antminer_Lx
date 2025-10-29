int bitmain_power_close()
{
  char v1[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v2[4096]; // [sp+810h] [bp+800h] BYREF

  if ( !dword_47B8C0 || !dword_47B8C4 )
  {
    pthread_mutex_lock(&power_mutex);
    strcpy(v1, "bitmain power close ===========\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_power_close",
      19,
      428,
      40,
      v2);
    iic_uninit(dword_47B8C0);
    dword_47B8C4 = 0;
    dword_47B8C8 = 0;
    memset(&unk_47B8D0, 0, 0x68u);
    pthread_mutex_unlock(&power_mutex);
  }
  return 0;
}
