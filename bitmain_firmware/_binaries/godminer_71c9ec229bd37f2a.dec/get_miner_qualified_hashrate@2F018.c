int get_miner_qualified_hashrate()
{
  double v0; // d0
  int v1; // r4
  void *all_created_runtime; // r7
  int *v4; // r8
  int v5; // r5
  int v6; // r6
  double v7; // d0
  int v8; // r9
  int v9; // s16
  int v10; // r7
  int v11; // t1
  _BOOL4 v12; // r5
  _BOOL4 v13; // r3
  int v14; // [sp+4h] [bp-10A8h]
  int v15; // [sp+24h] [bp-1088h] BYREF
  double v16; // [sp+28h] [bp-1084h] BYREF
  char v17[12]; // [sp+34h] [bp-1078h] BYREF
  _DWORD v18[8]; // [sp+40h] [bp-106Ch] BYREF
  _DWORD v19[8]; // [sp+60h] [bp-104Ch] BYREF
  char v20[20]; // [sp+80h] [bp-102Ch] BYREF
  float v21; // [sp+94h] [bp-1018h]
  double v22; // [sp+98h] [bp-1014h]
  char v23[4100]; // [sp+A8h] [bp-1004h] BYREF

  v1 = 0;
  v15 = 0;
  all_created_runtime = get_all_created_runtime(&v15);
  v18[0] = 8050;
  v18[1] = 8300;
  v18[2] = 8550;
  v18[3] = 8800;
  v18[4] = 9050;
  v18[5] = 9300;
  v18[6] = 9500;
  v18[7] = 0x7FFFFFFF;
  v19[0] = 5635;
  v19[1] = 5810;
  v19[2] = 5985;
  v19[3] = 6160;
  v19[4] = 6335;
  v19[5] = 6510;
  v19[6] = 6650;
  v19[7] = 0x7FFFFFFF;
  if ( opt_algo == 6 )
  {
    if ( *(_BYTE *)(*(_DWORD *)all_created_runtime + 788) )
      v4 = v19;
    else
      v4 = v18;
    v5 = frontend_runtime_instance();
    get_miner_elapsed_time();
    if ( v0 <= 1200.0 )
    {
      v1 = 0;
      freq_scan_status = 0;
      strcpy((char *)&search_failed_info, "searching");
    }
    else
    {
      v6 = 0;
      read_system_status_from_monitor((int)v20);
      v7 = v22;
      format_hashrate_double(*(const char **)(v5 + 84), &v16, v17);
      v1 = 0;
      v8 = (int)v16;
      v9 = (int)(v21 * v7);
      do
      {
        V_LOCK();
        v10 = *v4;
        v11 = v4[1];
        ++v4;
        v14 = v6++;
        logfmt_raw(
          v23,
          0x1000u,
          0,
          "theory_hashrate_interger, miner_hashrate[%d]: %d, miner_hashrate[%d]: %d",
          v8,
          v14,
          v10,
          v6,
          v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/http_test.c",
          132,
          "get_miner_qualified_hashrate",
          28,
          298,
          20,
          v23);
        v12 = v11 > v8;
        if ( v10 > v8 )
          v12 = 0;
        if ( v12 )
          v1 = v10;
      }
      while ( v6 != 7 );
      v13 = v1 > v9;
      if ( !v1 )
        v13 = 1;
      if ( v13 )
      {
        sub_2EA5C();
      }
      else
      {
        freq_scan_status = 1;
        strcpy((char *)&search_failed_info, "unknown");
      }
    }
  }
  return v1;
}
