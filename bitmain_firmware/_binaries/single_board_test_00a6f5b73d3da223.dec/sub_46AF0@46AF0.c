int __fastcall sub_46AF0(_BYTE *a1, char *a2)
{
  char v6[20]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v7[20]; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned int v8[64]; // [sp+181Ch] [bp+180Ch] BYREF
  unsigned __int8 v9; // [sp+191Eh] [bp+190Eh]
  unsigned __int8 v10; // [sp+191Fh] [bp+190Fh]
  int v11; // [sp+1920h] [bp+1910h]
  signed int v12; // [sp+1924h] [bp+1914h]
  size_t v13; // [sp+1928h] [bp+1918h]
  int v14; // [sp+192Ch] [bp+191Ch]

  memset(v8, 0, sizeof(v8));
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v9 = *a1 & 0xF;
  v10 = *a1 >> 4;
  v14 = (unsigned __int8)a1[1];
  v13 = 2;
  v12 = v14 - 2;
  v11 = v14;
  if ( v14 && v12 >= 0 )
  {
    if ( v9 == 1 && v10 == 1 )
    {
      memcpy(v8, &a1[v13], v12);
      data_dec(v8, v12, v10, v9);
      memcpy(a2, a1, v13);
      memcpy(&a2[v13], v8, v12);
      return 0;
    }
    else
    {
      snprintf(
        v6,
        0x800u,
        "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
        v9,
        v10);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "decode_eeprom_fixture_info",
        26,
        271,
        100,
        v7);
      return -1;
    }
  }
  else
  {
    snprintf(
      v6,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      v14,
      v12,
      v11);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "decode_eeprom_fixture_info",
      26,
      265,
      100,
      v7);
    return -1;
  }
}
