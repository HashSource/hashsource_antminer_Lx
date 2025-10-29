int __fastcall sweep_chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  char v5; // r3
  int v6; // r4
  unsigned int v8; // [sp+10h] [bp-1010h] BYREF
  int v9; // [sp+14h] [bp-100Ch]
  int v10; // [sp+18h] [bp-1008h]
  int v11; // [sp+1Ch] [bp-1004h]
  char v12[4096]; // [sp+20h] [bp-1000h] BYREF

  v9 = 0;
  v10 = (unsigned __int8)a2;
  v11 = 0;
  v8 = 0;
  if ( a2 )
  {
    HIWORD(v10) = 8;
    V_LOCK();
    logfmt_raw(
      v12,
      0x1000u,
      0,
      "set freq: %.2f, expected freq: %.2f",
      (float)((25 * (unsigned int)(float)((float)(v3 + v3) / 25.0)) >> 1),
      v3,
      ((unsigned int)(float)((float)(v3 + v3) / 25.0) << 16) & 0xFFF0000 | 0xA0000211,
      v9,
      v10,
      v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/chip_setting_ltc.c",
      159,
      "sweep_chip_setting_freq_ltc",
      27,
      176,
      60,
      v12);
  }
  else
  {
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 304) + a3);
    HIWORD(v10) = 8;
    BYTE1(v10) = v5;
    v8 = ((unsigned int)(float)((float)(v3 + v3) / 25.0) << 16) & 0xFFF0000 | 0xA0000211;
  }
  v6 = (*(int (__fastcall **)(int, unsigned int *))(a1 + 164))(a1, &v8);
  usleep(0x2710u);
  return v6;
}
