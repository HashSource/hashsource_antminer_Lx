int __fastcall hardware_init(const char *a1)
{
  char pic_device_high; // r0
  int (*v3)(); // r4
  int chain_num; // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  int v7; // r0
  int (**v8)(); // r0
  int v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  int (**v12)(); // r0
  int v13; // r0
  int (**v14)(); // r0
  int v15; // r0
  char v18[40]; // [sp+34h] [bp-1068h] BYREF
  __int16 v19; // [sp+1034h] [bp-68h]
  char v20; // [sp+1036h] [bp-66h]
  int v21; // [sp+1038h] [bp-64h]
  int v22[14]; // [sp+103Ch] [bp-60h] BYREF
  int device_num; // [sp+1074h] [bp-28h]
  int i; // [sp+1078h] [bp-24h]
  int v25; // [sp+107Ch] [bp-20h]
  int v26; // [sp+1080h] [bp-1Ch]
  int j; // [sp+1084h] [bp-18h]
  char *eeprom_chain_load_state; // [sp+1088h] [bp-14h]
  int v29; // [sp+108Ch] [bp-10h]

  eeprom_chain_load_state = 0;
  v25 = -1;
  if ( is_test_pool != 1 )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Miner Bootsup");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hardware_init",
      13,
      1205,
      40,
      v18);
    strcpy(v18, "Miner Bootsup");
    log_droa(v18);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Test pool is Ture");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hardware_init",
      13,
      1210,
      40,
      v18);
  }
  eeprom_chain_load_state = (char *)machine_info_init();
  if ( eeprom_chain_load_state )
    return (int)eeprom_chain_load_state;
  platform_get_fan_control_info((int)v22);
  fan_control_info_init(
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v22[7],
    v22[8],
    v22[9],
    v22[10],
    v22[11],
    v22[12]);
  if ( platform_is_pic_mcu_en() )
  {
    pic_device_high = platform_get_pic_device_high(0);
    set_pic_device_high(pic_device_high);
  }
  v3 = dev_ctrl()[2];
  chain_num = platform_get_chain_num();
  if ( ((int (__fastcall *)(int))v3)(chain_num) )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "hardware_init",
      13,
      1226,
      100,
      v18);
    return 301;
  }
  else
  {
    check_fan_valid();
    device_num = query_device_num();
    if ( device_num > 0 )
    {
      for ( i = 0; i < device_num; ++i )
      {
        v5 = dev_ctrl();
        ((void (__fastcall *)(int))v5[10])(i);
        if ( !runtime_ctrl((int)a1) )
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "runtime ctrl error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "hardware_init",
            13,
            1246,
            80,
            v18);
          return 301;
        }
      }
      sub_50364((int)a1);
      for ( i = 0; i < device_num; ++i )
      {
        V_LOCK();
        v6 = dev_ctrl();
        v7 = ((int (__fastcall *)(int))v6[12])(i);
        logfmt_raw(v18, 0x1000u, 0, "eeprom add device: %d", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hardware_init",
          13,
          1255,
          60,
          v18);
        v8 = dev_ctrl();
        v9 = ((int (__fastcall *)(int))v8[12])(i);
        add_eeprom_device(v9);
      }
      v25 = eeprom_load();
      if ( v25 )
      {
        V_LOCK();
        logfmt_raw(v18, 0x1000u, 0, "EEPROM load error!, pls check it");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hardware_init",
          13,
          1287,
          100,
          v18);
        V_LOCK();
        logfmt_raw(v18, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
          176,
          "hardware_init",
          13,
          1288,
          100,
          v18);
        return 302;
      }
      else
      {
        v26 = 0;
        for ( j = 0; j < device_num; ++j )
        {
          v21 = 0;
          v19 = 0;
          v20 = 0;
          v22[13] = 0;
          eeprom_chain_load_state = (char *)api_get_eeprom_chain_load_state(j);
          if ( eeprom_chain_load_state == (char *)-1 )
          {
            ++v26;
            V_LOCK();
            v10 = dev_ctrl();
            v11 = ((int (__fastcall *)(int))v10[12])(j);
            logfmt_raw(v18, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v11);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "hardware_init",
              13,
              1306,
              100,
              v18);
          }
          else if ( !eeprom_chain_load_state )
          {
            ++v26;
            V_LOCK();
            v12 = dev_ctrl();
            v13 = ((int (__fastcall *)(int))v12[12])(j);
            logfmt_raw(v18, 0x1000u, 0, "Chain%d load EEPROM error.", v13);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "hardware_init",
              13,
              1309,
              100,
              v18);
            V_LOCK();
            v14 = dev_ctrl();
            v15 = ((int (__fastcall *)(int))v14[12])(j);
            logfmt_raw(v18, 0x1000u, 0, "Sweep error string = J%d:4.", v15);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "hardware_init",
              13,
              1310,
              100,
              v18);
          }
        }
        if ( v26 )
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "Error! EEPROM data corrupted. pls check it");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "hardware_init",
            13,
            1336,
            100,
            v18);
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "hardware_init",
            13,
            1337,
            100,
            v18);
          return 302;
        }
        else
        {
          eeprom_chain_load_state = mg_unlist(a1);
          if ( eeprom_chain_load_state )
          {
            return (int)eeprom_chain_load_state;
          }
          else
          {
            v29 = 0;
            if ( !v25 )
            {
              opt_custom_freq = eeprom_get_min_freq();
              opt_custom_voltage = eeprom_get_max_voltage();
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                176,
                "hardware_init",
                13,
                1402,
                40,
                v18);
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                176,
                "hardware_init",
                13,
                1403,
                40,
                v18);
            }
            sub_501D8();
            return (int)eeprom_chain_load_state;
          }
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "hardware_init",
        13,
        1237,
        100,
        v18);
      return 301;
    }
  }
}
