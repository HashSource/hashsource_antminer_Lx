void update_droa_log()
{
  double v0; // d0
  int v1; // r4
  int tm_mday; // r5
  int tm_hour; // r8
  int tm_min; // r9
  int tm_sec; // r10
  double v6; // r6
  int miner_status; // r0
  size_t v8; // r0
  double v9; // r4
  int v10; // r0
  int v11; // [sp+28h] [bp-1054h]
  struct tm v12; // [sp+34h] [bp-1048h] BYREF
  time_t timer; // [sp+1034h] [bp-48h] BYREF
  struct timeval tv; // [sp+1038h] [bp-44h] BYREF
  int v15; // [sp+1040h] [bp-3Ch]
  void *s; // [sp+1044h] [bp-38h]
  FILE *stream; // [sp+1048h] [bp-34h]
  int v18; // [sp+104Ch] [bp-30h]

  stream = fopen("/tmp/miner/droa.log", "r+");
  if ( stream )
  {
    v18 = 0;
    fseek(stream, -2, 2);
    while ( fgetc(stream) != 10 )
    {
      fseek(stream, -2, 1);
      ++v18;
    }
    fseek(stream, -++v18, 2);
    s = malloc(0x200u);
    memset(s, 0, 0x200u);
    fgets((char *)s, 512, stream);
    if ( strstr((const char *)s, "RTime:") )
    {
      v15 = 0;
      tv.tv_sec = 0;
      tv.tv_usec = 0;
      gettimeofday(&tv, 0);
      timer = tv.tv_sec;
      localtime_r(&timer, &v12);
      fseek(stream, -v18, 2);
      v15 = ftell(stream);
      memset(s, 0, 0x200u);
      v1 = v12.tm_year + 1900;
      v11 = v12.tm_mon + 1;
      tm_mday = v12.tm_mday;
      tm_hour = v12.tm_hour;
      tm_min = v12.tm_min;
      tm_sec = v12.tm_sec;
      get_miner_elapsed_time();
      v6 = *(double *)&g_hash_rate_5s;
      miner_status = get_miner_status();
      sprintf(
        (char *)s,
        "%d-%02d-%02d %02d:%02d:%02d RTime:%f,AR:%f,RStat:%d\n",
        v1,
        v11,
        tm_mday,
        tm_hour,
        tm_min,
        tm_sec,
        v0,
        v6,
        miner_status);
      fprintf(stream, (const char *)s);
      fflush(stream);
      fclose(stream);
      v8 = strlen((const char *)s);
      truncate("/tmp/miner/droa.log", v8 + v15);
    }
    else
    {
      fflush(stream);
      fclose(stream);
      get_miner_elapsed_time();
      v9 = *(double *)&g_hash_rate_5s;
      v10 = get_miner_status();
      snprintf((char *)&v12, 0x1000u, "RTime:%f,AR:%f,RStat:%d", v0, v9, v10);
      log_droa((const char *)&v12);
    }
    free(s);
    s = 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(&v12, 0x1000u, 0, "droalog open failed in 3 minute");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "update_droa_log",
      15,
      1763,
      40,
      (const char *)&v12);
  }
}
