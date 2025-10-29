unsigned int __fastcall sub_C74B8(int a1, const char *a2, const char *a3)
{
  char v5[8]; // [sp+24h] [bp-2008h] BYREF
  char v6[8]; // [sp+1024h] [bp-1008h] BYREF
  unsigned int v7; // [sp+2024h] [bp-8h]

  v7 = snprintf(
         v6,
         0x1000u,
         "/usr/bin/symbollink.sh %s %s %s %s %s",
         *(const char **)(a1 + 8),
         (const char *)(a1 + 42),
         (const char *)(a1 + 72),
         a2,
         a3);
  if ( v7 < 0x1000 )
  {
    v7 = my_system(v6);
    if ( v7 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "my_system returned failed %d on LOG_SYMBOL_LINK", v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "_log_generate_symbol_link",
        25,
        253,
        40,
        v5);
    }
    return v7;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "too large command LOG_SYMBOL_LINK");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "_log_generate_symbol_link",
      25,
      246,
      40,
      v5);
    return -1;
  }
}
