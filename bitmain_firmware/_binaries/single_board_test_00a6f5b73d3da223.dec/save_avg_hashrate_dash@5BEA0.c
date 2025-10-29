int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  int result; // r0
  int v3; // [sp+4h] [bp-Ch]
  _BYTE v5[8]; // [sp+20h] [bp+10h] BYREF
  unsigned __int8 v6; // [sp+1022h] [bp+1012h] BYREF
  unsigned __int8 v7; // [sp+1023h] [bp+1013h] BYREF
  int v8; // [sp+1024h] [bp+1014h]

  v7 = 0;
  v6 = 0;
  v8 = 0;
  result = eeprom_read(*(_DWORD *)(a1 + 140), 195, (int)&v7, 1u);
  if ( v7 != 165 )
  {
    result = is_eeprom_loaded();
    if ( result )
    {
      v8 = (int)(v1 / 1000.0 / 1000.0 / 1000.0);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "avg hashrate to save: %d, lifetime_avg: %f", v8, v3, v1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "save_avg_hashrate_dash",
        22,
        728,
        20,
        v5);
      v6 = BYTE1(v8);
      eeprom_write(*(_DWORD *)(a1 + 140), 196, (int)&v6, 1u);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "save hashrate high %02x to addr %d", v6, 196);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "save_avg_hashrate_dash",
        22,
        731,
        20,
        v5);
      v6 = v8;
      eeprom_write(*(_DWORD *)(a1 + 140), 197, (int)&v6, 1u);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "save hashrate low %02x to addr %d", v6, 197);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "save_avg_hashrate_dash",
        22,
        734,
        20,
        v5);
      v6 = -91;
      eeprom_write(*(_DWORD *)(a1 + 140), 195, (int)&v6, 1u);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "save hashrate marker addr %d", v6, 195);
      V_UNLOCK();
      result = zlog(
                 g_zc,
                 "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
                 85,
                 "save_avg_hashrate_dash",
                 22,
                 737,
                 20,
                 v5);
      *(_BYTE *)(a1 + 310) = 1;
      *(double *)(a1 + 312) = v1;
    }
  }
  return result;
}
