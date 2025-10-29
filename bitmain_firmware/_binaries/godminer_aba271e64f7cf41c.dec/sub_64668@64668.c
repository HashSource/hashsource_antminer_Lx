int __fastcall sub_64668(char a1, _BYTE *a2)
{
  int v2; // r3
  char v6[52]; // [sp+30h] [bp-1074h] BYREF
  _DWORD v7[7]; // [sp+1030h] [bp-74h] BYREF
  int v8; // [sp+104Ch] [bp-58h]
  _DWORD v9[7]; // [sp+1050h] [bp-54h] BYREF
  int v10; // [sp+106Ch] [bp-38h]
  int *v11; // [sp+1074h] [bp-30h]
  struct timespec *v12; // [sp+1078h] [bp-2Ch]
  struct timespec *tp; // [sp+107Ch] [bp-28h]
  pthread_mutex_t *v14; // [sp+1080h] [bp-24h]
  unsigned int seconds; // [sp+1084h] [bp-20h]
  __int64 v16; // [sp+1088h] [bp-1Ch]
  unsigned __int8 v17; // [sp+1093h] [bp-11h]
  int i; // [sp+1094h] [bp-10h]

  v17 = 0;
  if ( byte_1524C8 != 1 )
  {
    tp = (struct timespec *)&dword_1524CC;
    clock_gettime(1, (struct timespec *)&dword_1524CC);
    byte_1524C8 = 1;
  }
  for ( i = 0; i < total_pools; ++i )
  {
    v14 = *(pthread_mutex_t **)(pools + 4 * i);
    if ( (unsigned __int8)pool_tget(v14, (unsigned __int8 *)&v14[79].__size[8]) != 1 && pools_active )
    {
      v12 = (struct timespec *)&dword_1524CC;
      clock_gettime(1, (struct timespec *)&dword_1524CC);
      set_miner_6060info_network_lost_err(0);
    }
  }
  v11 = &dword_1524CC;
  clock_gettime(1, (struct timespec *)&dword_1524D4);
  v16 = (dword_1524D8 - dword_1524D0) / 1000000
      + vshld_n_s64(
          4 * (vshld_n_s64(dword_1524D4 - dword_1524CC, 5u) - (dword_1524D4 - dword_1524CC))
        + dword_1524D4
        - dword_1524CC,
          3u);
  if ( byte_1524DC && v16 <= 59999 )
  {
    seconds = rand() % 120 + 60;
    V_LOCK();
    logfmt_raw(
      v6,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      seconds);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
      183,
      "check_lost_connection_to_pool",
      29,
      137,
      80,
      v6);
    sleep(seconds);
    exit(1);
  }
  if ( a1 )
  {
    if ( v16 <= 60000 )
    {
      dword_1524E0 = 0;
    }
    else
    {
      v2 = dword_1524E0++;
      if ( !(v2 % 60) )
      {
        V_LOCK();
        sub_63518((int)v7, "net lost");
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v8,
          v7[0],
          v7[1],
          v7[2],
          v7[3],
          v7[4],
          v7[5],
          v7[6],
          v8,
          "lost internet for %d seconds",
          (int)v16 / 1000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
          183,
          "check_lost_connection_to_pool",
          29,
          145,
          100,
          v6);
        set_miner_6060info_network_lost_err(1);
      }
      v17 = 1;
    }
    if ( (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-branch1/backend/backend_ltc_1491/chip_reg_io_ltc_1491.c" < v16
      && byte_1524DC != 1 )
    {
      V_LOCK();
      sub_63518((int)v9, "net lost");
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "lost internet %d seconds > 20 minutes, poweroff.",
        (int)v16 / 1000);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/check_miner_status.c",
        183,
        "check_lost_connection_to_pool",
        29,
        156,
        120,
        v6);
      *a2 = 1;
      byte_1524DC = 1;
    }
  }
  return v17;
}
