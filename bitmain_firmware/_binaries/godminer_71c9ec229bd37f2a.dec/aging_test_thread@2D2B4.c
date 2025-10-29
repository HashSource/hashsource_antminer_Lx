int aging_test_thread()
{
  pthread_t v0; // r0
  int v1; // r7
  int v2; // r5
  char *all_created_runtime; // r0
  char *v4; // r9
  int v5; // t1
  int v6; // r5
  char *v7; // r10
  int v8; // t1
  int v9; // r2
  int v10; // r9
  char *v11; // r5
  char *v12; // r10
  _DWORD *v13; // t1
  int i; // r10
  int v15; // t1
  int v16; // r9
  char *v17; // r5
  int v18; // t1
  int v19; // r0
  float v20; // s15
  int v21; // r3
  int v22; // r5
  char *v23; // r9
  char *v24; // r10
  _DWORD *v25; // t1
  int v26; // r5
  int v27; // t1
  char *v28; // r2
  int v30; // [sp+4h] [bp-1020h]
  char *v31; // [sp+10h] [bp-1014h]
  pthread_t v32; // [sp+18h] [bp-100Ch] BYREF
  int v33; // [sp+1Ch] [bp-1008h] BYREF
  char v34[4100]; // [sp+20h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_2C8F8();
  aging_test_status = 1;
  v1 = test_times + 1;
  v2 = 0;
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, "================aging test[%d] start================", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "aging_test_thread",
    17,
    445,
    40,
    v34);
  v33 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v33);
  v31 = all_created_runtime;
  if ( v1 <= 15 )
  {
    if ( v33 > 0 )
    {
      v4 = all_created_runtime - 4;
      do
      {
        v5 = *((_DWORD *)v4 + 1);
        v4 += 4;
        (*(void (**)(void))(v5 + 4))();
        V_LOCK();
        v30 = v2++;
        logfmt_raw(v34, 0x1000u, 0, "[%d] chain-%d set chip finish before aging test low power test", v1, v30);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "aging_test_thread",
          17,
          454,
          40,
          v34);
      }
      while ( v33 > v2 );
    }
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "[%d] stable cur and vol before aging test...", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "aging_test_thread",
      17,
      456,
      40,
      v34);
    sleep(0x1Eu);
    if ( v33 > 0 )
    {
      v6 = 0;
      v7 = v31 - 4;
      do
      {
        v8 = *((_DWORD *)v7 + 1);
        v7 += 4;
        ++v6;
        (*(void (**)(void))(v8 + 132))();
        v9 = v33;
        *(_BYTE *)(*(_DWORD *)v7 + 155) = 1;
      }
      while ( v9 > v6 );
    }
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "[%d] root temp aging test waitting...", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "aging_test_thread",
      17,
      464,
      40,
      v34);
    sleep(0x12Cu);
    if ( v33 > 0 )
    {
      v10 = 0;
      v11 = v31 - 4;
      v12 = v31 - 4;
      do
      {
        v13 = (_DWORD *)*((_DWORD *)v12 + 1);
        v12 += 4;
        ++v10;
        if ( !check_asic_num_ltc(v13, 1) )
          aging_test_status = 0;
      }
      while ( v33 > v10 );
      if ( v33 > 0 )
      {
        for ( i = 0; i < v33; ++i )
        {
          v15 = *((_DWORD *)v11 + 1);
          v11 += 4;
          *(_BYTE *)(v15 + 155) = 0;
          (*(void (__fastcall **)(int))(v15 + 8))(v15);
        }
      }
    }
    usleep(0x30D40u);
    tmp_ctrl_enable = 1;
    pthread_create(&v32, 0, (void *(*)(void *))set_pwm_by_temp_ltc, 0);
    if ( v33 > 0 )
    {
      v16 = 0;
      v17 = v31 - 4;
      do
      {
        v18 = *((_DWORD *)v17 + 1);
        v17 += 4;
        (*(void (**)(void))(v18 + 4))();
        V_LOCK();
        logfmt_raw(v34, 0x1000u, 0, "[%d] chain-%d set chip finish before high power test", v1, v16);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "aging_test_thread",
          17,
          494,
          40,
          v34);
        usleep(0x30D40u);
        v19 = *(_DWORD *)v17;
        v20 = *(float *)(*(_DWORD *)v17 + 768);
        *(_DWORD *)(*(_DWORD *)v17 + 280) = 900;
        if ( v20 > 900.0 )
        {
          do
          {
            (*(void (__fastcall **)(int, int))(v19 + 132))(v19, 25);
            v19 = *(_DWORD *)v17;
          }
          while ( (float)*(int *)(*(_DWORD *)v17 + 280) < *(float *)(*(_DWORD *)v17 + 768) );
        }
        v21 = v33;
        ++v16;
        *(_BYTE *)(v19 + 155) = 1;
      }
      while ( v21 > v16 );
    }
    while ( !high_tmp_aging_start )
    {
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, "[%d] high_tmp_aging_start[%d]", v1, (unsigned __int8)high_tmp_aging_start);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "aging_test_thread",
        17,
        503,
        40,
        v34);
      sleep(0x3Cu);
    }
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "[%d] reached target temp aging threshold!", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "aging_test_thread",
      17,
      504,
      40,
      v34);
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "[%d] high temp aging test waitting...", v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "aging_test_thread",
      17,
      524,
      40,
      v34);
    sleep(0x12Cu);
    if ( v33 > 0 )
    {
      v22 = 0;
      v23 = v31 - 4;
      v24 = v31 - 4;
      do
      {
        v25 = (_DWORD *)*((_DWORD *)v24 + 1);
        v24 += 4;
        ++v22;
        if ( !check_asic_num_ltc(v25, 1) )
          aging_test_status = 0;
      }
      while ( v33 > v22 );
      if ( v33 > 0 )
      {
        v26 = 0;
        do
        {
          v27 = *((_DWORD *)v23 + 1);
          v23 += 4;
          ++v26;
          *(_BYTE *)(v27 + 155) = 0;
          (*(void (__fastcall **)(int))(v27 + 8))(v27);
          high_tmp_aging_start = 0;
          tmp_ctrl_enable = 0;
        }
        while ( v33 > v26 );
      }
    }
    usleep(0x30D40u);
  }
  aging_test_exit = 1;
  tmp_ctrl_enable = 0;
  V_LOCK();
  v28 = "FAIL";
  if ( aging_test_status )
    v28 = "SUCCESS";
  logfmt_raw(v34, 0x1000u, 0, "================aging test[%d] %s!================", v1, v28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "aging_test_thread",
    17,
    554,
    40,
    v34);
  return 0;
}
