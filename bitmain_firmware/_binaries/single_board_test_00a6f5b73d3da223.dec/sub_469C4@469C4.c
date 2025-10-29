int __fastcall sub_469C4(_BYTE *a1, int a2)
{
  char v4[4]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned __int8 v6; // [sp+181Eh] [bp+180Eh]
  unsigned __int8 v7; // [sp+181Fh] [bp+180Fh]

  v6 = 0;
  v7 = 0;
  v6 = BM_CRC5(a1, 8 * (*(unsigned __int8 *)(a2 + 1) - 1));
  if ( v6 == *(unsigned __int8 *)(a2 + 55) )
  {
    return 1;
  }
  else
  {
    snprintf(
      v4,
      0x800u,
      "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
      *(unsigned __int8 *)(a2 + 55),
      *(unsigned __int8 *)(a2 + 1),
      v6);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "_is_fixture_crc_pass",
      20,
      237,
      100,
      &v5);
  }
  return v7;
}
