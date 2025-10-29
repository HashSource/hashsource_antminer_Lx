void *__fastcall diff_to_target_dash(void *a1)
{
  double v1; // d0
  double v2; // r0
  double v3; // r0
  double v4; // r0
  double v6; // [sp+10h] [bp+0h]
  _BYTE v8[28]; // [sp+24h] [bp+14h] BYREF
  _QWORD v9[4]; // [sp+1024h] [bp+1014h] BYREF
  _QWORD *v10; // [sp+1044h] [bp+1034h]
  __int64 v11; // [sp+1048h] [bp+1038h]
  double v12; // [sp+1050h] [bp+1040h]
  double v13; // [sp+1058h] [bp+1048h]

  v6 = v1;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/common/mining/dash/dash_common.c",
      82,
      "diff_to_target_dash",
      19,
      59,
      20,
      v8);
    v6 = 1.0;
  }
  v13 = 2.69595353e67 / v6;
  v12 = 2.69595353e67 / v6 / 6.27710174e57;
  v11 = (unsigned __int64)v12;
  v10 = &v9[3];
  v9[3] = (unsigned __int64)v12;
  LODWORD(v2) = sub_1A3C0C((unsigned __int64)v12);
  v13 = v13 - v2 * 6.27710174e57;
  v12 = v13 / 3.40282367e38;
  v11 = (unsigned __int64)(v13 / 3.40282367e38);
  v10 = &v9[2];
  v9[2] = v11;
  LODWORD(v3) = sub_1A3C0C(v11);
  v13 = v13 - v3 * 3.40282367e38;
  v12 = v13 / 1.84467441e19;
  v11 = (unsigned __int64)(v13 / 1.84467441e19);
  v10 = &v9[1];
  v9[1] = v11;
  LODWORD(v4) = sub_1A3C0C(v11);
  v9[0] = (unsigned __int64)(v13 - v4 * 1.84467441e19);
  return memcpy(a1, v9, 0x20u);
}
