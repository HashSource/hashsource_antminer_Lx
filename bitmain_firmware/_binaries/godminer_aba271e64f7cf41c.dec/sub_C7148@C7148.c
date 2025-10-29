unsigned int __fastcall sub_C7148(int a1)
{
  char v4[20]; // [sp+20h] [bp-2014h] BYREF
  char v5[20]; // [sp+1020h] [bp-1014h] BYREF
  int v6; // [sp+2020h] [bp-14h]
  unsigned int v7; // [sp+2024h] [bp-10h]

  v6 = 0;
  v7 = snprintf(v5, 0x1000u, "/usr/bin/checksize.sh %d %s", 0, *(const char **)(a1 + 8));
  if ( v7 < 0x1000 )
  {
    v7 = my_system(v5);
    if ( v7 )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "my_system returned failed %d on LOGCHECKSIZE", v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "log_rotate",
        10,
        220,
        40,
        v4);
    }
    v7 = snprintf(
           v5,
           0x1000u,
           "/usr/bin/rotate.sh %d %d %s %s %s %s %s",
           v6,
           *(_DWORD *)a1,
           *(const char **)(a1 + 8),
           *(const char **)(a1 + 4),
           (const char *)(a1 + 42),
           (const char *)(a1 + 72),
           *(const char **)(a1 + 92));
    if ( v7 < 0x1000 )
    {
      v7 = my_system(v5);
      if ( v7 )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "my_system returned failed %d on LOGROTATE", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/common/general/log/log.c",
          162,
          "log_rotate",
          10,
          232,
          40,
          v4);
      }
      return v7;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "too large command LOGROTATE");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "log_rotate",
        10,
        226,
        40,
        v4);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "too large command LOGCHECKSIZE");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "log_rotate",
      10,
      214,
      40,
      v4);
    return -1;
  }
}
