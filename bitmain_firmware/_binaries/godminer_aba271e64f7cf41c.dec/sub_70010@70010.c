int __fastcall sub_70010(const json_t *a1)
{
  const char *v2; // r0
  json_t *v3; // r0
  __int16 v4; // r0
  const char *v5; // r3
  bool v6; // r3
  const char *v7; // r3
  bool v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char v13[16]; // [sp+1Ch] [bp-1010h] BYREF
  const json_t *v14; // [sp+101Ch] [bp-10h]
  signed int i; // [sp+1020h] [bp-Ch]
  const json_t *v16; // [sp+1024h] [bp-8h]

  v14 = json_object_get(a1, "power");
  if ( v14 && !*(_DWORD *)v14 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "power:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "_parse_power",
      12,
      208,
      20,
      v13);
    v16 = json_object_get(v14, "type");
    if ( v16 && *(_DWORD *)v16 == 2 )
    {
      V_LOCK();
      v2 = json_string_value(v16);
      logfmt_raw(v13, 0x1000u, 0, "type: %s", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_power",
        12,
        216,
        20,
        v13);
      v16 = json_object_get(v14, "version");
      if ( v16 && *(_DWORD *)v16 == 1 )
      {
        dword_16129C = json_array_size(v16);
        dword_1612B4 = (int)calloc(dword_16129C, 2u);
        for ( i = 0; i < dword_16129C; ++i )
        {
          v3 = json_array_get(v16, i);
          v4 = json_integer_value((int)v3);
          *(_WORD *)(dword_1612B4 + 2 * i) = v4;
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "psu version = 0x%x", *(unsigned __int16 *)(dword_1612B4 + 2 * i));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "_parse_power",
            12,
            228,
            20,
            v13);
        }
        v16 = json_object_get(v14, "is_adjustable_power");
        if ( v16 && *(_DWORD *)v16 == 5 || v16 && *(_DWORD *)v16 == 6 )
        {
          V_LOCK();
          if ( v16 && *(_DWORD *)v16 == 5 )
            v5 = "true";
          else
            v5 = "false";
          logfmt_raw(v13, 0x1000u, 0, "is_adjustable_power: %s", v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "_parse_power",
            12,
            237,
            20,
            v13);
          v6 = v16 && *(_DWORD *)v16 == 5;
          byte_1612A0 = v6;
          v16 = json_object_get(v14, "check_asic_voltage_enable");
          if ( v16 && *(_DWORD *)v16 == 5 || v16 && *(_DWORD *)v16 == 6 )
          {
            V_LOCK();
            if ( v16 && *(_DWORD *)v16 == 5 )
              v7 = "true";
            else
              v7 = "false";
            logfmt_raw(v13, 0x1000u, 0, "check_asic_voltage_enable: %s", v7);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/topol/topol.c",
              159,
              "_parse_power",
              12,
              246,
              20,
              v13);
            v8 = v16 && *(_DWORD *)v16 == 5;
            byte_1612A1 = v8;
            v16 = json_object_get(v14, "check_asic_voltage");
            if ( v16 && *(_DWORD *)v16 == 3 )
            {
              V_LOCK();
              v9 = json_integer_value((int)v16);
              logfmt_raw(v13, 0x1000u, 0, "check_asic_voltage: %d", v9);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/topol/topol.c",
                159,
                "_parse_power",
                12,
                255,
                20,
                v13);
              dword_1612A4 = json_integer_value((int)v16);
              v16 = json_object_get(v14, "i2c_addr");
              if ( v16 && *(_DWORD *)v16 == 3 )
              {
                V_LOCK();
                v10 = json_integer_value((int)v16);
                logfmt_raw(v13, 0x1000u, 0, "i2c_addr: %d", v10);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/backend/topol/topol.c",
                  159,
                  "_parse_power",
                  12,
                  264,
                  20,
                  v13);
                dword_1612A8 = json_integer_value((int)v16);
                v16 = json_object_get(v14, "gpio");
                if ( v16 && *(_DWORD *)v16 == 3 )
                {
                  V_LOCK();
                  v11 = json_integer_value((int)v16);
                  logfmt_raw(v13, 0x1000u, 0, "gpio: %d", v11);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/b"
                    "uild/godminer-origin_godminer-branch1/backend/topol/topol.c",
                    159,
                    "_parse_power",
                    12,
                    273,
                    20,
                    v13);
                  dword_1612AC = json_integer_value((int)v16);
                  return 0;
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v13, 0x1000u, 0, "get gpio failed");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/b"
                    "uild/godminer-origin_godminer-branch1/backend/topol/topol.c",
                    159,
                    "_parse_power",
                    12,
                    270,
                    100,
                    v13);
                  return -1;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v13, 0x1000u, 0, "get i2c_addr failed");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/backend/topol/topol.c",
                  159,
                  "_parse_power",
                  12,
                  261,
                  100,
                  v13);
                return -1;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v13, 0x1000u, 0, "get check_asic_voltage failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/topol/topol.c",
                159,
                "_parse_power",
                12,
                252,
                100,
                v13);
              return -1;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, "get check_asic_voltage_enable failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/topol/topol.c",
              159,
              "_parse_power",
              12,
              243,
              100,
              v13);
            return -1;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "get is_adjustable_power failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "_parse_power",
            12,
            234,
            100,
            v13);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, "get version array failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/topol/topol.c",
          159,
          "_parse_power",
          12,
          221,
          100,
          v13);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "get type failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_power",
        12,
        213,
        100,
        v13);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "get power failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "_parse_power",
      12,
      205,
      100,
      v13);
    return -1;
  }
}
