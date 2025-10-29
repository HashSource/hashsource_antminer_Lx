int __fastcall sub_47D60(_BYTE *a1, int a2)
{
  float v3; // s15
  char v7[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v8[16]; // [sp+818h] [bp+808h] BYREF
  _BYTE v9[18]; // [sp+1818h] [bp+1808h] BYREF
  unsigned __int16 v10; // [sp+182Ah] [bp+181Ah] BYREF
  unsigned __int16 v11; // [sp+182Ch] [bp+181Ch] BYREF
  unsigned __int16 v12; // [sp+182Eh] [bp+181Eh] BYREF
  _BYTE v13[7]; // [sp+1830h] [bp+1820h] BYREF
  unsigned __int8 v14; // [sp+1837h] [bp+1827h]
  unsigned __int8 v15; // [sp+1838h] [bp+1828h]
  unsigned __int8 v16; // [sp+1839h] [bp+1829h]
  unsigned __int8 v17; // [sp+183Ah] [bp+182Ah]
  unsigned __int8 v18; // [sp+183Bh] [bp+182Bh]
  unsigned __int8 v19; // [sp+183Ch] [bp+182Ch]
  unsigned __int8 v20; // [sp+183Dh] [bp+182Dh]
  unsigned __int8 v21; // [sp+183Eh] [bp+182Eh]
  unsigned __int8 v22; // [sp+183Fh] [bp+182Fh]
  unsigned __int8 v23; // [sp+1840h] [bp+1830h]
  unsigned __int8 v24; // [sp+1841h] [bp+1831h]
  unsigned __int8 v25; // [sp+1842h] [bp+1832h]
  unsigned __int8 v26; // [sp+1843h] [bp+1833h]
  unsigned __int8 v27; // [sp+1844h] [bp+1834h]
  unsigned __int8 v28; // [sp+1845h] [bp+1835h]
  unsigned __int8 v29; // [sp+1846h] [bp+1836h]
  unsigned __int8 v30; // [sp+1847h] [bp+1837h]
  unsigned __int8 v31; // [sp+1848h] [bp+1838h]
  unsigned __int8 v32; // [sp+1849h] [bp+1839h]
  unsigned __int8 v33; // [sp+184Dh] [bp+183Dh]
  unsigned __int8 v34; // [sp+184Eh] [bp+183Eh]
  unsigned __int8 v35; // [sp+184Fh] [bp+183Fh]
  unsigned __int8 v36; // [sp+1851h] [bp+1841h]
  unsigned __int8 v37; // [sp+1853h] [bp+1843h]
  unsigned __int8 v38; // [sp+185Ah] [bp+184Ah]
  unsigned __int8 v39; // [sp+185Bh] [bp+184Bh]
  unsigned __int8 v40; // [sp+185Ch] [bp+184Ch]
  unsigned __int8 v41; // [sp+185Dh] [bp+184Dh]
  unsigned __int8 v42; // [sp+1862h] [bp+1852h]
  unsigned __int8 v43; // [sp+1867h] [bp+1857h]

  v43 = 1;
  *(_BYTE *)a2 = *(_BYTE *)a2 & 0xF | (16 * ((*a1 >> 4) & 0xF));
  *(_BYTE *)a2 = *(_BYTE *)a2 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  *(_BYTE *)(a2 + 2) = a1[2];
  if ( (unsigned __int8)sub_46DFC(v13, *(_BYTE *)(a2 + 2)) != 1 )
  {
    v43 = 0;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 3) = calloc(v33 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 3) )
    {
      strcpy(v7, "Decode SN OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        418,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 3), &a1[v13[3]], v33);
    *(_DWORD *)(a2 + 7) = calloc(v34 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 7) )
    {
      strcpy(v7, "Decode Chip Die OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        427,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 7), &a1[v13[4]], v34);
    *(_DWORD *)(a2 + 11) = calloc(v35 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 11) )
    {
      strcpy(v7, "Decode Chip Marking OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        436,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 11), &a1[v13[5]], v35);
    *(_BYTE *)(a2 + 15) = a1[v13[6]];
    if ( *(_BYTE *)(a2 + 2) == 1 || *(_BYTE *)(a2 + 2) == 2 )
    {
      memset(v9, 0, 16);
      *(_DWORD *)(a2 + 16) = calloc(v36 + 6, 1u);
      if ( !*(_DWORD *)(a2 + 16) )
      {
        strcpy(v7, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
          92,
          "eeprom_buf_to_layout",
          20,
          451,
          100,
          v8);
        v43 = 0;
      }
      memcpy(v9, &a1[v14], v36);
      snprintf(*(char **)(a2 + 16), v36 + 6, "F%dV%02dB%dC%d", v9[0], v9[1], v9[2], v9[3]);
    }
    else
    {
      *(_DWORD *)(a2 + 16) = calloc(v36 + 1, 1u);
      if ( !*(_DWORD *)(a2 + 16) )
      {
        strcpy(v7, "Decode Chip FT Program Version OOM\n");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
          92,
          "eeprom_buf_to_layout",
          20,
          462,
          100,
          v8);
        v43 = 0;
      }
      memcpy(*(void **)(a2 + 16), &a1[v14], v36);
    }
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x80 | a1[v15] & 0x7F;
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x7F | (a1[v15] >> 7 << 7);
    *(_DWORD *)(a2 + 21) = calloc(v37 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 21) )
    {
      strcpy(v7, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        476,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 21), &a1[v16], v37);
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x80 | a1[v17] & 0x7F;
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x7F | (a1[v17] >> 7 << 7);
    *(_BYTE *)(a2 + 26) = a1[v18];
    *(_BYTE *)(a2 + 27) = a1[v19];
    *(_BYTE *)(a2 + 28) = a1[v20];
    *(_BYTE *)(a2 + 29) = a1[v21];
    *(_BYTE *)(a2 + 30) = a1[v22];
    *(_DWORD *)(a2 + 31) = calloc(v38 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 31) )
    {
      strcpy(v7, "Decode Chip Technology OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        500,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 31), &a1[v23], v38);
    memcpy(&v12, &a1[v24], v39);
    *(_WORD *)(a2 + 35) = HIBYTE(v12) | (v12 << 8);
    memcpy(&v11, &a1[v25], v40);
    *(_WORD *)(a2 + 37) = HIBYTE(v11) | (v11 << 8);
    memcpy(&v10, &a1[v26], v41);
    v3 = (double)((unsigned __int16)(v10 << 8) | (unsigned int)HIBYTE(v10)) / 100.0;
    *(float *)(a2 + 39) = v3;
    *(_BYTE *)(a2 + 43) = a1[v27];
    *(_BYTE *)(a2 + 44) = a1[v28];
    *(_BYTE *)(a2 + 45) = a1[v29];
    *(_BYTE *)(a2 + 46) = a1[v30];
    *(_DWORD *)(a2 + 47) = calloc(v42 + 1, 1u);
    if ( !*(_DWORD *)(a2 + 47) )
    {
      strcpy(v7, "Decode miner_type OOM\n");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_buf_to_layout",
        20,
        536,
        100,
        v8);
      v43 = 0;
    }
    memcpy(*(void **)(a2 + 47), &a1[v31], v42);
    *(_BYTE *)(a2 + 55) = a1[v32];
    return v43;
  }
}
