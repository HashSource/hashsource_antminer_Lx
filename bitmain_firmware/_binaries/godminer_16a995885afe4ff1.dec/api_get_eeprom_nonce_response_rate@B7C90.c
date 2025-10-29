int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = dword_16C470[a1 + 2];
  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_16C470[0] + 4 * v2) + 39);
    }
    else
    {
      snprintf(
        s,
        0x800u,
        "%s: chain = %d nonce response rate in eeprom is invalid\n",
        "api_get_eeprom_nonce_response_rate",
        dword_16C470[a1 + 2]);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        178,
        "api_get_eeprom_nonce_response_rate",
        34,
        839,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_nonce_response_rate",
      dword_16C470[a1 + 2]);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
      178,
      "api_get_eeprom_nonce_response_rate",
      34,
      830,
      100,
      v5);
    return -1;
  }
  return result;
}
