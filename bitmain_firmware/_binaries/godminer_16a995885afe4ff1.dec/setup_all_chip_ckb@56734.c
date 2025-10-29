int __fastcall setup_all_chip_ckb(int a1)
{
  int v2; // r3
  int v3; // r2
  void (__fastcall *v4)(int, int, int); // r3
  int v5; // r1
  int v6; // r7
  int v7; // r6
  int v8; // r7
  signed int v9; // r0
  float v10; // s18
  signed int v11; // r10
  char v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r11
  float v15; // s20
  void *v16; // r0
  char v17; // r6
  int v18; // r9
  char v19; // r0
  int result; // r0
  int v21; // r0
  _DWORD v22[4]; // [sp+10h] [bp-1014h] BYREF
  int v23; // [sp+20h] [bp-1004h] BYREF
  int v24; // [sp+24h] [bp-1000h]
  int v25; // [sp+28h] [bp-FFCh]
  int v26; // [sp+2Ch] [bp-FF8h]

  puts("setup_all_chip_ckb");
  LOBYTE(v2) = 0;
  v3 = *(_DWORD *)(a1 + 296) - 1;
  do
  {
    *(_BYTE *)++v3 = v2;
    v2 = (unsigned __int8)(v2 + 9);
  }
  while ( v2 != 243 );
  v4 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v5 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 9;
  v4(a1, v5, 27);
  sub_56334(a1);
  V_LOCK();
  logfmt_raw((char *)&v23, 0x1000u, 0, "%s", "ChipSetting_close_cores_CKB");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_close_cores_CKB",
    27,
    329,
    20,
    &v23);
  v25 = 5242881;
  v26 = 5120;
  v23 = 0;
  v24 = 0;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v23, 20000, 0);
  v6 = (int)(float)(*(float *)(a1 + 760) - 100.0) / 25;
  if ( v6 > 0 )
  {
    v7 = 25;
    v8 = 25 * (v6 + 1);
    do
    {
      v9 = 7;
      v22[2] = 786433;
      v22[1] = 0;
      v22[3] = 0;
      v10 = (double)v7 + 100.0;
      while ( 2 )
      {
        v11 = (unsigned __int8)v9;
        do
        {
          v12 = v11 - 1;
          v13 = (unsigned int)(float)((float)v11 * (float)((float)v9 * v10));
          if ( v13 - 800 <= 0x640 )
          {
            v14 = v11 | 0xC0000100 | (16 * v9) | ((v13 / 0x19) << 16);
            v21 = sub_12CE18(25 * (v13 / 0x19), v9);
            v15 = (float)sub_12CE18(v21, v11);
            goto LABEL_11;
          }
          v11 = (unsigned __int8)(v11 - 1);
        }
        while ( v12 );
        if ( --v9 )
          continue;
        break;
      }
      v14 = 0;
      v15 = 0.0;
LABEL_11:
      v22[0] = v14;
      v7 += 25;
      V_LOCK();
      logfmt_raw((char *)&v23, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v15, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/chip_setting.c",
        158,
        "ChipSetting_freq_CKB",
        20,
        288,
        20,
        &v23);
      (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v22);
      usleep(0x2710u);
      usleep(0x61A8u);
    }
    while ( v8 != v7 );
  }
  sub_54E0C(a1, 48);
  v16 = calloc(1u, 0x80u);
  v17 = *(_BYTE *)(a1 + 136);
  v18 = (int)v16;
  v19 = rand();
  memset((void *)(v18 + 40), (unsigned __int8)(v17 + v19), 0x30u);
  push_work_base(a1, v18);
  free((void *)v18);
  V_LOCK();
  logfmt_raw((char *)&v23, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_CKB", 20, 80, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_open_cores_CKB",
    26,
    315,
    40,
    &v23);
  v25 = 5242881;
  v26 = 5120;
  v24 = 0;
  v23 = 1;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v23, 20000, 0);
  sub_54E0C(a1, 32);
  V_LOCK();
  logfmt_raw((char *)&v23, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_ckb/backend_ckb.c",
    169,
    "setup_all_chip_ckb",
    18,
    286,
    60,
    &v23);
  sub_56334(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
