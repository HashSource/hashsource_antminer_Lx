int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  char v5[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[a1]) + 43);
      return 0;
    }
    else
    {
      snprintf(
        v4,
        0x800u,
        "%s: chain = %d nonce response rate in eeprom is invalid",
        "api_get_eeprom_nonce_response_rate",
        dword_15FA6C[a1]);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
        180,
        "api_get_eeprom_nonce_response_rate",
        34,
        1249,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(
      v4,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.",
      "api_get_eeprom_nonce_response_rate",
      dword_15FA6C[a1]);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "api_get_eeprom_nonce_response_rate",
      34,
      1240,
      100,
      v5);
    return -1;
  }
}
