int __fastcall sub_BE20C(int a1, int *a2, unsigned int a3)
{
  char v8[2048]; // [sp+20h] [bp-1844h] BYREF
  char v9[4]; // [sp+820h] [bp-1044h] BYREF
  struct termios termios_p; // [sp+1820h] [bp-44h] BYREF
  speed_t speed; // [sp+185Ch] [bp-8h]

  tcgetattr(a1, &termios_p);
  if ( a3 > 3 )
  {
    speed = sub_BDFBC(*a2);
    cfsetispeed(&termios_p, speed);
    cfsetospeed(&termios_p, speed);
    tcsetattr(a1, 1, &termios_p);
    tcflush(a1, 2);
    return 0;
  }
  else
  {
    strcpy(v8, "bad param to set baud, size too small\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "set_baud",
      8,
      348,
      100,
      v9);
    return -2;
  }
}
