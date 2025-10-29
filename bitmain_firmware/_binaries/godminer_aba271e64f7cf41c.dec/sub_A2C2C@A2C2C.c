int __fastcall sub_A2C2C(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 50);
  snprintf(v3, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_test_standard_code", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "get_test_standard_code",
    22,
    1175,
    100,
    v4);
  return 255;
}
