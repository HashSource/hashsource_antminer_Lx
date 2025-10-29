int __fastcall pwm_init(unsigned int a1, int a2)
{
  char v4[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[4096]; // [sp+818h] [bp+808h] BYREF

  if ( platform_inited )
  {
    if ( a1 <= 1 )
    {
      dword_47B534[2 * a1] = a2;
      LOBYTE(dword_47B534[2 * a1 + 1]) = 1;
      return a1 + 1;
    }
    else
    {
      strcpy(v4, "bad param\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
        93,
        "pwm_init",
        8,
        30,
        100,
        v5);
      return -3;
    }
  }
  else
  {
    strcpy(v4, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
      93,
      "pwm_init",
      8,
      25,
      100,
      v5);
    return -2;
  }
}
