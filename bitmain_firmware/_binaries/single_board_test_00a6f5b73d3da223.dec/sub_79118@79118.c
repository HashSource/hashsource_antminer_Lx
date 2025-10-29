char *__fastcall sub_79118(const char *a1, signed int a2)
{
  char *result; // r0
  _BYTE v3[4096]; // [sp+18h] [bp+8h] BYREF

  if ( a2 > 63 || dword_47A2D0[0] > 63 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "slt_result is full!");
    V_UNLOCK();
    return (char *)zlog(
                     g_zc,
                     "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                     83,
                     "set_test_result",
                     15,
                     141,
                     100,
                     v3);
  }
  else
  {
    result = strncpy((char *)&dword_47A2D0[16 * dword_47A2D0[0] + 1], a1, a2);
    ++dword_47A2D0[0];
  }
  return result;
}
