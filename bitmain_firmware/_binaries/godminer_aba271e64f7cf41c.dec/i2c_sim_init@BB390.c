int i2c_sim_init()
{
  char v2[2048]; // [sp+14h] [bp-1808h] BYREF
  char v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h]

  v4 = 0;
  strcpy(v2, "i2c_sim_init start");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    189,
    "i2c_sim_init",
    12,
    98,
    40,
    v3);
  if ( access("/sys/class/gpio/gpio461/", 0) == -1 )
  {
    v4 = system("echo 461 > /sys/class/gpio/export");
    if ( v4 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo %s > %s failed", "461", "/sys/class/gpio/export");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_sim_init",
        12,
        104,
        100,
        v3);
      return v4;
    }
    strcpy(v2, "init gpio461");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      189,
      "i2c_sim_init",
      12,
      108,
      40,
      v3);
  }
  if ( access("/sys/class/gpio/gpio459/", 0) == -1 )
  {
    v4 = system("echo 459 > /sys/class/gpio/export");
    if ( v4 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo %s > %s failed", "459", "/sys/class/gpio/export");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_sim_init",
        12,
        115,
        100,
        v3);
      return v4;
    }
    strcpy(v2, "init gpio459");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      189,
      "i2c_sim_init",
      12,
      119,
      40,
      v3);
  }
  v4 = system("echo high > /sys/class/gpio/gpio461/direction");
  if ( v4 )
  {
    snprintf(v2, 0x800u, "[i2c_sim] echo high > %s failed", "/sys/class/gpio/gpio461/direction");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      189,
      "i2c_sim_init",
      12,
      125,
      100,
      v3);
    return v4;
  }
  else
  {
    v4 = system("echo high > /sys/class/gpio/gpio459/direction");
    if ( v4 )
    {
      snprintf(v2, 0x800u, "[i2c_sim] echo high > %s failed", "/sys/class/gpio/gpio459/direction");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        189,
        "i2c_sim_init",
        12,
        132,
        100,
        v3);
      return v4;
    }
    else
    {
      dword_16057C = 1;
      if ( dword_150C20 > 0 )
        close(dword_150C20);
      dword_150C20 = open("/sys/class/gpio/gpio459/value", 1);
      if ( dword_150C20 >= 0 )
      {
        if ( dword_150C24 > 0 )
          close(dword_150C24);
        dword_150C24 = open("/sys/class/gpio/gpio461/value", 1);
        if ( dword_150C24 >= 0 )
        {
          if ( dword_150C28 > 0 )
            close(dword_150C28);
          dword_150C28 = open("/sys/class/gpio/gpio461/direction", 1);
          if ( dword_150C28 >= 0 )
          {
            snprintf(v2, 0x800u, "power i2c device:%s addr:0x%02x fd:%d", "sim_dev", 16, 255);
            V_LOCK();
            logfmt_raw(v3, 0x1000u, 0, v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              189,
              "i2c_sim_init",
              12,
              172,
              40,
              v3);
            strcpy(v2, "i2c_sim_init end");
            V_LOCK();
            logfmt_raw(v3, 0x1000u, 0, v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              189,
              "i2c_sim_init",
              12,
              173,
              40,
              v3);
            return 255;
          }
          else
          {
            strcpy(v2, "open gpio461 direction failed");
            V_LOCK();
            logfmt_raw(v3, 0x1000u, 0, v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              189,
              "i2c_sim_init",
              12,
              167,
              40,
              v3);
            strcpy(v2, "open gpio461 direction failed");
            V_LOCK();
            logfmt_raw(v3, 0x1000u, 0, v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              189,
              "i2c_sim_init",
              12,
              168,
              100,
              v3);
            return dword_150C28;
          }
        }
        else
        {
          strcpy(v2, "open gpio461 failed");
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
            189,
            "i2c_sim_init",
            12,
            155,
            100,
            v3);
          return dword_150C24;
        }
      }
      else
      {
        strcpy(v2, "open gpio459 failed");
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          189,
          "i2c_sim_init",
          12,
          144,
          100,
          v3);
        return dword_150C20;
      }
    }
  }
}
