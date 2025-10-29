int __fastcall sub_B7254(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int inited; // r7
  size_t v8; // r9
  void *v9; // r8
  size_t v10; // r9
  void *v11; // r8
  size_t v12; // r9
  void *v13; // r8
  int v14; // r3
  bool v15; // cf
  size_t v16; // r10
  void *v17; // r8
  int v18; // r3
  size_t v19; // r10
  char v20; // r2
  size_t v21; // r0
  void *v22; // r8
  int v23; // r3
  int v24; // r12
  size_t v25; // r10
  char v26; // r2
  int v27; // r0
  char v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r8
  size_t v33; // r2
  _BYTE *v34; // r1
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // lr
  int v38; // r8
  int v39; // r12
  int v40; // r2
  size_t v41; // r9
  size_t v42; // r0
  float v43; // s12
  void *v44; // r8
  size_t v45; // r9
  void *v46; // r8
  int v47; // r2
  size_t v48; // r11
  size_t v49; // r10
  char *v50; // r0
  char *v51; // r8
  unsigned __int16 dest; // [sp+10h] [bp-185Ch] BYREF
  unsigned __int16 v53; // [sp+12h] [bp-185Ah] BYREF
  unsigned __int8 v54[16]; // [sp+14h] [bp-1858h] BYREF
  _BYTE v55[7]; // [sp+24h] [bp-1848h] BYREF
  unsigned __int8 v56; // [sp+2Bh] [bp-1841h]
  unsigned __int8 v57; // [sp+2Ch] [bp-1840h]
  unsigned __int8 v58; // [sp+2Dh] [bp-183Fh]
  unsigned __int8 v59; // [sp+2Eh] [bp-183Eh]
  unsigned __int8 v60; // [sp+2Fh] [bp-183Dh]
  unsigned __int8 v61; // [sp+30h] [bp-183Ch]
  unsigned __int8 v62; // [sp+31h] [bp-183Bh]
  unsigned __int8 v63; // [sp+32h] [bp-183Ah]
  unsigned __int8 v64; // [sp+33h] [bp-1839h]
  unsigned __int8 v65; // [sp+34h] [bp-1838h]
  unsigned __int8 v66; // [sp+35h] [bp-1837h]
  unsigned __int8 v67; // [sp+36h] [bp-1836h]
  unsigned __int8 v68; // [sp+37h] [bp-1835h]
  unsigned __int8 v69; // [sp+38h] [bp-1834h]
  unsigned __int8 v70; // [sp+39h] [bp-1833h]
  unsigned __int8 v71; // [sp+3Ah] [bp-1832h]
  unsigned __int8 v72; // [sp+3Bh] [bp-1831h]
  unsigned __int8 v73; // [sp+3Ch] [bp-1830h]
  unsigned __int8 v74; // [sp+3Dh] [bp-182Fh]
  unsigned __int8 v75; // [sp+3Eh] [bp-182Eh]
  unsigned __int8 v76; // [sp+3Fh] [bp-182Dh]
  unsigned __int8 v77; // [sp+40h] [bp-182Ch]
  unsigned __int8 v78; // [sp+41h] [bp-182Bh]
  unsigned __int8 v79; // [sp+42h] [bp-182Ah]
  unsigned __int8 v80; // [sp+44h] [bp-1828h]
  unsigned __int8 v81; // [sp+48h] [bp-1824h]
  unsigned __int8 v82; // [sp+49h] [bp-1823h]
  unsigned __int8 v83; // [sp+4Ah] [bp-1822h]
  unsigned __int8 v84; // [sp+4Ch] [bp-1820h]
  unsigned __int8 v85; // [sp+4Eh] [bp-181Eh]
  unsigned __int8 v86; // [sp+55h] [bp-1817h]
  unsigned __int8 v87; // [sp+56h] [bp-1816h]
  unsigned __int8 v88; // [sp+57h] [bp-1815h]
  unsigned __int8 v89; // [sp+58h] [bp-1814h]
  unsigned __int8 v90; // [sp+5Dh] [bp-180Fh]
  unsigned __int8 v91; // [sp+5Eh] [bp-180Eh]
  unsigned __int8 v92; // [sp+60h] [bp-180Ch]
  unsigned __int8 v93; // [sp+61h] [bp-180Bh]
  unsigned __int8 v94; // [sp+62h] [bp-180Ah]
  unsigned __int8 v95; // [sp+63h] [bp-1809h]
  char v96[2040]; // [sp+68h] [bp-1804h] BYREF
  char v97[4100]; // [sp+868h] [bp-1004h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * (*a1 >> 4));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  inited = eeprom_fmt_info_init_0(v55, v5);
  if ( inited )
  {
    v8 = v81;
    v9 = calloc(v81 + 1, 1u);
    *(_DWORD *)(a2 + 3) = v9;
    if ( !v9 )
    {
      inited = 0;
      strcpy(v96, "Decode SN OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        455,
        100,
        v97);
      v9 = *(void **)(a2 + 3);
      v8 = v81;
    }
    memcpy(v9, &a1[v55[3]], v8);
    v10 = v82;
    v11 = calloc(v82 + 1, 1u);
    *(_DWORD *)(a2 + 7) = v11;
    if ( !v11 )
    {
      inited = 0;
      strcpy(v96, "Decode Chip Die OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        464,
        100,
        v97);
      v11 = *(void **)(a2 + 7);
      v10 = v82;
    }
    memcpy(v11, &a1[v55[4]], v10);
    v12 = v83;
    v13 = calloc(v83 + 1, 1u);
    *(_DWORD *)(a2 + 11) = v13;
    if ( !v13 )
    {
      inited = 0;
      strcpy(v96, "Decode Chip Marking OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        473,
        100,
        v97);
      v13 = *(void **)(a2 + 11);
      v12 = v83;
    }
    memcpy(v13, &a1[v55[5]], v12);
    v14 = *(unsigned __int8 *)(a2 + 2) - 1;
    v15 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = a1[v55[6]];
    if ( v14 != 1 && v15 )
    {
      v16 = v84;
      v17 = calloc(v84 + 1, 1u);
      *(_DWORD *)(a2 + 16) = v17;
      if ( !v17 )
      {
        inited = 0;
        strcpy(v96, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v97, 0x1000u, 0, v96);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          499,
          100,
          v97);
        v17 = *(void **)(a2 + 16);
        v16 = v84;
      }
      memcpy(v17, &a1[v56], v16);
    }
    else
    {
      v48 = v84;
      v49 = v84 + 6;
      memset(v54, 0, sizeof(v54));
      v50 = (char *)calloc(v49, 1u);
      v51 = v50;
      *(_DWORD *)(a2 + 16) = v50;
      if ( !v50 )
      {
        inited = 0;
        strcpy(v96, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v97, 0x1000u, 0, v96);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          488,
          100,
          v97);
        v48 = v84;
        v51 = *(char **)(a2 + 16);
        v49 = v84 + 6;
      }
      memcpy(v54, &a1[v56], v48);
      snprintf(v51, v49, "F%dV%02dB%dC%d", v54[0], v54[1], v54[2], v54[3]);
    }
    v18 = v57;
    v19 = v85;
    v20 = *(_BYTE *)(a2 + 20) & 0x80 | a1[v57] & 0x7F;
    v21 = v85 + 1;
    *(_BYTE *)(a2 + 20) = v20;
    *(_BYTE *)(a2 + 20) = v20 & 0x7F | (a1[v18] >> 7 << 7);
    v22 = calloc(v21, 1u);
    *(_DWORD *)(a2 + 21) = v22;
    if ( !v22 )
    {
      inited = 0;
      strcpy(v96, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        513,
        100,
        v97);
      v22 = *(void **)(a2 + 21);
      v19 = v85;
    }
    memcpy(v22, &a1[v58], v19);
    v23 = v59;
    v24 = v60;
    v25 = v86;
    v26 = *(_BYTE *)(a2 + 25) & 0x80 | a1[v59] & 0x7F;
    v27 = v61;
    *(_BYTE *)(a2 + 25) = v26;
    v28 = v26 & 0x7F | (a1[v23] >> 7 << 7);
    v29 = v62;
    *(_BYTE *)(a2 + 25) = v28;
    *(_BYTE *)(a2 + 26) = a1[v24];
    v30 = v63;
    *(_BYTE *)(a2 + 27) = a1[v27];
    LOBYTE(v27) = a1[v29];
    v31 = v64;
    *(_BYTE *)(a2 + 28) = v27;
    *(_BYTE *)(a2 + 29) = a1[v30];
    *(_BYTE *)(a2 + 30) = a1[v31];
    v32 = calloc(v25 + 1, 1u);
    *(_DWORD *)(a2 + 31) = v32;
    if ( !v32 )
    {
      inited = 0;
      strcpy(v96, "Decode Chip Technology OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        537,
        100,
        v97);
      v32 = *(void **)(a2 + 31);
      v25 = v86;
    }
    memcpy(v32, &a1[v65], v25);
    memcpy(&dest, &a1[v66], v87);
    v33 = v88;
    v34 = &a1[v67];
    *(_WORD *)(a2 + 35) = HIBYTE(dest) | (dest << 8);
    memcpy(&v53, v34, v33);
    v35 = v89;
    v36 = &a1[v68];
    *(_WORD *)(a2 + 37) = HIBYTE(v53) | (v53 << 8);
    memcpy(v54, v36, v35);
    v37 = v69;
    v38 = v70;
    v39 = v71;
    v40 = v72;
    v41 = v90;
    v42 = v90 + 1;
    v43 = (double)(unsigned __int16)__rev16(*(unsigned __int16 *)v54) / 100.0;
    *(float *)(a2 + 39) = v43;
    *(_BYTE *)(a2 + 43) = a1[v37];
    *(_BYTE *)(a2 + 44) = a1[v38];
    *(_BYTE *)(a2 + 45) = a1[v39];
    *(_BYTE *)(a2 + 46) = a1[v40];
    v44 = calloc(v42, 1u);
    *(_DWORD *)(a2 + 47) = v44;
    if ( !v44 )
    {
      inited = 0;
      strcpy(v96, "Decode miner_type OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        573,
        100,
        v97);
      v44 = *(void **)(a2 + 47);
      v41 = v90;
    }
    memcpy(v44, &a1[v73], v41);
    *(_BYTE *)(*(_DWORD *)(a2 + 47) + v90) = 0;
    v45 = v91;
    v46 = calloc(v91 + 1, 1u);
    *(_DWORD *)(a2 + 51) = v46;
    if ( !v46 )
    {
      inited = 0;
      strcpy(v96, "Decode reserved OOM\n");
      V_LOCK();
      logfmt_raw(v97, 0x1000u, 0, v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        583,
        100,
        v97);
      v46 = *(void **)(a2 + 51);
      v45 = v91;
    }
    memcpy(v46, &a1[v74], v45);
    *(_BYTE *)(*(_DWORD *)(a2 + 51) + v91) = 0;
    v47 = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a2 + 55) = a1[v75];
    if ( v47 == 4 )
    {
      memcpy((void *)(a2 + 56), &a1[v76], v92);
      memcpy((void *)(a2 + 60), &a1[v77], v93);
      memcpy((void *)(a2 + 62), &a1[v78], v94);
      memcpy((void *)(a2 + 64), &a1[v79], v95);
      *(_BYTE *)(a2 + 199) = a1[v80];
    }
  }
  return inited;
}
