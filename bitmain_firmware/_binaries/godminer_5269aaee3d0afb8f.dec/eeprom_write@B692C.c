int __fastcall eeprom_write(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int v5; // r9
  int v6; // r6
  int v10; // r6
  int v11; // r7
  int v12; // r0
  int v13; // r3
  int v14; // r10
  _DWORD *v15; // r3
  _DWORD *v17; // r3
  _DWORD *v18; // r3
  unsigned __int8 v19; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v21[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v18) = -14756;
    HIWORD(v18) = (unsigned int)&unk_16E68C >> 16;
    v14 = -2147483391;
    zlog(
      *v18,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_write",
      12,
      85,
      100,
      v21);
    return v14;
  }
  LOWORD(v6) = -15248;
  v5 = 8 * a1;
  HIWORD(v6) = (unsigned int)&unk_16E49C >> 16;
  if ( !*(_DWORD *)(v6 + 8 * a1 + 76) )
  {
    v14 = eeprom_open(a1);
    if ( v14 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v17) = -14756;
      HIWORD(v17) = (unsigned int)&unk_16E68C >> 16;
      zlog(
        *v17,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_write",
        12,
        90,
        100,
        v21);
      return v14;
    }
  }
  if ( a4 )
  {
    v10 = v6 + v5;
    v11 = a3 + a4;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 72);
      v13 = a3;
      v19 = a2;
      ++a3;
      ++a2;
      if ( iic_write_reg(v12, &v19, 1, v13, 1) != 1 )
        break;
      if ( v11 == a3 )
        goto LABEL_10;
    }
    v14 = -2147483392;
    snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v19);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    zlog(
      *v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_write",
      12,
      110,
      100,
      v21);
    return v14;
  }
LABEL_10:
  sleep(1u);
  return 0;
}
