__int64 call_setsystime_from_http()
{
  char v1[12]; // [sp+10h] [bp-200Ch] BYREF
  char v2[4096]; // [sp+1010h] [bp-100Ch] BYREF
  int v3; // [sp+2010h] [bp-Ch]
  int v4; // [sp+2014h] [bp-8h]

  v3 = 0;
  strcpy(v2, "/www/pages/cgi-bin/getandsettime.cgi");
  v4 = 36;
  v4 = my_system(v2);
  if ( v4 )
    setsystime_basestampfile();
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "port system time result=%d", v4);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/god-miner.c",
           149,
           "call_setsystime_from_http",
           25,
           1656,
           40,
           v1);
}
