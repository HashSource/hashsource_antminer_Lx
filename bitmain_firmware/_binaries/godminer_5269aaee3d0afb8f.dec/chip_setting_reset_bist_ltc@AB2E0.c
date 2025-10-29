int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r3
  bool v10; // zf
  int v11; // r2
  int v12; // r6
  int v13; // r3
  int (__fastcall *v14)(int, int *); // r2
  int v15; // r10
  int v16; // r2
  int v17; // r0
  char v19; // r2
  int v20; // r1
  char v21; // r3
  int v22; // r3
  int (__fastcall *v23)(int, int *); // r2
  char v24; // r3
  int v25; // r3
  int v28; // [sp+20h] [bp-1014h] BYREF
  int v29; // [sp+24h] [bp-1010h]
  int v30; // [sp+28h] [bp-100Ch]
  int v31; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_reset_bist_ltc",
    27,
    239,
    40,
    var1004);
  if ( !a4 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v30) = a2;
    LOBYTE(v9) = *(_BYTE *)(a1 + 200);
    if ( a2 )
    {
      BYTE1(v31) = *(_BYTE *)(a1 + 200);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 200);
  v10 = v8 == 0;
  v11 = v8;
  v8 = 0;
  v28 = 0;
  v7 = v9 - 1;
  v29 = 0;
  v31 = 0;
  v30 = (unsigned __int8)v11;
  if ( v10 )
  {
    v8 = v11;
LABEL_13:
    v19 = *(_BYTE *)(*(_DWORD *)(a1 + 296) + a3);
    BYTE1(v31) = v9;
    BYTE1(v30) = v19;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v20 = *(_DWORD *)(a1 + 296);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v21 = *(_BYTE *)(v20 + a3);
    BYTE1(v31) = *(_DWORD *)(a1 + 200);
    BYTE1(v30) = v21;
    goto LABEL_15;
  }
  BYTE1(v30) = 0;
  BYTE1(v31) = v9;
  if ( v7 >= 0 )
  {
LABEL_4:
    v12 = v8;
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(a1 + 780);
      HIWORD(v30) = 0;
      LOBYTE(v31) = v12;
      HIWORD(v31) = 0;
      v14 = *(int (__fastcall **)(int, int *))(a1 + 160);
      v28 = (v13 << 13) | 0x400;
      v15 = v14(a1, &v28);
      if ( v15 )
        break;
      ++v12;
      usleep(0x3E8u);
      if ( v12 > v7 )
      {
        usleep(0x2710u);
        v28 = 0;
        v29 = 0;
        v31 = 0;
        v30 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v31) = *(_DWORD *)(a1 + 200);
          goto LABEL_21;
        }
        v24 = *(_BYTE *)(*(_DWORD *)(a1 + 296) + a3);
        BYTE1(v31) = *(_DWORD *)(a1 + 200);
        BYTE1(v30) = v24;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(a1 + 780);
          HIWORD(v30) = 0;
          LOBYTE(v31) = v8;
          HIWORD(v31) = 0;
          v23 = *(int (__fastcall **)(int, int *))(a1 + 160);
          v28 = (v22 << 13) | 0x9400;
          v15 = v23(a1, &v28);
          if ( v15 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK();
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "%s failed, reg:%02x, core_id:%d",
          "chip_setting_reset_bist_ltc",
          HIWORD(v30),
          v8);
        V_UNLOCK();
        v16 = 284;
        v17 = g_zc;
LABEL_8:
        zlog(
          v17,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_ltc/chip_setting_ltc.c",
          159,
          "chip_setting_reset_bist_ltc",
          27,
          v16,
          100,
          var1004);
        return v15;
      }
    }
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(v30), v12);
    V_UNLOCK();
    v16 = 262;
    v17 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v25 = *(_DWORD *)(a1 + 200);
  v28 = 0;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  BYTE1(v31) = v25;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
