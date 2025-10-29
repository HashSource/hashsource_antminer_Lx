int update_timestamp_file()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  char v4[20]; // [sp+18h] [bp-1014h] BYREF
  time_t timer; // [sp+1018h] [bp-14h] BYREF
  FILE *stream; // [sp+101Ch] [bp-10h]

  stream = fopen("/nvdata/timestamp.data", "w");
  if ( stream )
  {
    time(&timer);
    fprintf(stream, "%ld", timer);
    fflush(stream);
    return fclose(stream);
  }
  else
  {
    V_LOCK();
    v0 = *_errno_location();
    v1 = _errno_location();
    v2 = strerror(*v1);
    logfmt_raw(v4, 0x1000u, 0, "file op errno = %d reason = %s", v0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/god-miner.c",
             149,
             "update_timestamp_file",
             21,
             1623,
             40,
             v4);
  }
}
