int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r7
  int v5; // r9
  int v7; // [sp+14h] [bp-1A08h]
  unsigned __int8 s[256]; // [sp+18h] [bp-1A04h] BYREF
  _WORD v9[128]; // [sp+118h] [bp-1904h] BYREF
  char v10[2040]; // [sp+218h] [bp-1804h] BYREF
  char v11[4100]; // [sp+A18h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v9, 0, sizeof(v9));
  v4 = 3;
  v7 = *(_DWORD *)(a2 + 4 * a1);
  while ( 1 )
  {
    v5 = eeprom_read(a1, 0, (int)s, 256);
    if ( v5 )
    {
      snprintf(v10, 0x800u, "Read configuration fail for chain %d.\n", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_load_one_chain",
        21,
        591,
        100,
        v11);
      return v5;
    }
    if ( !eeprom_decode_fixture_info_0(s, v9) )
      break;
    snprintf(v10, 0x800u, "Data decode fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      605,
      100,
      v11);
    usleep(0x7A120u);
    if ( !--v4 )
      goto LABEL_6;
  }
  if ( !sub_B57AC((int)v9, v7) || !sub_B666C(v9, (unsigned __int8 *)(v7 + 1), (unsigned __int8 *)(v7 + 55)) )
  {
LABEL_6:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v10, 0x800u, "Data load fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    v5 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      622,
      100,
      v11);
    return v5;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return v5;
}
