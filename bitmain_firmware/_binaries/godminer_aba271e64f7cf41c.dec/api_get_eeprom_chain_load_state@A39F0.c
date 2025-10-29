int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_15FA68 )
    return *(unsigned __int8 *)(dword_15FA68 + dword_15FA6C[a1] + 64);
  snprintf(
    v3,
    0x800u,
    "%s: g_eeprom_data is not ready, chain = %d.",
    "api_get_eeprom_chain_load_state",
    dword_15FA6C[a1]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "api_get_eeprom_chain_load_state",
    31,
    1329,
    100,
    v4);
  return -1;
}
