int __fastcall sub_B57AC(int a1, int a2)
{
  char v2; // r3
  int v3; // r3
  int v7; // r7
  int v8; // r6
  int v9; // lr
  int v10; // r12
  int v11; // r2
  _WORD *v12; // r6
  _DWORD *v13; // r6
  int v14; // r2
  int v15; // r1
  int v16; // r3
  bool v17; // cf
  _DWORD *v18; // r6
  int v19; // r2
  _DWORD *v20; // r6
  _WORD *v21; // r6
  float v22; // s12
  _DWORD *v23; // r6
  int v24; // r3
  _BYTE *v25; // r6
  char *v26; // r0
  char *v27; // r6
  char v28[2048]; // [sp+20h] [bp-1800h] BYREF
  char v29[4096]; // [sp+820h] [bp-1000h] BYREF

  v2 = *(_BYTE *)a2 & 0xF | (16 * ((*(_BYTE *)a1 >> 4) & 0xF));
  *(_BYTE *)a2 = v2;
  *(_BYTE *)a2 = v2 & 0xF0 | *(_BYTE *)a1 & 0xF;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 1);
  v3 = *(unsigned __int8 *)(a1 + 2);
  *(_BYTE *)(a2 + 2) = v3;
  if ( v3 == 3 )
  {
    v7 = (int)calloc(0x12u, 1u);
    v8 = v7;
    *(_DWORD *)(a2 + 3) = v7;
    if ( v7 )
    {
      v7 = 1;
    }
    else
    {
      strcpy(v28, "Decode SN OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        428,
        100,
        v29);
      v8 = *(_DWORD *)(a2 + 3);
    }
    v9 = *(_DWORD *)(a1 + 7);
    v10 = *(_DWORD *)(a1 + 11);
    v11 = *(_DWORD *)(a1 + 15);
    *(_DWORD *)v8 = *(_DWORD *)(a1 + 3);
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = v11;
    *(_BYTE *)(v8 + 16) = *(_BYTE *)(a1 + 19);
    v12 = calloc(3u, 1u);
    *(_DWORD *)(a2 + 7) = v12;
    if ( !v12 )
    {
      v7 = 0;
      strcpy(v28, "Decode Chip Die OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        437,
        100,
        v29);
      v12 = *(_WORD **)(a2 + 7);
    }
    *v12 = *(_WORD *)(a1 + 20);
    v13 = calloc(0xEu, 1u);
    *(_DWORD *)(a2 + 11) = v13;
    if ( !v13 )
    {
      v7 = 0;
      strcpy(v28, "Decode Chip Marking OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        446,
        100,
        v29);
      v13 = *(_DWORD **)(a2 + 11);
    }
    v14 = *(_DWORD *)(a1 + 30);
    v15 = *(_DWORD *)(a1 + 26);
    *v13 = *(_DWORD *)(a1 + 22);
    v13[2] = v14;
    v13[1] = v15;
    *((_BYTE *)v13 + 12) = *(_BYTE *)(a1 + 34);
    v16 = *(unsigned __int8 *)(a2 + 2) - 1;
    v17 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = *(_BYTE *)(a1 + 35);
    if ( v16 != 1 && v17 )
    {
      v18 = calloc(0xAu, 1u);
      *(_DWORD *)(a2 + 16) = v18;
      if ( !v18 )
      {
        v7 = 0;
        strcpy(v28, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, v28);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          472,
          100,
          v29);
        v18 = *(_DWORD **)(a2 + 16);
      }
      v19 = *(_DWORD *)(a1 + 40);
      *v18 = *(_DWORD *)(a1 + 36);
      v18[1] = v19;
      *((_BYTE *)v18 + 8) = *(_BYTE *)(a1 + 44);
    }
    else
    {
      v26 = (char *)calloc(0xFu, 1u);
      v27 = v26;
      *(_DWORD *)(a2 + 16) = v26;
      if ( !v26 )
      {
        v7 = 0;
        strcpy(v28, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, v28);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          461,
          100,
          v29);
        v27 = *(char **)(a2 + 16);
      }
      snprintf(
        v27,
        0xFu,
        "F%dV%02dB%dC%d",
        (unsigned __int8)*(_DWORD *)(a1 + 36),
        BYTE1(*(_DWORD *)(a1 + 36)),
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 36)),
        HIBYTE(*(_DWORD *)(a1 + 36)));
    }
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x80 | *(_BYTE *)(a1 + 45) & 0x7F;
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x7F | (*(_BYTE *)(a1 + 45) >> 7 << 7);
    v20 = calloc(5u, 1u);
    *(_DWORD *)(a2 + 21) = v20;
    if ( !v20 )
    {
      v7 = 0;
      strcpy(v28, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        486,
        100,
        v29);
      v20 = *(_DWORD **)(a2 + 21);
    }
    *v20 = *(_DWORD *)(a1 + 46);
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x80 | *(_BYTE *)(a1 + 50) & 0x7F;
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x7F | (*(_BYTE *)(a1 + 50) >> 7 << 7);
    *(_BYTE *)(a2 + 26) = *(_BYTE *)(a1 + 51);
    *(_BYTE *)(a2 + 27) = *(_BYTE *)(a1 + 52);
    *(_BYTE *)(a2 + 28) = *(_BYTE *)(a1 + 53);
    *(_BYTE *)(a2 + 29) = *(_BYTE *)(a1 + 54);
    *(_BYTE *)(a2 + 30) = *(_BYTE *)(a1 + 55);
    v21 = calloc(3u, 1u);
    *(_DWORD *)(a2 + 31) = v21;
    if ( !v21 )
    {
      v7 = 0;
      strcpy(v28, "Decode Chip Technology OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        510,
        100,
        v29);
      v21 = *(_WORD **)(a2 + 31);
    }
    *v21 = *(_WORD *)(a1 + 56);
    *(_WORD *)(a2 + 35) = __rev16(*(unsigned __int16 *)(a1 + 58));
    *(_WORD *)(a2 + 37) = __rev16(*(unsigned __int16 *)(a1 + 60));
    v22 = (double)((unsigned __int16)(*(_WORD *)(a1 + 62) << 8) | HIBYTE(*(unsigned __int16 *)(a1 + 62))) / 100.0;
    *(float *)(a2 + 39) = v22;
    *(_BYTE *)(a2 + 43) = *(_BYTE *)(a1 + 64);
    *(_BYTE *)(a2 + 44) = *(_BYTE *)(a1 + 65);
    *(_BYTE *)(a2 + 45) = *(_BYTE *)(a1 + 66);
    *(_BYTE *)(a2 + 46) = *(_BYTE *)(a1 + 67);
    v23 = calloc(9u, 1u);
    *(_DWORD *)(a2 + 47) = v23;
    if ( !v23 )
    {
      v7 = 0;
      strcpy(v28, "Decode miner_type OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        546,
        100,
        v29);
      v23 = *(_DWORD **)(a2 + 47);
    }
    v24 = *(_DWORD *)(a1 + 72);
    *v23 = *(_DWORD *)(a1 + 68);
    v23[1] = v24;
    *(_BYTE *)(*(_DWORD *)(a2 + 47) + 8) = 0;
    v25 = calloc(6u, 1u);
    *(_DWORD *)(a2 + 51) = v25;
    if ( !v25 )
    {
      v7 = 0;
      strcpy(v28, "Decode reserved OOM\n");
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        556,
        100,
        v29);
      v25 = *(_BYTE **)(a2 + 51);
    }
    *(_DWORD *)v25 = *(_DWORD *)(a1 + 76);
    v25[4] = *(_BYTE *)(a1 + 80);
    *(_BYTE *)(*(_DWORD *)(a2 + 51) + 5) = 0;
    *(_BYTE *)(a2 + 55) = *(_BYTE *)(a1 + 81);
    return v7;
  }
  else
  {
    strcpy(v28, "This FMT is not supported\n");
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "init_eeprom_fmt_info",
      20,
      370,
      100,
      v29);
    return 0;
  }
}
