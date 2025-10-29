int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  _BYTE v7[8]; // [sp+20h] [bp+10h] BYREF
  unsigned __int16 v8; // [sp+1022h] [bp+1012h] BYREF
  unsigned int i; // [sp+1024h] [bp+1014h]

  if ( a3 <= 2 )
    return 0;
  for ( i = 0; i <= 2; ++i )
  {
    v8 = 0;
    sub_F7C84(a1, aPqt[i], &v8);
    *(_WORD *)(a2 + 2 * i) = v8;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Get one chain ISL: domain addr = %x vol=%u", (unsigned __int8)aPqt[i], v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
      87,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v7);
  }
  return 1;
}
