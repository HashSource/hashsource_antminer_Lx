int __fastcall get_work_mode(int a1)
{
  _BYTE v3[12]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 *v5; // [sp+1020h] [bp+1010h]
  int i; // [sp+1024h] [bp+1014h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "get_work_mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_work_mode",
    13,
    335,
    60,
    v3);
  v5 = (unsigned __int8 *)malloc(0x600u);
  v4 = sub_78A20(a1, 255, 12, v5);
  for ( i = 0; i < v4; ++i )
  {
    V_LOCK();
    logfmt_raw(
      v3,
      0x1000u,
      0,
      "chip %02x core %02x reg %02x cnt %08x",
      v5[12 * i + 4],
      v5[12 * i + 8],
      *(unsigned __int16 *)&v5[12 * i + 6],
      *(_DWORD *)&v5[12 * i]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "get_work_mode",
      13,
      340,
      60,
      v3);
  }
  free(v5);
  return 0;
}
