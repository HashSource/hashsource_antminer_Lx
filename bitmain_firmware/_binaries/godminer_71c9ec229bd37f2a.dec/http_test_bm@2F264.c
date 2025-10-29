char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r7
  char *v5; // r4
  FILE *v6; // r3
  int miner_qualified_hashrate; // r3
  int v10; // r2
  int theory_hashrate; // r0
  int v12; // r0
  FILE *v13; // r3
  int v14; // [sp+14h] [bp-1020h] BYREF
  int v15; // [sp+18h] [bp-101Ch] BYREF
  int v16; // [sp+1Ch] [bp-1018h] BYREF
  int v17; // [sp+20h] [bp-1014h]
  int v18; // [sp+24h] [bp-1010h]
  int v19; // [sp+28h] [bp-100Ch]
  __int16 v20; // [sp+2Ch] [bp-1008h]
  char v21[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v14 = -1;
  v15 = -1;
  if ( !http_service_all_ready )
  {
    v5 = (char *)strncmp((const char *)(a1 + 4), "/get_sn", 7u);
    if ( !v5 )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : get miner sn");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        327,
        20,
        v21);
      v6 = (FILE *)fopen64(g_miner_sn_file_path, "r");
      if ( v6 )
      {
        fread(&v16, 0x11u, 1u, v6);
        if ( (_BYTE)v16 )
        {
          snprintf(a2, 0x12u, "%s", (const char *)&v16);
          return 0;
        }
      }
LABEL_17:
      strcpy(a2, "no miner sn stored on board");
      return v5;
    }
    return (char *)-1;
  }
  v5 = strstr((const char *)(a1 + 4), "/rate");
  if ( !v5 )
  {
    if ( strstr(v4, "/test") )
    {
      _isoc99_sscanf(v4, "/test.%d.%d", &v14, &v15);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : get test = %d", v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        388,
        20,
        v21);
      if ( v14 == 523 )
        get_miner_info(a2);
      else
        sprintf(a2, "OK get test=%d", v14);
      return v5;
    }
    v5 = strstr(v4, "/ideal_rate");
    if ( v5 )
    {
      V_LOCK();
      v5 = 0;
      logfmt_raw(v21, 0x1000u, 0, "cmd : get ideal rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        402,
        20,
        v21);
      theory_hashrate = get_theory_hashrate();
      sub_2E9D8(a2, a3, theory_hashrate);
      return v5;
    }
    if ( strstr(v4, "/max_rate") )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : get max rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        408,
        20,
        v21);
      v12 = get_theory_hashrate();
      sub_2E9D8(a2, a3, 102 * v12 / 100);
      return v5;
    }
    v5 = strstr(v4, "/miner_status");
    if ( v5 )
    {
      V_LOCK();
      v5 = 0;
      logfmt_raw(v21, 0x1000u, 0, "cmd : get miner status");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        414,
        20,
        v21);
      return v5;
    }
    if ( strstr(v4, "/productName") )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : get miner type");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        419,
        20,
        v21);
      snprintf(a2, 0x100u, "%s", g_miner_type);
      return v5;
    }
    v5 = (char *)strncmp(v4, "/get_sn", 7u);
    if ( !v5 )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : get miner sn");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        427,
        20,
        v21);
      v13 = (FILE *)fopen64(g_miner_sn_file_path, "r");
      if ( v13 )
      {
        fread(&v16, 0x11u, 1u, v13);
        if ( (_BYTE)v16 )
        {
          snprintf(a2, 0x12u, "%s", (const char *)&v16);
          return v5;
        }
      }
      goto LABEL_17;
    }
    v5 = (char *)strncmp(v4, "/set_sn", 7u);
    if ( !v5 )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "cmd : set miner sn, doesn't spport");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        500,
        60,
        v21);
      snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
      return v5;
    }
    return (char *)-1;
  }
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "cmd : get rate");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/http_test.c",
    132,
    "http_test_bm",
    12,
    360,
    20,
    v21);
  switch ( opt_algo )
  {
    case 7:
      goto LABEL_21;
    case 6:
      miner_qualified_hashrate = get_miner_qualified_hashrate();
      break;
    case 5:
LABEL_21:
      miner_qualified_hashrate = get_theory_hashrate();
      break;
    default:
      miner_qualified_hashrate = 98 * get_theory_hashrate() / 100;
      break;
  }
  v10 = 1130;
  if ( opt_algo != 2 )
    v10 = miner_qualified_hashrate;
  sub_2E9D8(a2, a3, v10);
  return 0;
}
