int __fastcall http_test_bm(int a1, char *a2, pool *a3)
{
  int miner_sale_hashrate; // r0
  size_t v4; // r0
  const char *v5; // r12
  char *v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r3
  char v10; // r2
  int v11; // r0
  char v17[20]; // [sp+20h] [bp-1054h] BYREF
  __int64 ptr; // [sp+1020h] [bp-54h] BYREF
  __int16 v19; // [sp+1028h] [bp-4Ch]
  __int64 v20; // [sp+102Ah] [bp-4Ah]
  int v21; // [sp+1034h] [bp-40h] BYREF
  int v22; // [sp+1038h] [bp-3Ch] BYREF
  int v23; // [sp+103Ch] [bp-38h] BYREF
  int miner_qualified_hashrate; // [sp+1040h] [bp-34h]
  int v25; // [sp+1044h] [bp-30h]
  FILE *stream; // [sp+1048h] [bp-2Ch]
  int v27; // [sp+104Ch] [bp-28h]
  _DWORD *all_created_runtime; // [sp+1050h] [bp-24h]
  int v29; // [sp+1054h] [bp-20h]
  int miner_power; // [sp+1058h] [bp-1Ch]
  int i; // [sp+105Ch] [bp-18h]

  v23 = -1;
  v22 = -1;
  v21 = 0;
  v29 = 0;
  all_created_runtime = get_all_created_runtime(&v21);
  if ( strstr((const char *)(a1 + 4), "/rate") )
  {
    miner_qualified_hashrate = 0;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      310,
      20,
      v17);
    miner_qualified_hashrate = get_miner_qualified_hashrate();
    sub_312B8(a2, (size_t)a3, miner_qualified_hashrate);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/test") )
  {
    _isoc99_sscanf(a1 + 4, "/test.%d.%d", &v23, &v22);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get test = %d", v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      317,
      20,
      v17);
    if ( v23 == 523 )
      get_miner_info((int)a2);
    else
      sprintf(a2, "OK get test=%d", v23);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/ideal_rate") )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get ideal rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      331,
      20,
      v17);
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_312B8(a2, (size_t)a3, miner_sale_hashrate);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/max_rate") )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get max rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      337,
      20,
      v17);
    v25 = 102 * get_theory_hashrate() / 100;
    sub_312B8(a2, (size_t)a3, v25);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/miner_status") )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get miner status");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      343,
      20,
      v17);
    packed_rename((CURL *)a2, a3);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/productName") )
  {
    V_LOCK();
    v4 = strlen(g_miner_type);
    logfmt_raw(v17, 0x1000u, 0, "cmd : get miner type[%d] %s", v4, g_miner_type);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      348,
      20,
      v17);
    strcpy(a2, g_miner_type);
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/get_sn", 7u) )
  {
    v27 = 0;
    ptr = 0;
    v19 = 0;
    v20 = 0;
    stream = 0;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get miner sn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      356,
      20,
      v17);
    stream = fopen((const char *)g_miner_sn_file_path, "r");
    if ( stream )
    {
      fread(&ptr, 0x11u, 1u, stream);
      fclose(stream);
    }
    else
    {
      v27 = -1;
    }
    if ( !(_BYTE)ptr )
      v27 = -2;
    if ( v27 )
      strcpy(a2, "no miner sn stored on board");
    else
      snprintf(a2, 0x12u, "%s", (const char *)&ptr);
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/set_sn", 7u) )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : set miner sn, doesn't spport");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/http_test.c",
      149,
      "http_test_bm",
      12,
      430,
      80,
      v17);
    v5 = "doesn't support sn set in Release mode";
    v6 = a2;
    do
    {
      v7 = *((_DWORD *)v5 + 1);
      v8 = *((_DWORD *)v5 + 2);
      v9 = *((_DWORD *)v5 + 3);
      *(_DWORD *)v6 = *(_DWORD *)v5;
      *((_DWORD *)v6 + 1) = v7;
      *((_DWORD *)v6 + 2) = v8;
      *((_DWORD *)v6 + 3) = v9;
      v5 += 16;
      v6 += 16;
    }
    while ( v5 != "e mode" );
    *(_DWORD *)v6 = *(_DWORD *)v5;
    v10 = v5[6];
    *((_WORD *)v6 + 2) = *((_WORD *)v5 + 2);
    v6[6] = v10;
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/miner_power", 0xCu) )
  {
    miner_power = bitmain_get_miner_power();
    snprintf(a2, (size_t)a3, "miner power:%d", miner_power);
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/miner_temp", 0xBu) )
  {
    for ( i = 0; i < v21; ++i )
    {
      if ( *(_BYTE *)(all_created_runtime[i] + 256) )
      {
        (*(void (__fastcall **)(_DWORD, char *, int))(all_created_runtime[i] + 208))(all_created_runtime[i], v17, 4000);
        v11 = snprintf(&a2[v29], (size_t)a3 - v29, "chain_fd %d:\n%s\n", *(_DWORD *)(all_created_runtime[i] + 252), v17);
        v29 += v11;
      }
    }
    return 0;
  }
  return -1;
}
