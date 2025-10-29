int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  unsigned int v3; // r0
  int result; // r0
  unsigned int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r0
  int v8; // [sp+4h] [bp-1018h]
  unsigned __int8 v9; // [sp+16h] [bp-1006h] BYREF
  unsigned __int8 v10; // [sp+17h] [bp-1005h] BYREF
  char v11[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 140);
  v9 = 0;
  v10 = 0;
  result = eeprom_read(v3, 0xC3u, (int)&v9, 1);
  if ( v9 != 165 )
  {
    result = is_eeprom_loaded();
    if ( result )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "avg hashrate to save: %d, lifetime_avg: %f",
        (int)(v1 / 1000.0 / 1000.0 / 1000.0),
        v8,
        v1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_dash/backend_dash.c",
        171,
        "save_avg_hashrate_dash",
        22,
        728,
        20,
        v11);
      v5 = *(_DWORD *)(a1 + 140);
      v10 = (unsigned __int16)(int)(v1 / 1000.0 / 1000.0 / 1000.0) >> 8;
      eeprom_write(v5, 0xC4u, (int)&v10, 1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "save hashrate high %02x to addr %d", v10, 196);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_dash/backend_dash.c",
        171,
        "save_avg_hashrate_dash",
        22,
        731,
        20,
        v11);
      v6 = *(_DWORD *)(a1 + 140);
      v10 = (int)(v1 / 1000.0 / 1000.0 / 1000.0);
      eeprom_write(v6, 0xC5u, (int)&v10, 1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "save hashrate low %02x to addr %d", v10, 197);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_dash/backend_dash.c",
        171,
        "save_avg_hashrate_dash",
        22,
        734,
        20,
        v11);
      v7 = *(_DWORD *)(a1 + 140);
      v10 = -91;
      eeprom_write(v7, 0xC3u, (int)&v10, 1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "save hashrate marker addr %d", v10, 195);
      V_UNLOCK();
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/rele"
                 "ase/build/godminer-origin_master/backend/backend_dash/backend_dash.c",
                 171,
                 "save_avg_hashrate_dash",
                 22,
                 737,
                 20,
                 v11);
      *(double *)(a1 + 312) = v1;
      *(_BYTE *)(a1 + 310) = 1;
    }
  }
  return result;
}
