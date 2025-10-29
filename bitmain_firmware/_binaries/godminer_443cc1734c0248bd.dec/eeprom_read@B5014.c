int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int v5; // r10
  int v9; // r7
  int v10; // r0
  int v11; // r3
  int v12; // r9
  unsigned __int8 v14; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v16[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      131,
      100,
      v16);
    return v12;
  }
  v5 = 2 * a1;
  if ( !dword_16B370[2 * a1 + 19] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_read",
        11,
        136,
        100,
        v16);
      return v12;
    }
  }
  puts("no use at24c512c!");
  if ( a4 )
  {
    v9 = a3 + a4;
    while ( 1 )
    {
      v10 = dword_16B370[v5 + 18];
      v11 = a3;
      v14 = a2;
      ++a3;
      ++a2;
      if ( iic_read_reg(v10, &v14, 1, v11, 1) != 1 )
        break;
      if ( a3 == v9 )
        goto LABEL_11;
    }
    v12 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v14);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      158,
      100,
      v16);
    return v12;
  }
LABEL_11:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
