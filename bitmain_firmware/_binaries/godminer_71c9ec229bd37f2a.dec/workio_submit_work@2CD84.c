int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v8; // r3
  int v9; // [sp+28h] [bp-1428h]
  _DWORD v10[7]; // [sp+30h] [bp-1420h] BYREF
  int v11; // [sp+4Ch] [bp-1404h]
  _DWORD v12[7]; // [sp+50h] [bp-1400h] BYREF
  int v13; // [sp+6Ch] [bp-13E4h]
  char v14[4096]; // [sp+450h] [bp-1000h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[86].__size[8]);
  if ( v5 )
  {
    V_LOCK();
    V_INT((int)v12, "poolno", a2->__lock);
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "submit idle pool's nonce.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "workio_submit_work",
      18,
      176,
      20,
      v14);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes(&a2->__lock);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _DWORD *))(v4 + 36))(a1, a2, v12);
    do
    {
      v6 = (*(int (__fastcall **)(pthread_mutex_t *, _DWORD *))(v4 + 16))(a2, v12);
      if ( v6 )
        break;
      v8 = total_ro + 1;
      ++a2[88].__owner;
      total_ro = v8;
      V_LOCK();
      V_INT((int)v10, "poolno", a2->__lock);
      v9 = v5++;
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v11,
        v10[0],
        v10[1],
        v10[2],
        v10[3],
        v10[4],
        v10[5],
        v10[6],
        v11,
        "submit_upstream_work stratum_send_line failed %d count %d",
        0,
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "workio_submit_work",
        18,
        190,
        100,
        v14);
    }
    while ( v5 != 4 );
    return v6;
  }
}
