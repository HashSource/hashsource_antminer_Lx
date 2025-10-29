int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  _DWORD v10[512]; // [sp+10h] [bp-1800h] BYREF
  char v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_16C5EC )
    return -2;
  if ( dword_16C5F0 == a1 )
  {
    if ( pthread_mutex_lock(&stru_16C5F4) )
    {
      strcpy((char *)v10, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v9) = -14756;
      HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v9,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_lcd.c",
        164,
        "lcd_clear",
        9,
        123,
        100,
        v11);
      return -4;
    }
    else
    {
      memset(&unk_16C60C, 0x20, 0x40u);
      v1 = dword_16C5F0;
      lseek64(dword_16C5F0, v2, 0, 0, 0);
      write(v1, &unk_16C60C, 0x40u);
      pthread_mutex_unlock(&stru_16C5F4);
      return 0;
    }
  }
  else
  {
    LOWORD(v4) = -6120;
    HIWORD(v4) = (unsigned int)"tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v10[0] = v5;
    v10[1] = v6;
    LOWORD(v10[2]) = v7;
    BYTE2(v10[2]) = BYTE2(v7);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v8) = -14756;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v8,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_clear",
      9,
      117,
      80,
      v11);
    return -3;
  }
}
