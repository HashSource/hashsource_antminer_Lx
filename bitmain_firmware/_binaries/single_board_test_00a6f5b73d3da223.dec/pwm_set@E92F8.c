int __fastcall pwm_set(int a1, unsigned int a2)
{
  unsigned int v3; // r2
  char v5[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v6[8]; // [sp+818h] [bp+808h] BYREF
  int v7; // [sp+1818h] [bp+1808h]
  unsigned __int16 v8; // [sp+181Ch] [bp+180Ch]
  unsigned __int16 v9; // [sp+181Eh] [bp+180Eh]

  if ( a1 - 1 <= 1 )
  {
    v3 = a2;
    if ( a2 >= 0x64 )
      v3 = 100;
    v9 = v3 * dword_47B534[2 * a1 - 2] / 0x64;
    v8 = dword_47B534[2 * a1 - 2] * (100 - v3) / 0x64;
    v7 = v8 | (v9 << 16);
    if ( a1 == 1 )
    {
      fpga_write(0x84u, v7);
      fpga_write(0xA0u, v7);
    }
    else
    {
      snprintf(v5, 0x800u, "pwm type %d not supported\n", a1 - 1);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
        93,
        "pwm_set",
        7,
        81,
        100,
        v6);
    }
    return 0;
  }
  else
  {
    strcpy(v5, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_pwm.c",
      93,
      "pwm_set",
      7,
      62,
      100,
      v6);
    return -3;
  }
}
