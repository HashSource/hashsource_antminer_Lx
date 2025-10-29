int __fastcall get_special_core_reg(int a1)
{
  _BYTE v3[20]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 *v5; // [sp+1020h] [bp+1010h]
  int j; // [sp+1024h] [bp+1014h]
  unsigned __int8 i; // [sp+102Bh] [bp+101Bh]
  int v8; // [sp+102Ch] [bp+101Ch]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "get_special_core_reg");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_special_core_reg",
    20,
    8344,
    60,
    v3);
  v8 = 0;
  v5 = (unsigned __int8 *)malloc(0x600u);
  for ( i = 0; i <= 7u; ++i )
  {
    v4 = sub_78DA0(a1, i, 255, 81, v5);
    for ( j = 0; j < v4; ++j )
    {
      V_LOCK();
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "chip %02x core %02x addr %04x, %08x",
        v5[12 * j + 4],
        v5[12 * j + 8],
        81,
        *(_DWORD *)&v5[12 * j]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "get_special_core_reg",
        20,
        8351,
        20,
        v3);
    }
    if ( v4 != 16 )
    {
      v8 = 1;
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "chip %02x core reg %04x, resp_num(%d) is not enough", i, 81, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "get_special_core_reg",
        20,
        8356,
        100,
        v3);
    }
  }
  free(v5);
  return v8;
}
