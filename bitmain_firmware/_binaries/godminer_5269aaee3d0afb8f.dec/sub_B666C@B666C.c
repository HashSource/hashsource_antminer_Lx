int __fastcall sub_B666C(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v9[4100]; // [sp+810h] [bp-1004h] BYREF

  v5 = BM_CRC5(a1, 8 * (*a2 - 1));
  v6 = *a3;
  if ( v5 == v6 )
    return 1;
  snprintf(s, 0x800u, "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v6, *a2, v5);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "_is_fixture_crc_pass",
    20,
    230,
    100,
    v9);
  return 0;
}
