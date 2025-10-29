int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r3
  int v6; // r12
  int v7; // r4
  char v8; // r3
  unsigned int v9; // r2
  float v10; // s17
  unsigned int v11; // r7
  int v12; // r4
  unsigned int v14; // [sp+10h] [bp-1014h] BYREF
  int v15; // [sp+14h] [bp-1010h]
  int v16; // [sp+18h] [bp-100Ch]
  int v17; // [sp+1Ch] [bp-1008h]
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = 0;
  v16 = 0;
  v15 = 0;
  v6 = 7;
  v17 = 0;
  v14 = 0;
  if ( !a2 )
    v4 = *(_DWORD *)(a1 + 304);
  LOBYTE(v16) = a2;
  if ( !a2 )
    LOBYTE(v4) = *(_BYTE *)(v4 + a3);
  HIWORD(v16) = 8;
  BYTE1(v16) = v4;
  while ( 2 )
  {
    v7 = (unsigned __int8)v6;
    do
    {
      v8 = v7 - 1;
      v9 = (unsigned int)(float)((float)v7 * (float)((float)v6 * v3));
      if ( v9 - 800 <= 0x640 )
      {
        v11 = v7 | 0xA0000100 | ((v9 / 0x19) << 16) | (16 * v6);
        v10 = (float)(int)(25 * (v9 / 0x19) / v6 / v7);
        goto LABEL_12;
      }
      v7 = (unsigned __int8)(v7 - 1);
    }
    while ( v8 );
    if ( --v6 )
      continue;
    break;
  }
  v10 = 0.0;
  v11 = 0;
LABEL_12:
  v14 = v11;
  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v10, v3, v14, v15, v16, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/chip_setting_ltc.c",
      159,
      "chip_setting_freq_ltc",
      21,
      150,
      60,
      v18);
  }
  v12 = (*(int (__fastcall **)(int, unsigned int *))(a1 + 164))(a1, &v14);
  usleep(0x2710u);
  return v12;
}
