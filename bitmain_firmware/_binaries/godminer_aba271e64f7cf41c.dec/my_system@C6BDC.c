int __fastcall my_system(const char *a1)
{
  int *v2; // r0
  char *v3; // r0
  char v5[12]; // [sp+18h] [bp-140Ch] BYREF
  char v6[12]; // [sp+1018h] [bp-40Ch] BYREF
  FILE *stream; // [sp+1418h] [bp-Ch]
  int v8; // [sp+141Ch] [bp-8h]

  if ( a1 )
  {
    stream = popen(a1, "r");
    if ( stream )
    {
      while ( fgets(v6, 1024, stream) )
        ;
      v8 = pclose(stream);
      if ( v8 == -1 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "close popen file pointer fp error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/common/general/log/log.c",
          162,
          "my_system",
          9,
          169,
          40,
          v5);
        return v8;
      }
      else if ( v8 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "pclose res is :%d", (v8 & 0x7F) == 0);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/common/general/log/log.c",
          162,
          "my_system",
          9,
          178,
          40,
          v5);
        return BYTE1(v8);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK();
      v2 = _errno_location();
      v3 = strerror(*v2);
      logfmt_raw(v5, 0x1000u, 0, "popen error: %s", v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "my_system",
        9,
        158,
        40,
        v5);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "cmd is NULL!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/common/general/log/log.c",
      162,
      "my_system",
      9,
      153,
      40,
      v5);
    return -1;
  }
}
