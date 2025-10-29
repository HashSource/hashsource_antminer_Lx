int __fastcall pwm_get(int a1, _DWORD *a2)
{
  char v5[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v6; // [sp+81Ch] [bp+80Ch] BYREF
  int v7; // [sp+181Ch] [bp+180Ch]

  v7 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      fpga_read(0x84u, a2);
      *a2 >>= 16;
      snprintf(v5, 0x800u, "duty of fpga = 0x%x\n", *a2);
      V_LOCK();
      logfmt_raw(&v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
        93,
        "pwm_get",
        7,
        109,
        20,
        &v6);
      return 0;
    }
    return v7;
  }
  else
  {
    strcpy(v5, "bad param\n");
    V_LOCK();
    logfmt_raw(&v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
      93,
      "pwm_get",
      7,
      101,
      100,
      &v6);
    return -3;
  }
}
