int __fastcall valid_ascii(const char *a1)
{
  char v4[20]; // [sp+18h] [bp-1014h] BYREF
  unsigned __int8 v5; // [sp+101Bh] [bp-11h]
  signed int v6; // [sp+101Ch] [bp-10h]
  signed int i; // [sp+1020h] [bp-Ch]
  unsigned __int8 v8; // [sp+1027h] [bp-5h]

  v5 = 0;
  if ( a1 )
  {
    v6 = strlen(a1);
    if ( v6 )
    {
      for ( i = 0; i < v6; ++i )
      {
        v8 = a1[i];
        if ( v8 <= 0x1Fu || v8 > 0x7Eu )
        {
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, "Invalid char passed to valid_ascii");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/util.c",
            144,
            "valid_ascii",
            11,
            267,
            20,
            v4);
          return v5;
        }
      }
      v5 = 1;
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "Zero length string passed to valid_ascii");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/util.c",
        144,
        "valid_ascii",
        11,
        258,
        20,
        v4);
      return v5;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Null string passed to valid_ascii");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/util.c",
      144,
      "valid_ascii",
      11,
      252,
      20,
      v4);
    return v5;
  }
}
