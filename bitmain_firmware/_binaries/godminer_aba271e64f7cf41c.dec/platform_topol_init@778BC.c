int platform_topol_init()
{
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  char v6[8]; // [sp+14h] [bp-1108h] BYREF
  _BYTE v7[252]; // [sp+1014h] [bp-108h] BYREF
  const json_t *file; // [sp+1110h] [bp-Ch]
  int v9; // [sp+1114h] [bp-8h]

  v9 = 0;
  file = json_load_file("/etc/topol.conf", 0, (json_error_t *)v7);
  if ( file && !*(_DWORD *)file )
  {
    v9 = sub_6F850(file);
    if ( v9 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "parse machine failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "platform_topol_init",
        19,
        1519,
        20,
        v6);
    }
    else
    {
      v9 = sub_6FD8C(file);
      if ( v9 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "parse processor failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/topol/topol.c",
          159,
          "platform_topol_init",
          19,
          1526,
          20,
          v6);
      }
      else
      {
        v9 = sub_70010(file);
        if ( v9 )
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "parse power failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/topol/topol.c",
            159,
            "platform_topol_init",
            19,
            1533,
            20,
            v6);
        }
        else
        {
          v9 = sub_70BDC(file);
          if ( v9 )
          {
            V_LOCK();
            logfmt_raw(v6, 0x1000u, 0, "parse fan failed");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/topol/topol.c",
              159,
              "platform_topol_init",
              19,
              1540,
              20,
              v6);
          }
          else
          {
            v9 = sub_75B94(file);
            if ( v9 )
            {
              V_LOCK();
              logfmt_raw(v6, 0x1000u, 0, "parse chain failed");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/backend/topol/topol.c",
                159,
                "platform_topol_init",
                19,
                1548,
                20,
                v6);
            }
          }
        }
      }
    }
    sub_6F280((int)file);
    sub_778A0(v1, v2, v3, v4);
    if ( v9 )
      return 304;
    else
      return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "load topol config file %s failed", "/etc/topol.conf");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "platform_topol_init",
      19,
      1512,
      20,
      v6);
    return -1;
  }
}
