int set_pwm_by_temp_ltc()
{
  float v0; // s0
  pthread_t v1; // r0
  __int64 v2; // r10
  __int64 v3; // r2
  signed int v4; // r0
  char v5; // r2
  char *v6; // r3
  int v7; // r2
  int v8; // s17
  float v9; // s15
  unsigned int v10; // s16
  signed int v12; // [sp+24h] [bp-1008h]
  char v13[4100]; // [sp+28h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set_pwm_by_temp_ltc enter");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/set_pwm_by_temp.c",
    149,
    "set_pwm_by_temp_ltc",
    19,
    308,
    40,
    v13);
  v1 = pthread_self();
  pthread_detach(v1);
  flt_168270 = 87.0;
  flt_16827C = -5.6;
  flt_168278 = -6.8;
  dword_16540C = 1000;
  flt_168280 = -0.2;
  dword_165410 = 2000;
  flt_168284 = 0.0;
  if ( tmp_ctrl_enable )
  {
    v2 = 0;
    do
    {
      if ( byte_1682B0 )
      {
        clock_gettime(1, &stru_1682BC);
        v3 = 1000LL * (stru_1682BC.tv_sec - dword_1682B4) + (stru_1682BC.tv_nsec - dword_1682B8) / 1000000;
        if ( v2 < 20 )
        {
          if ( v3 < dword_16540C )
            goto LABEL_4;
LABEL_8:
          clock_gettime(1, (struct timespec *)&dword_1682B4);
          ++v2;
          v4 = sub_4D2CC();
          v6 = (char *)v4;
          if ( v4 > 81 )
          {
            v6 = &high_tmp_aging_start;
            v5 = 1;
          }
          v12 = v4;
          if ( v4 > 81 )
            *v6 = v5;
          flt_168274 = (float)v4;
          fan_pwm_get();
          sub_4D418();
          LODWORD(v0) = (int)v0;
          v8 = LODWORD(v0) + v7;
          v9 = (float)(LODWORD(v0) + v7);
          if ( v9 < flt_16826C )
          {
            if ( flt_168268 >= flt_16826C )
            {
              v10 = (int)flt_16826C;
              goto LABEL_17;
            }
          }
          else if ( v9 <= flt_168268 )
          {
            v10 = (int)v9;
LABEL_17:
            V_LOCK();
            logfmt_raw(
              v13,
              0x1000u,
              0,
              "get_max_chip_temp: %d, initial_stage: %d, feedback: %f, pwm_percent: [%d-%d]  ",
              v12,
              v2 < 21,
              flt_168274,
              v8,
              v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/set_pwm_by_temp.c",
              149,
              "set_pwm_by_pid_ltc",
              18,
              238,
              60,
              v13);
            fan_pwm_set(v10);
            goto LABEL_4;
          }
          v10 = (int)flt_168268;
          goto LABEL_17;
        }
        if ( v3 >= dword_165410 )
          goto LABEL_8;
      }
      else
      {
        v2 = 0;
        clock_gettime(1, (struct timespec *)&dword_1682B4);
        byte_1682B0 = 1;
      }
LABEL_4:
      usleep(0xF4240u);
    }
    while ( tmp_ctrl_enable );
  }
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set_pwm_by_temp_ltc exit, tmp_ctrl_enable: %d", (unsigned __int8)tmp_ctrl_enable);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/set_pwm_by_temp.c",
    149,
    "set_pwm_by_temp_ltc",
    19,
    341,
    40,
    v13);
  flt_16827C = -1.0;
  flt_168270 = 75.0;
  flt_168284 = 0.0;
  flt_168278 = -8.0;
  flt_168280 = -0.75;
  *(_QWORD *)&dword_16540C = 0x3A9800001388LL;
  return 0;
}
