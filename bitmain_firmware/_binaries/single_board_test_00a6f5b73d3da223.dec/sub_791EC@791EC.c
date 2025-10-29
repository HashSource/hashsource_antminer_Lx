__int64 sub_791EC()
{
  _BYTE v1[8]; // [sp+10h] [bp+0h] BYREF
  int i; // [sp+1010h] [bp+1000h]
  int v3; // [sp+1014h] [bp+1004h]

  v3 = 0;
  for ( i = 0; dword_47A2D0[0] > i; ++i )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "%s", &dword_47A2D0[16 * i + 1]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "print_test_result",
      17,
      149,
      60,
      v1);
    if ( strstr((const char *)&dword_47A2D0[16 * i + 1], "failed") )
      ++v3;
  }
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "slt test end!!!\n");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
           83,
           "print_test_result",
           17,
           160,
           60,
           v1);
}
