int __fastcall sub_70BDC(const json_t *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  __int64 v12; // r0
  double v13; // r0
  float v14; // s15
  int v15; // r0
  __int64 v16; // r0
  double v17; // r0
  float v18; // s15
  int v19; // r0
  __int64 v20; // r0
  double v21; // r0
  float v22; // s15
  int v23; // r0
  __int64 v24; // r0
  double v25; // r0
  float v26; // s15
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  size_t v33; // r0
  char v35[40]; // [sp+1Ch] [bp-1028h] BYREF
  int v36; // [sp+101Ch] [bp-28h]
  int v37; // [sp+1020h] [bp-24h]
  const json_t *v38; // [sp+1024h] [bp-20h]
  size_t nmemb; // [sp+1028h] [bp-1Ch]
  size_t i; // [sp+102Ch] [bp-18h]
  const json_t *v41; // [sp+1030h] [bp-14h]
  json_t *v42; // [sp+1034h] [bp-10h]

  v36 = 0;
  v37 = 0;
  v41 = json_object_get(a1, "fan");
  if ( v41 && !*(_DWORD *)v41 )
  {
    v42 = json_object_get(v41, "fan_control_mode");
    if ( v42 && *(_DWORD *)v42 == 3 )
    {
      V_LOCK();
      v2 = json_integer_value((int)v42);
      logfmt_raw(v35, 0x1000u, 0, "fan_control_mode: %d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_fan",
        10,
        298,
        20,
        v35);
      dword_161264 = json_integer_value((int)v42);
      v42 = json_object_get(v41, "pwm_percent_min");
      if ( v42 && *(_DWORD *)v42 == 3 )
      {
        V_LOCK();
        v3 = json_integer_value((int)v42);
        logfmt_raw(v35, 0x1000u, 0, "pwm_percent_min: %d", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/topol/topol.c",
          159,
          "_parse_fan",
          10,
          307,
          20,
          v35);
        dword_161268 = json_integer_value((int)v42);
        v42 = json_object_get(v41, "pwm_percent_max");
        if ( v42 && *(_DWORD *)v42 == 3 )
        {
          V_LOCK();
          v4 = json_integer_value((int)v42);
          logfmt_raw(v35, 0x1000u, 0, "pwm_percent_max: %d", v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "_parse_fan",
            10,
            316,
            20,
            v35);
          dword_16126C = json_integer_value((int)v42);
          v42 = json_object_get(v41, "full_speed_temp_type");
          if ( v42 && *(_DWORD *)v42 == 3 )
          {
            V_LOCK();
            v5 = json_integer_value((int)v42);
            logfmt_raw(v35, 0x1000u, 0, "full_speed_temp_type: %d", v5);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/topol/topol.c",
              159,
              "_parse_fan",
              10,
              325,
              20,
              v35);
            dword_161270 = json_integer_value((int)v42);
            v42 = json_object_get(v41, "full_speed_temp");
            if ( v42 && *(_DWORD *)v42 == 3 )
            {
              V_LOCK();
              v6 = json_integer_value((int)v42);
              logfmt_raw(v35, 0x1000u, 0, "full_speed_temp: %d", v6);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/topol/topol.c",
                159,
                "_parse_fan",
                10,
                334,
                20,
                v35);
              dword_161274 = json_integer_value((int)v42);
              v42 = json_object_get(v41, "target_temp_type");
              if ( v42 && *(_DWORD *)v42 == 3 )
              {
                V_LOCK();
                v7 = json_integer_value((int)v42);
                logfmt_raw(v35, 0x1000u, 0, "target_temp_type: %d", v7);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/backend/topol/topol.c",
                  159,
                  "_parse_fan",
                  10,
                  343,
                  20,
                  v35);
                dword_161278 = json_integer_value((int)v42);
                v42 = json_object_get(v41, "target_temp");
                if ( v42 && *(_DWORD *)v42 == 3 )
                {
                  V_LOCK();
                  v8 = json_integer_value((int)v42);
                  logfmt_raw(v35, 0x1000u, 0, "target_temp: %d", v8);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/b"
                    "uild/godminer-origin_godminer-branch1/backend/topol/topol.c",
                    159,
                    "_parse_fan",
                    10,
                    352,
                    20,
                    v35);
                  dword_16127C = json_integer_value((int)v42);
                  v42 = json_object_get(v41, "initial_interval");
                  if ( v42 && *(_DWORD *)v42 == 3 )
                  {
                    V_LOCK();
                    v9 = json_integer_value((int)v42);
                    logfmt_raw(v35, 0x1000u, 0, "initial_interval: %d", v9);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release"
                      "/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                      159,
                      "_parse_fan",
                      10,
                      361,
                      20,
                      v35);
                    dword_161280 = json_integer_value((int)v42);
                    v42 = json_object_get(v41, "interval");
                    if ( v42 && *(_DWORD *)v42 == 3 )
                    {
                      V_LOCK();
                      v10 = json_integer_value((int)v42);
                      logfmt_raw(v35, 0x1000u, 0, "interval: %d", v10);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/relea"
                        "se/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                        159,
                        "_parse_fan",
                        10,
                        370,
                        20,
                        v35);
                      dword_161284 = json_integer_value((int)v42);
                      v42 = json_object_get(v41, "startup_Kp");
                      if ( v42 && *(_DWORD *)v42 == 3 )
                      {
                        V_LOCK();
                        v11 = json_integer_value((int)v42);
                        logfmt_raw(v35, 0x1000u, 0, "startup_Kp: %d", v11);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rel"
                          "ease/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                          159,
                          "_parse_fan",
                          10,
                          379,
                          20,
                          v35);
                        v12 = json_integer_value((int)v42);
                        LODWORD(v13) = sub_CCAE4(v12);
                        v14 = v13 / 100.0;
                        flt_161288 = v14;
                        v42 = json_object_get(v41, "Kp");
                        if ( v42 && *(_DWORD *)v42 == 3 )
                        {
                          V_LOCK();
                          v15 = json_integer_value((int)v42);
                          logfmt_raw(v35, 0x1000u, 0, "Kp: %d", v15);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/r"
                            "elease/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                            159,
                            "_parse_fan",
                            10,
                            388,
                            20,
                            v35);
                          v16 = json_integer_value((int)v42);
                          LODWORD(v17) = sub_CCAE4(v16);
                          v18 = v17 / 100.0;
                          flt_16128C = v18;
                          v42 = json_object_get(v41, "Ki");
                          if ( v42 && *(_DWORD *)v42 == 3 )
                          {
                            V_LOCK();
                            v19 = json_integer_value((int)v42);
                            logfmt_raw(v35, 0x1000u, 0, "Ki: %d", v19);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp"
                              "/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                              159,
                              "_parse_fan",
                              10,
                              397,
                              20,
                              v35);
                            v20 = json_integer_value((int)v42);
                            LODWORD(v21) = sub_CCAE4(v20);
                            v22 = v21 / 100.0;
                            flt_161290 = v22;
                            v42 = json_object_get(v41, "Kd");
                            if ( v42 && *(_DWORD *)v42 == 3 )
                            {
                              V_LOCK();
                              v23 = json_integer_value((int)v42);
                              logfmt_raw(v35, 0x1000u, 0, "Kd: %d", v23);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/t"
                                "mp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                159,
                                "_parse_fan",
                                10,
                                406,
                                20,
                                v35);
                              v24 = json_integer_value((int)v42);
                              LODWORD(v25) = sub_CCAE4(v24);
                              v26 = v25 / 100.0;
                              flt_161294 = v26;
                              v38 = json_object_get(v41, "speed_info");
                              if ( v38 && *(_DWORD *)v38 == 1 )
                              {
                                V_LOCK();
                                logfmt_raw(v35, 0x1000u, 0, "fan speed_info info:");
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot"
                                  "/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                  159,
                                  "_parse_fan",
                                  10,
                                  415,
                                  20,
                                  v35);
                                nmemb = json_array_size(v38);
                                dword_161298 = (int)calloc(nmemb, 0xCu);
                                if ( dword_161298 )
                                {
                                  for ( i = 0; ; ++i )
                                  {
                                    v33 = json_array_size(v38);
                                    if ( v33 <= i )
                                      break;
                                    v41 = json_array_get(v38, i);
                                    if ( !v41 || *(_DWORD *)v41 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/bui"
                                        "ldroot/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                        159,
                                        "_parse_fan",
                                        10,
                                        429,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    v42 = json_object_get(v41, "id");
                                    if ( !v42 || *(_DWORD *)v42 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d id failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/bui"
                                        "ldroot/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                        159,
                                        "_parse_fan",
                                        10,
                                        436,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v27 = json_integer_value((int)v42);
                                    logfmt_raw(v35, 0x1000u, 0, "id: %d", v27);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/build"
                                      "root/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                      159,
                                      "_parse_fan",
                                      10,
                                      439,
                                      20,
                                      v35);
                                    v28 = json_integer_value((int)v42);
                                    *(_DWORD *)(dword_161298 + 12 * i) = v28;
                                    v42 = json_object_get(v41, "max_speed");
                                    if ( !v42 || *(_DWORD *)v42 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d max_speed failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/bui"
                                        "ldroot/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                        159,
                                        "_parse_fan",
                                        10,
                                        445,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v29 = json_integer_value((int)v42);
                                    logfmt_raw(v35, 0x1000u, 0, "max_speed: %d", v29);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/build"
                                      "root/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                      159,
                                      "_parse_fan",
                                      10,
                                      448,
                                      20,
                                      v35);
                                    v30 = json_integer_value((int)v42);
                                    *(_DWORD *)(dword_161298 + 12 * i + 8) = v30;
                                    v42 = json_object_get(v41, "min_speed");
                                    if ( !v42 || *(_DWORD *)v42 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d min_speed failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/bui"
                                        "ldroot/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                        159,
                                        "_parse_fan",
                                        10,
                                        454,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v31 = json_integer_value((int)v42);
                                    logfmt_raw(v35, 0x1000u, 0, "min_speed: %d", v31);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/build"
                                      "root/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                      159,
                                      "_parse_fan",
                                      10,
                                      457,
                                      20,
                                      v35);
                                    v32 = json_integer_value((int)v42);
                                    *(_DWORD *)(dword_161298 + 12 * i + 4) = v32;
                                    ++dword_16125C;
                                  }
                                  return 0;
                                }
                                else
                                {
                                  V_LOCK();
                                  logfmt_raw(v35, 0x1000u, 0, "calloc topol_machine.fan_info.speeds failed!");
                                  V_UNLOCK();
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildro"
                                    "ot/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                    159,
                                    "_parse_fan",
                                    10,
                                    420,
                                    100,
                                    v35);
                                  return -1;
                                }
                              }
                              else
                              {
                                V_LOCK();
                                logfmt_raw(v35, 0x1000u, 0, "get fan speed_info failed");
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot"
                                  "/tmp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                  159,
                                  "_parse_fan",
                                  10,
                                  412,
                                  100,
                                  v35);
                                return -1;
                              }
                            }
                            else
                            {
                              V_LOCK();
                              logfmt_raw(v35, 0x1000u, 0, "get Kd failed!");
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/t"
                                "mp/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                                159,
                                "_parse_fan",
                                10,
                                403,
                                100,
                                v35);
                              return -1;
                            }
                          }
                          else
                          {
                            V_LOCK();
                            logfmt_raw(v35, 0x1000u, 0, "get Ki failed!");
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp"
                              "/release/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                              159,
                              "_parse_fan",
                              10,
                              394,
                              100,
                              v35);
                            return -1;
                          }
                        }
                        else
                        {
                          V_LOCK();
                          logfmt_raw(v35, 0x1000u, 0, "get Kp failed!");
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/r"
                            "elease/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                            159,
                            "_parse_fan",
                            10,
                            385,
                            100,
                            v35);
                          return -1;
                        }
                      }
                      else
                      {
                        V_LOCK();
                        logfmt_raw(v35, 0x1000u, 0, "get startup_Kp failed!");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rel"
                          "ease/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                          159,
                          "_parse_fan",
                          10,
                          376,
                          100,
                          v35);
                        return -1;
                      }
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw(v35, 0x1000u, 0, "get interval failed!");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/relea"
                        "se/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                        159,
                        "_parse_fan",
                        10,
                        367,
                        100,
                        v35);
                      return -1;
                    }
                  }
                  else
                  {
                    V_LOCK();
                    logfmt_raw(v35, 0x1000u, 0, "get initial_interval failed!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release"
                      "/build/godminer-origin_godminer-branch1/backend/topol/topol.c",
                      159,
                      "_parse_fan",
                      10,
                      358,
                      100,
                      v35);
                    return -1;
                  }
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v35, 0x1000u, 0, "get target_temp failed!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/b"
                    "uild/godminer-origin_godminer-branch1/backend/topol/topol.c",
                    159,
                    "_parse_fan",
                    10,
                    349,
                    100,
                    v35);
                  return -1;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v35, 0x1000u, 0, "get target_temp_type failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/backend/topol/topol.c",
                  159,
                  "_parse_fan",
                  10,
                  340,
                  100,
                  v35);
                return -1;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v35, 0x1000u, 0, "get full_speed_temp failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/topol/topol.c",
                159,
                "_parse_fan",
                10,
                331,
                100,
                v35);
              return -1;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v35, 0x1000u, 0, "get full_speed_temp_type failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/topol/topol.c",
              159,
              "_parse_fan",
              10,
              322,
              100,
              v35);
            return -1;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "get pwm_percent_max failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "_parse_fan",
            10,
            313,
            100,
            v35);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "get pwm_percent_min failed!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/topol/topol.c",
          159,
          "_parse_fan",
          10,
          304,
          100,
          v35);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "get fan_control_mode failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_fan",
        10,
        295,
        100,
        v35);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "get fan failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "_parse_fan",
      10,
      288,
      100,
      v35);
    return -1;
  }
}
