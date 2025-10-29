int __fastcall dump_work(_DWORD *a1)
{
  int v3; // [sp+24h] [bp+Ch] BYREF
  unsigned int i; // [sp+1024h] [bp+100Ch]

  V_LOCK();
  logfmt_raw(
    &v3,
    0x1000u,
    0,
    "grin29 dump work poolid %ld jobid %lu start_nonce %lu",
    *a1,
    a1[1],
    a1[2],
    a1[3],
    *(_DWORD *)((char *)a1 + 254),
    *(_DWORD *)((char *)a1 + 258));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_grin29/backend_grin29.c",
    89,
    "dump_work",
    9,
    71,
    60,
    &v3);
  for ( i = 0; i <= 0xED; ++i )
    printf("%02x ", *((unsigned __int8 *)a1 + i + 16));
  return putchar(10);
}
