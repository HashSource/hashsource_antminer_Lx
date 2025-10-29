void *__fastcall diff_to_be256_target_base(void *a1)
{
  double v1; // d0
  unsigned int v2; // r0
  _BYTE *v3; // r2
  int v4; // r1
  double v5; // r0
  unsigned int v6; // r0
  _BYTE *v7; // r2
  int v8; // r1
  double v9; // r0
  unsigned int v10; // r0
  _BYTE *v11; // r2
  int v12; // r1
  double v13; // r0
  unsigned int v14; // r0
  _BYTE *v15; // r2
  int v16; // r1
  double v18; // [sp+10h] [bp+0h]
  _BYTE v20[28]; // [sp+24h] [bp+14h] BYREF
  _BYTE v21[32]; // [sp+1024h] [bp+1014h] BYREF
  _BYTE *v22; // [sp+1044h] [bp+1034h]
  unsigned __int64 v23; // [sp+1048h] [bp+1038h]
  double v24; // [sp+1050h] [bp+1040h]
  double v25; // [sp+1058h] [bp+1048h]

  v18 = v1;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/common/mining/base_common.c",
      77,
      "diff_to_be256_target_base",
      25,
      170,
      20,
      v20);
    v18 = 1.0;
  }
  v25 = 1.15790322e77 / v18;
  v24 = 1.15790322e77 / v18 / 6.27710174e57;
  v23 = (unsigned __int64)v24;
  v22 = v21;
  v2 = sub_19AD10(v23, HIDWORD(v23));
  v3 = v22;
  *(_DWORD *)v22 = v2;
  *((_DWORD *)v3 + 1) = v4;
  LODWORD(v5) = sub_1A3C0C(v23);
  v25 = v25 - v5 * 6.27710174e57;
  v24 = v25 / 3.40282367e38;
  v23 = (unsigned __int64)(v25 / 3.40282367e38);
  v22 = &v21[8];
  v6 = sub_19AD10(v23, HIDWORD(v23));
  v7 = v22;
  *(_DWORD *)v22 = v6;
  *((_DWORD *)v7 + 1) = v8;
  LODWORD(v9) = sub_1A3C0C(v23);
  v25 = v25 - v9 * 3.40282367e38;
  v24 = v25 / 1.84467441e19;
  v23 = (unsigned __int64)(v25 / 1.84467441e19);
  v22 = &v21[16];
  v10 = sub_19AD10(v23, HIDWORD(v23));
  v11 = v22;
  *(_DWORD *)v22 = v10;
  *((_DWORD *)v11 + 1) = v12;
  LODWORD(v13) = sub_1A3C0C(v23);
  v24 = v13 * 1.84467441e19;
  v25 = v25 - v13 * 1.84467441e19;
  v23 = (unsigned __int64)v25;
  v22 = &v21[24];
  v14 = sub_19AD10(v23, HIDWORD(v23));
  v15 = v22;
  *(_DWORD *)v22 = v14;
  *((_DWORD *)v15 + 1) = v16;
  return memcpy(a1, v21, 0x20u);
}
