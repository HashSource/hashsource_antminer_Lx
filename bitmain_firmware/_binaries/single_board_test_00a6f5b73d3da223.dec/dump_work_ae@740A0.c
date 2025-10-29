int __fastcall dump_work_ae(_DWORD *a1)
{
  int v2; // [sp+Ch] [bp-Ch]
  int v4; // [sp+24h] [bp+Ch] BYREF
  unsigned int i; // [sp+1024h] [bp+100Ch]

  V_LOCK();
  logfmt_raw(
    &v4,
    0x1000u,
    0,
    "ae dump work poolid %lld jobid %s start_nonce %llx",
    *a1,
    a1[1],
    a1 + 2,
    v2,
    a1[31],
    a1[32]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
    81,
    "dump_work_ae",
    12,
    83,
    60,
    &v4);
  for ( i = 0; i <= 0x4F; ++i )
    printf("%02x ", *((unsigned __int8 *)a1 + i + 40));
  return putchar(10);
}
