char *__fastcall sub_2CE3C(int a1, _DWORD *a2)
{
  char *result; // r0
  char v5[8]; // [sp+1Ch] [bp-1008h] BYREF
  char *v6; // [sp+101Ch] [bp-8h]

  while ( 1 )
  {
    result = (char *)getopt_long(a1, (int)a2, "a:c:hp:Po:u:v:F", (int)&off_D7024, 0);
    v6 = result;
    if ( (int)result < 0 )
      break;
    parse_arg(v6, (char *)optarg);
  }
  if ( a1 > optind )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *a2, a2[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "parse_cmdline",
      13,
      580,
      100,
      v5);
    exit(1);
  }
  return result;
}
