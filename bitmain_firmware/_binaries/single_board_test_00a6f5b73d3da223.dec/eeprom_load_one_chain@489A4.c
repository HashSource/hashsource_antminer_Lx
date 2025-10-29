int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  char v6[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v7[12]; // [sp+81Ch] [bp+80Ch] BYREF
  char v8[256]; // [sp+181Ch] [bp+180Ch] BYREF
  _BYTE v9[256]; // [sp+191Ch] [bp+190Ch] BYREF
  int v10; // [sp+1A1Ch] [bp+1A0Ch]
  int v11; // [sp+1A20h] [bp+1A10h]
  int v12; // [sp+1A24h] [bp+1A14h]

  v12 = 0;
  v11 = 3;
  memset(v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  v10 = *(_DWORD *)(a2 + 4 * a1);
  do
  {
    v12 = eeprom_read(a1, 0, (int)v9, 0x100u);
    if ( v12 )
    {
      snprintf(v6, 0x800u, "Read configuration fail for chain %d.\n", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_load_one_chain",
        21,
        565,
        100,
        v7);
      return v12;
    }
    if ( !sub_46AF0(v9, v8) )
      break;
    snprintf(v6, 0x800u, "Data decode fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_load_one_chain",
      21,
      579,
      100,
      v7);
    usleep(0x7A120u);
    --v11;
  }
  while ( v11 );
  if ( v11 && sub_47D60(v8, v10) && sub_469C4(v8, v10) )
  {
    *(_BYTE *)(a1 + a2 + 64) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + a2 + 64) = 0;
    snprintf(v6, 0x800u, "Data load fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_load_one_chain",
      21,
      596,
      100,
      v7);
    return -1;
  }
  return v12;
}
