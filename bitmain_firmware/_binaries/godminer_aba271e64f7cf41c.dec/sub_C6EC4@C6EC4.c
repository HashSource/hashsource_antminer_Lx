unsigned int __fastcall sub_C6EC4(int a1, const char *a2, const char *a3, const char *a4)
{
  char v6[8]; // [sp+2Ch] [bp-2008h] BYREF
  char v7[8]; // [sp+102Ch] [bp-1008h] BYREF
  unsigned int v8; // [sp+202Ch] [bp-8h]

  v8 = snprintf(
         v7,
         0x1000u,
         "/usr/bin/updatename.sh %s %s %s %s %s %s",
         *(const char **)(a1 + 8),
         (const char *)(a1 + 42),
         (const char *)(a1 + 72),
         a2,
         a3,
         a4);
  if ( v8 < 0x1000 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "_log_update_name");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "_log_update_name",
      16,
      195,
      20,
      v6);
    v8 = my_system(v7);
    if ( v8 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "my_system returned failed %d on LOGUPDATENAME", v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "_log_update_name",
        16,
        199,
        40,
        v6);
    }
    return v8;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "too large command LOGUPDATENAME");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "_log_update_name",
      16,
      192,
      40,
      v6);
    return -1;
  }
}
