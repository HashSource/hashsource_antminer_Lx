int __fastcall eeprom_write(unsigned int a1, char a2, int a3, unsigned int a4)
{
  char v10[16]; // [sp+24h] [bp-1810h] BYREF
  char v11[16]; // [sp+824h] [bp-1010h] BYREF
  unsigned __int8 v12; // [sp+1827h] [bp-Dh] BYREF
  unsigned int i; // [sp+1828h] [bp-Ch]
  int v14; // [sp+182Ch] [bp-8h]

  v14 = 0;
  i = 0;
  if ( a1 <= 0xF )
  {
    if ( dword_15F9E8[2 * a1 + 1] || (v14 = eeprom_open(a1), v14 >= 0) )
    {
      for ( i = 0; a4 > i; ++i )
      {
        v12 = i + a2;
        v14 = iic_write_reg(dword_15F9E8[2 * a1], &v12, 1, (const void *)(a3 + i), 1u);
        if ( v14 != 1 )
        {
          snprintf(v10, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v12);
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
            180,
            "eeprom_write",
            12,
            116,
            100,
            v11);
          return -2147483392;
        }
      }
      sleep(1u);
      return 0;
    }
    else
    {
      snprintf(v10, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
        180,
        "eeprom_write",
        12,
        96,
        100,
        v11);
      return v14;
    }
  }
  else
  {
    snprintf(v10, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "eeprom_write",
      12,
      91,
      100,
      v11);
    return -2147483391;
  }
}
