int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  char v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r12
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r2
  int v19; // r12
  int v20; // r0
  int v21; // [sp+18h] [bp-1010h] BYREF
  int v22; // [sp+1Ch] [bp-100Ch]
  int v23; // [sp+20h] [bp-1008h]
  int v24; // [sp+24h] [bp-1004h]
  char var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(var1000, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_working_mode_ltc",
    29,
    298,
    20,
    var1000);
  if ( a4 )
  {
    v12 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( !a2 )
      v12 = *(_DWORD *)(a1 + 296);
    v13 = *(unsigned __int8 *)(a1 + 780);
    LOBYTE(v23) = a2;
    if ( !a2 )
      LOBYTE(v12) = *(_BYTE *)(v12 + a3);
    v14 = *(_DWORD *)(a1 + 200);
    LOBYTE(v24) = a5;
    BYTE1(v23) = v12;
    BYTE1(v24) = v14;
    v21 = a6 | 0x400 | (v13 << 13);
    BYTE2(v24) = 1;
    v15 = (*(int (__fastcall **)(int))(a1 + 160))(a1);
    if ( v15 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v23,
        BYTE1(v23),
        HIWORD(v23));
      V_UNLOCK();
      v16 = g_zc;
      v17 = 314;
LABEL_8:
      zlog(
        v16,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_setting_ltc.c",
        159,
        "chip_setting_working_mode_ltc",
        29,
        v17,
        100,
        var1000);
      return v15;
    }
  }
  else
  {
    if ( a2 )
      v10 = 0;
    else
      v11 = *(_DWORD *)(a1 + 296);
    v21 = 0;
    v22 = 0;
    v24 = 0;
    v23 = (unsigned __int8)a2;
    if ( !a2 )
      v10 = *(_BYTE *)(v11 + a3);
    v19 = *(unsigned __int8 *)(a1 + 780);
    v20 = *(_DWORD *)(a1 + 200);
    BYTE1(v23) = v10;
    LOBYTE(v24) = a5;
    *(_WORD *)((char *)&v24 + 1) = (unsigned __int8)v20;
    HIWORD(v23) = 0;
    HIBYTE(v24) = 0;
    v21 = a6 | 0x400 | (v19 << 13);
    v15 = (*(int (__fastcall **)(int, int *))(a1 + 160))(a1, &v21);
    if ( v15 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, core_id:%d",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v23,
        BYTE1(v23),
        HIWORD(v23),
        a5);
      V_UNLOCK();
      v16 = g_zc;
      v17 = 336;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v15;
}
