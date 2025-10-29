int __fastcall sub_BDD70(int a1, speed_t *a2, _DWORD *a3)
{
  char v7[2048]; // [sp+24h] [bp-1848h] BYREF
  char v8[8]; // [sp+824h] [bp-1048h] BYREF
  struct termios termios_p; // [sp+1824h] [bp-48h] BYREF
  speed_t v10; // [sp+1860h] [bp-Ch]
  speed_t v11; // [sp+1864h] [bp-8h]

  tcgetattr(a1, &termios_p);
  v10 = cfgetispeed(&termios_p);
  v11 = cfgetospeed(&termios_p);
  if ( v10 == v11 )
  {
    if ( *a3 > 3u )
    {
      *a2 = v10;
      *a3 = 4;
      return 0;
    }
    else
    {
      strcpy(v7, "bad param to get baud, size too small\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
        186,
        "get_baud",
        8,
        266,
        100,
        v8);
      return -2;
    }
  }
  else
  {
    strcpy(v7, "input and output speed not match\n");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "get_baud",
      8,
      261,
      100,
      v8);
    return -1;
  }
}
