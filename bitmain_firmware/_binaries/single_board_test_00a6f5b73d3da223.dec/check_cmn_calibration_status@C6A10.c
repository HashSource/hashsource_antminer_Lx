int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  _BYTE v6[4080]; // [sp+20h] [bp+10h] BYREF
  _BYTE v7[16]; // [sp+1020h] [bp+1010h] BYREF
  unsigned __int8 v8; // [sp+1033h] [bp+1023h]
  int v9; // [sp+1034h] [bp+1024h]
  int j; // [sp+1038h] [bp+1028h]
  unsigned __int8 i; // [sp+103Fh] [bp+102Fh]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s...", "check_cmn_calibration_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_cmn_calibration_status",
    28,
    8552,
    60,
    v6);
  v9 = 1;
  v9 = sub_7936C(v7);
  for ( i = 0; i <= 7u; ++i )
  {
    for ( j = 0; j < v9; ++j )
    {
      v8 = v7[j];
      if ( v8 != 3 && *(_BYTE *)(a3 + v8 + 16 * i) )
        check_cmn_calibration_status_1_phy(a1, i, v8);
    }
  }
  return 0;
}
