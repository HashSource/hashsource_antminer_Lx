int __fastcall api_get_eeprom_chip_bin(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  v2 = dword_16C470[a1 + 2];
  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_16C470[0] + 4 * v2) + 15);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_bin", v2);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
    178,
    "get_chip_bin",
    12,
    755,
    100,
    v4);
  return 255;
}
