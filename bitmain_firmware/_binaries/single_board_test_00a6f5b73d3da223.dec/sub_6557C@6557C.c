__int64 __fastcall sub_6557C(int a1, unsigned __int8 a2)
{
  int v2; // r0
  _BYTE v6[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[4088]; // [sp+1018h] [bp+1008h] BYREF
  int v8; // [sp+2018h] [bp+2008h]
  unsigned int i; // [sp+201Ch] [bp+200Ch]

  v8 = 0;
  for ( i = 0; i <= 0x2F; ++i )
  {
    v2 = snprintf(&v7[v8], 4096 - v8, "%02x ", *(unsigned __int8 *)(i + a1 + 40));
    v8 += v2;
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "ckb dump work jobid %s, work count %d", a1 + 8, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
    85,
    "dump_work_ckb2",
    14,
    84,
    20,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "dump work: %s", v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
           85,
           "dump_work_ckb2",
           14,
           85,
           20,
           v6);
}
