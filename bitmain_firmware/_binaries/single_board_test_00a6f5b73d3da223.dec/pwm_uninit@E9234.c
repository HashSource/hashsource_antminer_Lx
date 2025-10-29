int __fastcall pwm_uninit(int result)
{
  char v1[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v2[4096]; // [sp+818h] [bp+808h] BYREF

  if ( result - 1 <= 1 )
  {
    dword_47B534[2 * result - 2] = 0;
    LOBYTE(dword_47B534[2 * result - 1]) = 0;
  }
  else
  {
    strcpy(v1, "bad param\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
             93,
             "pwm_uninit",
             10,
             41,
             100,
             v2);
  }
  return result;
}
