int __fastcall lcd_init(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // r3
  _DWORD *v7; // r3
  _DWORD v8[512]; // [sp+10h] [bp-1800h] BYREF
  char v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C5EC )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_16C5F0 = result;
    if ( result < 0 )
    {
      strcpy((char *)v8, "open lcd failed!!!\n");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      LOWORD(v7) = -14756;
      HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v7,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_lcd.c",
        164,
        "lcd_init",
        8,
        41,
        100,
        v9);
      return -1;
    }
    else
    {
      dword_16C5EC = 1;
    }
  }
  else
  {
    LOWORD(v2) = -6120;
    HIWORD(v2) = (unsigned int)"tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v8[0] = v3;
    v8[1] = v4;
    LOWORD(v8[2]) = v5;
    BYTE2(v8[2]) = BYTE2(v5);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v6) = -14756;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_init",
      8,
      35,
      100,
      v9);
    return -3;
  }
  return result;
}
