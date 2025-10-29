__int64 __fastcall sub_79398(_DWORD *a1)
{
  _BYTE v3[8]; // [sp+20h] [bp+8h] BYREF
  _WORD v4[28]; // [sp+1020h] [bp+1008h] BYREF
  unsigned int i; // [sp+1064h] [bp+104Ch]

  for ( i = 0; i <= 0x1F; ++i )
    sprintf((char *)&v4[i], "%02x", *((unsigned __int8 *)a1 + i + 16));
  V_LOCK();
  logfmt_raw(
    v3,
    0x1000u,
    0,
    "eth dump work poolid %lld start_nonce %016llx, header_hash %s",
    *a1,
    a1[1],
    a1[20],
    a1[21],
    v4);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
           83,
           "dump_work",
           9,
           197,
           60,
           v3);
}
