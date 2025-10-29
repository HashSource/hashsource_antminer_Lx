int eeprom_get_min_freq()
{
  char v2[12]; // [sp+10h] [bp-180Ch] BYREF
  char v3[12]; // [sp+810h] [bp-100Ch] BYREF
  int v4; // [sp+1810h] [bp-Ch]
  int i; // [sp+1814h] [bp-8h]

  v4 = 0xFFFF;
  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    for ( i = 0; i < dword_15FAAC; ++i )
    {
      if ( v4 > *(unsigned __int16 *)(*(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[i]) + 41) )
        v4 = *(unsigned __int16 *)(*(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[i]) + 41);
    }
    return v4;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_min_freq");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "eeprom_get_min_freq",
      19,
      1093,
      100,
      v3);
    return -1;
  }
}
