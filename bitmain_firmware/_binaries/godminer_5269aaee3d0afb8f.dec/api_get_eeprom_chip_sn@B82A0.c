int __fastcall api_get_eeprom_chip_sn(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  v2 = dword_16C470[a1 + 2];
  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
    return *(_DWORD *)(*(_DWORD *)(dword_16C470[0] + 4 * v2) + 3);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_sn", v2);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "get_chip_sn",
    11,
    785,
    100,
    v4);
  return 0;
}
