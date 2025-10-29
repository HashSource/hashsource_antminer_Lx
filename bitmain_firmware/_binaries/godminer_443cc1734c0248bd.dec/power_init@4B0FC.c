int power_init()
{
  double v0; // d0
  int v1; // r4
  int v2; // r9
  int v3; // r7
  double v4; // d11
  double v5; // d9
  char *all_created_runtime; // r0
  char *v7; // r10
  int i; // r6
  int v9; // t1
  int v10; // r7
  int v12; // r0
  int v13; // r2
  int v14; // [sp+4h] [bp-1028h]
  int v15; // [sp+4h] [bp-1028h]
  int v16; // [sp+18h] [bp-1014h]
  int v17; // [sp+1Ch] [bp-1010h]
  int v18; // [sp+24h] [bp-1008h] BYREF
  char v19[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_165218;
  if ( byte_165218 )
  {
    v2 = (unsigned __int16)bitmain_power_version();
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "power type version: 0x%04x", v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      219,
      60,
      v19);
    if ( (unsigned __int16)word_16521A == v2 )
    {
      if ( (unsigned __int16)bitmain_power_fw_version() > 0x14u )
        get_power_voltage_calibration_data();
      byte_16522D = 0;
      dword_165230 = 0;
      dword_165234 = 0;
      byte_165214 = 1;
      if ( opt_custom_voltage_swith || is_eeprom_loaded() )
        dword_165220 = opt_custom_voltage;
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "Power init:");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        241,
        60,
        v19);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "current_voltage_raw     = %d", dword_165230);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        242,
        60,
        v19);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "working_voltage_raw     = %d", dword_165220);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        243,
        60,
        v19);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_165224);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        244,
        60,
        v19);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_165228);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        245,
        60,
        v19);
      if ( byte_165218 && byte_165224 )
        v3 = (unsigned __int16)set_check_asic_voltage(0);
      else
        v3 = (unsigned __int16)set_working_voltage(0);
      if ( v3 )
      {
        V_LOCK();
        logfmt_raw(v19, 0x1000u, 0, "set_voltage_by_steps error!");
        V_UNLOCK();
        v12 = g_zc;
        v13 = 253;
      }
      else
      {
        bitmain_power_on();
        byte_16522C = 1;
        sleep(1u);
        if ( opt_algo == 5 )
          return 0;
        if ( byte_165214 )
        {
          v16 = dword_165230;
          v4 = (double)dword_165230 * 0.75 / 100.0;
        }
        else
        {
          v4 = -0.0075;
          v16 = -1;
        }
        v17 = 3;
        do
        {
          v5 = 0.0;
          sleep(1u);
          all_created_runtime = (char *)get_all_created_runtime(&v18);
          if ( v18 > 0 )
          {
            v7 = all_created_runtime - 4;
            for ( i = 0; i < v18; ++i )
            {
              v9 = *((_DWORD *)v7 + 1);
              v7 += 4;
              v10 = *(_DWORD *)(v9 + 140);
              pic1704_get_an_voltage1(v10);
              V_LOCK();
              logfmt_raw(v19, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", v10, v14, v0);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/miner_util/power_api.c",
                143,
                "read_feedback_voltage",
                21,
                49,
                20,
                v19);
              if ( v0 > 0.1 )
              {
                if ( v0 >= v5 )
                {
                  if ( v5 < 0.1 )
                    v5 = v0;
                }
                else
                {
                  v5 = v0;
                }
              }
            }
          }
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "the minimal voltage = %.2f", v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "get_minimal_feedback_voltage",
            28,
            65,
            20,
            v19);
          if ( v4 <= v5 )
          {
            V_LOCK();
            logfmt_raw(
              v19,
              0x1000u,
              0,
              "power voltage qualified! centi_voltage %d min_fb_vol %f qualified_vol %f",
              v16,
              v15,
              v5,
              v4);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/power_api.c",
              143,
              "check_feedback_voltage",
              22,
              84,
              60,
              v19);
            return 0;
          }
          V_LOCK();
          logfmt_raw(
            v19,
            0x1000u,
            0,
            "power voltage can not meet the target! centi_voltage %d min_fb_vol %f qualified_vol %f",
            v16,
            v15,
            v5,
            v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "check_feedback_voltage",
            22,
            80,
            80,
            v19);
          --v17;
        }
        while ( v17 );
        V_LOCK();
        logfmt_raw(v19, 0x1000u, 0, "check_feedback_voltage error!");
        V_UNLOCK();
        v12 = g_zc;
        v13 = 261;
      }
      zlog(
        v12,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        v13,
        100,
        v19);
      return -1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_16521A, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        223,
        100,
        v19);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, v1, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      214,
      60,
      v19);
    return v1;
  }
}
