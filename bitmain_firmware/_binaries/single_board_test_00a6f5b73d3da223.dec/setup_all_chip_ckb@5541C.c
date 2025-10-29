int __fastcall setup_all_chip_ckb(int a1)
{
  char *v1; // r5
  char v2; // r4
  char v3; // r0
  int v5; // [sp+14h] [bp+4h]
  _BYTE v6[16]; // [sp+18h] [bp+8h] BYREF
  char *v7; // [sp+1018h] [bp+1008h]
  int v8; // [sp+101Ch] [bp+100Ch]
  int v9; // [sp+1020h] [bp+1010h]
  int i; // [sp+1024h] [bp+1014h]

  v5 = a1;
  puts("setup_all_chip_ckb");
  v9 = *(_DWORD *)(v5 + 624);
  *(_DWORD *)(v5 + 240) = makeup_chip_addr_ckb(*(_DWORD *)(v5 + 296), 0x1Bu);
  (*(void (__fastcall **)(int, _DWORD, int))(v5 + 148))(v5, *(_DWORD *)(v5 + 296), 27);
  sub_51278(v5, 27);
  sub_52550(v5, 0);
  v8 = (int)(float)(*(float *)(v5 + 760) - 100.0) / 25;
  for ( i = 1; i <= v8; ++i )
  {
    sub_52150(v5);
    usleep(0x61A8u);
  }
  sub_51A64(v5, 0x30u);
  v7 = (char *)calloc(1u, 0x80u);
  v1 = v7 + 40;
  v2 = *(_DWORD *)(v5 + 136);
  v3 = rand();
  memset(v1, (unsigned __int8)(v3 + v2), 0x30u);
  push_work_base(v5, (int)v7);
  free(v7);
  sub_52424(v5, 0, 1);
  sub_51A64(v5, 0x20u);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
    83,
    "setup_all_chip_ckb",
    18,
    286,
    60,
    v6);
  sub_51278(v5, 27);
  if ( *(_BYTE *)(v5 + 268) != 1 )
    *(_DWORD *)(v5 + 272) = (int)*(float *)(v5 + 760);
  return 0;
}
