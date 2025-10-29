int __fastcall sub_6F4F4(int a1, unsigned __int8 a2)
{
  _BYTE v6[24]; // [sp+18h] [bp+8h] BYREF
  _DWORD v7[4]; // [sp+1018h] [bp+1008h] BYREF
  int v8; // [sp+1028h] [bp+1018h]
  int i; // [sp+102Ch] [bp+101Ch]

  memset(v7, 0, sizeof(v7));
  LOBYTE(v7[2]) = 0;
  BYTE1(v7[2]) = a2;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s chip_addr %02x reg %02x", "open_33p_double_results_grin29", a2, 2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
    89,
    "open_33p_double_results_grin29",
    30,
    264,
    60,
    v6);
  for ( i = 0; i <= 0; ++i )
  {
    HIWORD(v7[2]) = 2;
    LOBYTE(v7[3]) = -1;
    v7[0] = 1;
    v8 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v7);
    if ( v8 < 0 )
    {
      printf("%s failed, reg:%02x, core_id:%d", "open_33p_double_results_grin29", HIWORD(v7[2]), i);
      return -1;
    }
    usleep(0x4E20u);
  }
  return 0;
}
