int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  unsigned int v3; // r0
  int result; // r0
  int v5; // r3
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r3
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r3
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // [sp+4h] [bp-1018h]
  unsigned __int8 v17; // [sp+16h] [bp-1006h] BYREF
  unsigned __int8 v18; // [sp+17h] [bp-1005h] BYREF
  char v19[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 140);
  v17 = 0;
  v18 = 0;
  result = eeprom_read(v3, 0xC3u, (int)&v17, 1);
  if ( v17 != 165 )
  {
    result = is_eeprom_loaded();
    if ( result )
    {
      V_LOCK();
      LOWORD(v5) = 32604;
      HIWORD(v5) = (unsigned int)"te iic error! chain %d iic_addr %d" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v5, (int)(v1 / 1000.0 / 1000.0 / 1000.0), v16, v1);
      V_UNLOCK();
      LOWORD(v6) = 32360;
      HIWORD(v6) = (unsigned int)"software_reset %s %02x" >> 16;
      zlog(g_zc, v6, 156, "save_avg_hashrate_dash", 22, 728, 20, v19);
      v7 = *(_DWORD *)(a1 + 140);
      v18 = (unsigned __int16)(int)(v1 / 1000.0 / 1000.0 / 1000.0) >> 8;
      eeprom_write(v7, 0xC4u, (int)&v18, 1);
      V_LOCK();
      LOWORD(v8) = 32648;
      HIWORD(v8) = (unsigned int)"read pic temp for chain %d iic_addr %d" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v8, v18, 196);
      V_UNLOCK();
      LOWORD(v9) = 32360;
      HIWORD(v9) = (unsigned int)"software_reset %s %02x" >> 16;
      zlog(g_zc, v9, 156, "save_avg_hashrate_dash", 22, 731, 20, v19);
      v10 = *(_DWORD *)(a1 + 140);
      v18 = (int)(v1 / 1000.0 / 1000.0 / 1000.0);
      eeprom_write(v10, 0xC5u, (int)&v18, 1);
      V_LOCK();
      LOWORD(v11) = 32684;
      HIWORD(v11) = (unsigned int)"%d" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v11, v18, 197);
      V_UNLOCK();
      LOWORD(v12) = 32360;
      HIWORD(v12) = (unsigned int)"software_reset %s %02x" >> 16;
      zlog(g_zc, v12, 156, "save_avg_hashrate_dash", 22, 734, 20, v19);
      v13 = *(_DWORD *)(a1 + 140);
      v18 = -91;
      eeprom_write(v13, 0xC3u, (int)&v18, 1);
      V_LOCK();
      LOWORD(v14) = 32720;
      HIWORD(v14) = (unsigned int)"[FindCycle], runtime_id:%d time: %ld us" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v14, v18, 195);
      V_UNLOCK();
      LOWORD(v15) = 32360;
      HIWORD(v15) = (unsigned int)"software_reset %s %02x" >> 16;
      result = zlog(g_zc, v15, 156, "save_avg_hashrate_dash", 22, 737, 20, v19);
      *(double *)(a1 + 312) = v1;
      *(_BYTE *)(a1 + 310) = 1;
    }
  }
  return result;
}
