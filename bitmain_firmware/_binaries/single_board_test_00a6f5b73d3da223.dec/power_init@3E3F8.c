int power_init()
{
  int v2; // [sp+14h] [bp+4h] BYREF
  unsigned __int16 v3; // [sp+1016h] [bp+1006h]

  v3 = 0;
  if ( byte_479DB4 != 1 )
  {
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "power_init",
      10,
      214,
      60,
      &v2);
    return 0;
  }
  else
  {
    v3 = bitmain_power_version();
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, "power type version: 0x%04x", v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "power_init",
      10,
      219,
      60,
      &v2);
    if ( v3 == (unsigned __int16)word_479DB6 )
    {
      v3 = bitmain_power_fw_version();
      if ( v3 > 0x14u )
        get_power_voltage_calibration_data();
      byte_479DC9 = 0;
      dword_479DCC = 0;
      dword_479DD0 = 0;
      byte_479DB0 = 1;
      if ( opt_custom_voltage_swith || is_eeprom_loaded() )
        dword_479DBC = opt_custom_voltage;
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "Power init:");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        241,
        60,
        &v2);
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "current_voltage_raw     = %d", dword_479DCC);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        242,
        60,
        &v2);
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "working_voltage_raw     = %d", dword_479DBC);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        243,
        60,
        &v2);
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_479DC0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        244,
        60,
        &v2);
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_479DC4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        245,
        60,
        &v2);
      if ( is_check_asic_voltage_enable() )
        v3 = set_check_asic_voltage(0);
      else
        v3 = set_working_voltage(0);
      if ( v3 )
      {
        V_LOCK();
        logfmt_raw(&v2, 0x1000u, 0, "set_voltage_by_steps error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
          72,
          "power_init",
          10,
          253,
          100,
          &v2);
        return -1;
      }
      else
      {
        power_on();
        if ( opt_algo == 5 || !sub_3D8B8() )
        {
          return 0;
        }
        else
        {
          V_LOCK();
          logfmt_raw(&v2, 0x1000u, 0, "check_feedback_voltage error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
            72,
            "power_init",
            10,
            261,
            100,
            &v2);
          return -1;
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_479DB6, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "power_init",
        10,
        223,
        100,
        &v2);
      return -1;
    }
  }
}
