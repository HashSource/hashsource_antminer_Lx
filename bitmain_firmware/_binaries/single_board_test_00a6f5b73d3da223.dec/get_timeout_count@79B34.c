int __fastcall get_timeout_count(int a1)
{
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int8 i; // [sp+101Fh] [bp+100Fh]

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "get_timeout_count");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_timeout_count",
    17,
    301,
    60,
    &v3);
  for ( i = 0; i <= 5u; ++i )
  {
    sub_78A20(a1, 255, i + 23, 0);
    usleep(0x2710u);
  }
  return 0;
}
