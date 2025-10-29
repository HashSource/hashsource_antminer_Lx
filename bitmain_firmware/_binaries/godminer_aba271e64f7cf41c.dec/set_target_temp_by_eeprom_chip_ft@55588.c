int set_target_temp_by_eeprom_chip_ft()
{
  int v0; // r3
  char v2[28]; // [sp+10h] [bp-111Ch] BYREF
  char s[256]; // [sp+1010h] [bp-11Ch] BYREF
  _DWORD v4[2]; // [sp+1110h] [bp-1Ch] BYREF
  int eeprom_chip_bin; // [sp+1118h] [bp-14h]
  int i; // [sp+111Ch] [bp-10h]
  int v7; // [sp+1120h] [bp-Ch]
  const char *eeprom_chip_ft; // [sp+1124h] [bp-8h]

  eeprom_chip_ft = 0;
  eeprom_chip_bin = 0;
  v7 = 0;
  v4[1] = get_all_created_runtime(v4);
  for ( i = 0; i < v4[0]; ++i )
  {
    eeprom_chip_ft = (const char *)api_get_eeprom_chip_ft(i);
    eeprom_chip_bin = api_get_eeprom_chip_bin(i);
    snprintf(s, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
    if ( strstr(s, "C2 BIN2") || strstr(s, "C2 BIN3") || strstr(s, "C2 BIN4") || strstr(s, "C2 BIN5") )
    {
      v0 = v7;
      if ( v7 >= -5 )
        v0 = -5;
      v7 = v0;
    }
  }
  opt_target_temp_bonus = v7;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "opt_target_temp_bonus %d", opt_target_temp_bonus);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/machine_runtime/machine_runtime_base.c",
    176,
    "set_target_temp_by_eeprom_chip_ft",
    33,
    1190,
    40,
    v2);
  return 0;
}
