int __fastcall sub_A3144(int a1, void *a2)
{
  size_t v2; // r0
  char v6[12]; // [sp+18h] [bp-180Ch] BYREF
  char v7[12]; // [sp+818h] [bp-100Ch] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    v2 = strlen(*(const char **)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 51));
    memcpy(a2, *(const void **)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 51), v2);
  }
  else
  {
    snprintf(v6, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_miner_type", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "get_miner_type",
      14,
      1218,
      100,
      v7,
      a2);
  }
  return 0;
}
