int power_init()
{
  double v0; // d0
  int v1; // r4
  int v2; // r8
  char *v3; // r3
  int v4; // t1
  int v5; // r7
  double v6; // d11
  double v7; // d9
  char *all_created_runtime; // r0
  char *v9; // r10
  int i; // r6
  int v11; // t1
  int v12; // r7
  int v14; // r0
  int v15; // r2
  int v16; // [sp+4h] [bp-1028h]
  int v17; // [sp+4h] [bp-1028h]
  int v18; // [sp+18h] [bp-1014h]
  int v19; // [sp+1Ch] [bp-1010h]
  int v20; // [sp+24h] [bp-1008h] BYREF
  char v21[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_166228;
  if ( byte_166228 )
  {
    v2 = (unsigned __int16)bitmain_power_version();
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "power type version: 0x%04x", v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      219,
      60,
      v21);
    v3 = (char *)&unk_16623C;
    do
    {
      v4 = *(unsigned __int16 *)v3;
      v3 += 2;
      if ( v4 == v2 )
      {
        word_16622A = v2;
        goto LABEL_6;
      }
    }
    while ( &byte_166244 != v3 );
    if ( (unsigned __int16)word_16622A != v2 )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_16622A, v2);
      V_UNLOCK();
      v14 = g_zc;
      v15 = 232;
      goto LABEL_37;
    }
LABEL_6:
    if ( (unsigned __int16)bitmain_power_fw_version() > 0x14u )
      get_power_voltage_calibration_data();
    byte_166245 = 0;
    dword_166248 = 0;
    dword_16624C = 0;
    byte_166224 = 1;
    if ( opt_custom_voltage_swith || is_eeprom_loaded() )
      dword_166230 = opt_custom_voltage;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Power init:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      250,
      60,
      v21);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "current_voltage_raw     = %d", dword_166248);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      251,
      60,
      v21);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "working_voltage_raw     = %d", dword_166230);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      252,
      60,
      v21);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_166234);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      253,
      60,
      v21);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_166238);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      254,
      60,
      v21);
    if ( byte_166228 && byte_166234 )
      v5 = (unsigned __int16)set_check_asic_voltage(0);
    else
      v5 = (unsigned __int16)set_working_voltage(0);
    if ( v5 )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "set_voltage_by_steps error!");
      V_UNLOCK();
      v14 = g_zc;
      v15 = 262;
    }
    else
    {
      bitmain_power_on();
      byte_166244 = 1;
      sleep(1u);
      if ( opt_algo == 5 )
        return 0;
      if ( byte_166224 )
      {
        v18 = dword_166248;
        v6 = (double)dword_166248 * 0.75 / 100.0;
      }
      else
      {
        v6 = -0.0075;
        v18 = -1;
      }
      v19 = 3;
      do
      {
        v7 = 0.0;
        sleep(1u);
        all_created_runtime = (char *)get_all_created_runtime(&v20);
        if ( v20 > 0 )
        {
          v9 = all_created_runtime - 4;
          for ( i = 0; i < v20; ++i )
          {
            v11 = *((_DWORD *)v9 + 1);
            v9 += 4;
            v12 = *(_DWORD *)(v11 + 140);
            pic1704_get_an_voltage1(v12);
            V_LOCK();
            logfmt_raw(v21, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", v12, v16, v0);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/miner_util/power_api.c",
              158,
              "read_feedback_voltage",
              21,
              49,
              20,
              v21);
            if ( v0 > 0.1 )
            {
              if ( v0 >= v7 )
              {
                if ( v7 < 0.1 )
                  v7 = v0;
              }
              else
              {
                v7 = v0;
              }
            }
          }
        }
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "the minimal voltage = %.2f", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/miner_util/power_api.c",
          158,
          "get_minimal_feedback_voltage",
          28,
          65,
          20,
          v21);
        if ( v6 <= v7 )
        {
          V_LOCK();
          logfmt_raw(
            v21,
            0x1000u,
            0,
            "power voltage qualified! centi_voltage %d min_fb_vol %f qualified_vol %f",
            v18,
            v17,
            v7,
            v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/miner_util/power_api.c",
            158,
            "check_feedback_voltage",
            22,
            84,
            60,
            v21);
          return 0;
        }
        V_LOCK();
        logfmt_raw(
          v21,
          0x1000u,
          0,
          "power voltage can not meet the target! centi_voltage %d min_fb_vol %f qualified_vol %f",
          v18,
          v17,
          v7,
          v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/miner_util/power_api.c",
          158,
          "check_feedback_voltage",
          22,
          80,
          80,
          v21);
        --v19;
      }
      while ( v19 );
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "check_feedback_voltage error!");
      V_UNLOCK();
      v14 = g_zc;
      v15 = 270;
    }
LABEL_37:
    zlog(
      v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      v15,
      100,
      v21);
    return -1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, v1, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/miner_util/power_api.c",
      158,
      "power_init",
      10,
      214,
      60,
      v21);
    return v1;
  }
}
