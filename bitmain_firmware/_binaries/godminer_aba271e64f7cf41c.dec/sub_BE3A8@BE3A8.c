int __fastcall sub_BE3A8(int a1, _DWORD *a2, _DWORD *a3)
{
  char v7[64]; // [sp+24h] [bp-1840h] BYREF
  char v8[64]; // [sp+824h] [bp-1040h] BYREF
  struct termios termios_p; // [sp+1824h] [bp-40h] BYREF

  tcgetattr(a1, &termios_p);
  if ( *a3 > 3u )
  {
    *a2 = termios_p.c_cc[6];
    *a3 = 4;
    return 0;
  }
  else
  {
    strcpy(v7, "bad param to get vmin, size too small\n");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "get_vmin",
      8,
      372,
      100,
      v8);
    return -2;
  }
}
