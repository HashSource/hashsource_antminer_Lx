int __fastcall power_init(char a1, int a2)
{
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  int (**v7)(); // r0
  int v9; // [sp+10h] [bp-1024h] BYREF
  char v10; // [sp+17h] [bp-101Dh]
  char v11[24]; // [sp+1Ch] [bp-1018h] BYREF
  int j; // [sp+101Ch] [bp-18h]
  int i; // [sp+1020h] [bp-14h]
  int power_status; // [sp+1024h] [bp-10h]
  void *all_created_runtime; // [sp+1028h] [bp-Ch]
  unsigned __int16 v16; // [sp+102Ch] [bp-8h]
  unsigned __int16 v17; // [sp+102Eh] [bp-6h]

  v9 = a2;
  v10 = a1;
  power_status = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  if ( (unsigned __int8)platform_is_adjustable_power() != 1 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "power_init",
      10,
      309,
      100,
      v11);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Sweep error string = %s.", "V:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "power_init",
      10,
      310,
      100,
      v11);
    return -1;
  }
  else
  {
    v16 = bitmain_power_version();
    if ( platform_is_psu_supported(v16) )
    {
      if ( (unsigned __int8)platform_is_pic_mcu_en() != 1 )
      {
        v16 = bitmain_set_watchdog(0);
        if ( v16 )
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "disable power watchdog: %04x", v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/power_api.c",
            160,
            "power_init",
            10,
            323,
            100,
            v11);
          return power_status;
        }
        sleep(1u);
      }
      power_off();
      if ( v10 )
      {
        fan_pwm_set(0);
        while ( 1 )
        {
          fan_pwm_set(0);
          sleep(0xAu);
        }
      }
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Initializing the power, please wait, this may take up 1 minute...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        338,
        60,
        v11);
      sleep(0x1Eu);
      if ( (unsigned __int8)platform_is_pic_mcu_en() != 1 )
        sub_5FB68();
      v17 = bitmain_power_fw_version();
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "bitmain power fw version: %04x", v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        347,
        60,
        v11);
      byte_152441 = 0;
      dword_152444 = 0;
      dword_152448 = 0;
      byte_152428 = 1;
      if ( opt_custom_voltage_swith || is_eeprom_loaded() )
        dword_152434 = opt_custom_voltage;
      byte_15242C = platform_is_adjustable_power();
      byte_152438 = platform_is_check_asic_voltage_enable();
      dword_15243C = platfrom_get_check_asic_voltage();
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Power init:");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        368,
        20,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_152444);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        369,
        20,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_152434);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        370,
        20,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_152438);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        371,
        20,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_15243C);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        372,
        20,
        v11);
      if ( is_check_asic_voltage_enable() )
        power_status = set_check_asic_voltage(0);
      else
        power_status = set_working_voltage(0);
      if ( power_status )
      {
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "set_voltage_by_steps error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/power_api.c",
          160,
          "power_init",
          10,
          380,
          100,
          v11);
        return -1;
      }
      else
      {
        for ( i = 0; i <= 19; ++i )
        {
          if ( v16 == 113 || v16 == 116 )
          {
            power_status = 0;
            break;
          }
          power_status = bitmain_get_power_status();
          if ( !power_status )
          {
            power_status = 0;
            break;
          }
          if ( !((i + 1) % 5) )
          {
            V_LOCK();
            logfmt_raw(v11, 0x1000u, 0, ">> bitmain_get_power_status failed(%d) <<", power_status);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/power_api.c",
              160,
              "power_init",
              10,
              394,
              100,
              v11);
          }
          sleep(3u);
        }
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "bitmain_get_power_status end!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/power_api.c",
          160,
          "power_init",
          10,
          401,
          20,
          v11);
        power_on();
        usleep(0x61A80u);
        for ( j = 0; j < v9; ++j )
        {
          v3 = dev_ctrl();
          ((void (__fastcall *)(int))v3[9])(j);
          sleep(1u);
          v4 = dev_ctrl();
          ((void (__fastcall *)(int))v4[10])(j);
          usleep(0x493E0u);
          v5 = dev_ctrl();
          ((void (__fastcall *)(int))v5[9])(j);
          sleep(1u);
          v6 = dev_ctrl();
          ((void (__fastcall *)(int))v6[10])(j);
          usleep(0x493E0u);
          v7 = dev_ctrl();
          ((void (__fastcall *)(int))v7[9])(j);
        }
        if ( sub_5F3D0() )
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "check_feedback_voltage error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/power_api.c",
            160,
            "power_init",
            10,
            419,
            100,
            v11);
          return -1;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "check_feedback_voltage end!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/power_api.c",
            160,
            "power_init",
            10,
            424,
            40,
            v11);
          return power_status;
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Not support power version, %04x", v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "power_init",
        10,
        316,
        100,
        v11);
      return -1;
    }
  }
}
