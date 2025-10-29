int __fastcall check_sn(int a1)
{
  size_t v2; // r0
  char v4[32]; // [sp+1Ch] [bp-1020h] BYREF
  __int64 ptr; // [sp+101Ch] [bp-20h] BYREF
  __int16 v6; // [sp+1024h] [bp-18h]
  __int64 v7; // [sp+1026h] [bp-16h]
  char *v8; // [sp+1030h] [bp-Ch]
  FILE *stream; // [sp+1034h] [bp-8h]

  ptr = 0;
  v6 = 0;
  v7 = 0;
  stream = 0;
  if ( a1 )
    g_miner_sn_file_path = a1;
  else
    g_miner_sn_file_path = (int)"/config/sn";
  stream = fopen((const char *)g_miner_sn_file_path, "r");
  if ( stream )
  {
    if ( fread(&ptr, 0x11u, 1u, stream) )
    {
      v8 = strstr((const char *)&ptr, "\r\n");
      if ( v8 )
        strncpy(g_miner_sn, (const char *)&ptr, v8 - (char *)&ptr);
      else
        strcpy(g_miner_sn, (const char *)&ptr);
      if ( g_miner_sn[strlen(g_miner_sn) - 1] == 10 )
        g_miner_sn[strlen(g_miner_sn) - 1] = 0;
      if ( g_miner_sn[strlen(g_miner_sn) - 1] == 13 )
        g_miner_sn[strlen(g_miner_sn) - 1] = 0;
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "droa miner sn: %s", &ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/check_sn.c",
        159,
        "check_sn",
        8,
        49,
        60,
        v4);
      fclose(stream);
      return 0;
    }
    else
    {
      if ( (_BYTE)ptr )
      {
        V_LOCK();
        v2 = strlen((const char *)&ptr);
        logfmt_raw(v4, 0x1000u, 0, "miner sn: not support length %d:%s", v2, &ptr);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/check_sn.c",
          159,
          "check_sn",
          8,
          55,
          100,
          v4);
      }
      else
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "miner sn: is NULL");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/check_sn.c",
          159,
          "check_sn",
          8,
          57,
          100,
          v4);
      }
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/check_sn.c",
      159,
      "check_sn",
      8,
      23,
      100,
      v4);
    return 2;
  }
}
