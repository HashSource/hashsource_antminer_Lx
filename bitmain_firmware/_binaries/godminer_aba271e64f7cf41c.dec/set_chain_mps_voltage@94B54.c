int __fastcall set_chain_mps_voltage(int a1, char a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // r3
  __int16 v5; // r3
  char v7; // r0
  int v8; // r3
  char v9; // r0
  unsigned __int16 v12; // [sp+18h] [bp-1024h]
  char v15[24]; // [sp+24h] [bp-1018h] BYREF
  unsigned __int16 v16; // [sp+1024h] [bp-18h] BYREF
  unsigned __int16 v17; // [sp+1026h] [bp-16h] BYREF
  _BYTE v18[10]; // [sp+1028h] [bp-14h] BYREF
  __int16 v19; // [sp+1032h] [bp-Ah]
  int v20; // [sp+1034h] [bp-8h]

  v12 = a3;
  v20 = 0;
  if ( a3 > 0xA5Au || a3 <= 0x92Du )
  {
    if ( a3 > 0xA59u )
    {
      v4 = 2650;
    }
    else
    {
      v4 = a3;
      if ( a3 < 0x92Eu )
        v4 = 2350;
    }
    v12 = v4;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "the mps_voltage_1 value-%d is out of the allowed range(%d-%d)", v12, 2350, 2650);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
      174,
      "set_chain_mps_voltage",
      21,
      264,
      40,
      v15);
  }
  if ( a4 > 0xA5Au || a4 <= 0x92Du )
  {
    if ( a4 > 0xA59u )
    {
      v5 = 2650;
    }
    else
    {
      v5 = a4;
      if ( a4 < 0x92Eu )
        v5 = 2350;
    }
    a4 = v5;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "the mps_voltage_2 value-%d is out of the allowed range(%d-%d)", a4, 2350, 2650);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
      174,
      "set_chain_mps_voltage",
      21,
      270,
      40,
      v15);
  }
  get_chain_mps_voltage1(a1, a2, &v17);
  if ( v12 == v17 )
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "voltage1 is already set to %d", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
      174,
      "set_chain_mps_voltage",
      21,
      276,
      20,
      v15);
    return 0;
  }
  else
  {
    get_chain_mps_voltage2(a1, a2, &v16);
    if ( a4 == v16 )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "voltage2 is already set to %d", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
        174,
        "set_chain_mps_voltage",
        21,
        283,
        20,
        v15);
      return 0;
    }
    else
    {
      if ( !sub_94624(a1, a2, 0) )
      {
        ++v20;
      }
      else
      {
        v19 = ((__int16)(v12 - 490) / 10) & 0x1FF;
        v18[0] = (__int16)(v12 - 490) / 10;
        v18[1] = HIBYTE(v19);
        v7 = sub_93C84(a2);
        if ( !sub_944F0(a1, v7, 33, v18, 2u) )
        {
          ++v20;
        }
        else if ( !sub_94624(a1, a2, 2u) )
        {
          ++v20;
        }
        else
        {
          v8 = a4 - 490;
          v19 = (32 * (v8 / 10)) & 0x3FE0;
          v18[0] = 32 * (v8 / 10);
          v9 = sub_93C84(a2);
          if ( !sub_944F0(a1, v9, 13, v18, 2u) )
          {
            ++v20;
          }
          else
          {
            get_chain_mps_voltage1(a1, a2, &v17);
            if ( v12 == v17 )
            {
              get_chain_mps_voltage2(a1, a2, &v16);
              if ( a4 != v16 )
              {
                V_LOCK();
                logfmt_raw(v15, 0x1000u, 0, "voltage2 set failed!", a4);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
                  174,
                  "set_chain_mps_voltage",
                  21,
                  329,
                  100,
                  v15);
                ++v20;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v15, 0x1000u, 0, "voltage1 set failed!", v12);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
                174,
                "set_chain_mps_voltage",
                21,
                321,
                100,
                v15);
              ++v20;
            }
          }
        }
      }
      if ( v20 > 0 )
      {
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "set_chain_mps_voltage error, fd %d", a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/drv_pic/mps2973.c",
          174,
          "set_chain_mps_voltage",
          21,
          336,
          100,
          v15);
      }
      return v20;
    }
  }
}
