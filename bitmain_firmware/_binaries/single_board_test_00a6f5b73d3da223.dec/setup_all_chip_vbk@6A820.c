int __fastcall setup_all_chip_vbk(int a1)
{
  int v2; // [sp+14h] [bp+4h]
  _DWORD v3[1026]; // [sp+1Ch] [bp+Ch] BYREF

  v2 = a1;
  puts("setup_all_chip_vbk");
  v3[1024] = *(_DWORD *)(v2 + 624);
  *(_DWORD *)(v2 + 240) = makeup_chip_addr_vbk(*(_DWORD *)(v2 + 296), 4u);
  (*(void (__fastcall **)(int, _DWORD, int))(v2 + 148))(v2, *(_DWORD *)(v2 + 296), 4);
  sub_66AE0(v2, 4);
  sub_672CC(v2, 0x20u);
  sub_67C8C(v2, 0, 1);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_vbk/backend_vbk.c",
    83,
    "setup_all_chip_vbk",
    18,
    215,
    60,
    v3);
  sub_66AE0(v2, 4);
  if ( *(_BYTE *)(v2 + 268) != 1 )
    *(_DWORD *)(v2 + 272) = (int)*(float *)(v2 + 760);
  return 0;
}
