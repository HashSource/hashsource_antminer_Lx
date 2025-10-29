unsigned int __fastcall diff_to_be256_target_base(unsigned int *a1)
{
  double v1; // d0
  unsigned __int64 v3; // r0
  unsigned int v4; // r9
  unsigned int v5; // r11
  double v6; // r0
  double v7; // d8
  unsigned __int64 v8; // r0
  unsigned int v9; // r10
  unsigned int v10; // r8
  double v11; // r0
  double v12; // d8
  unsigned __int64 v13; // r0
  unsigned int v14; // r7
  unsigned int v15; // r6
  double v16; // r0
  unsigned __int64 v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int result; // r0
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r3
  _DWORD v24[4]; // [sp+10h] [bp-1004h] BYREF
  unsigned int v25; // [sp+20h] [bp-FF4h]
  unsigned int v26; // [sp+24h] [bp-FF0h]
  unsigned int v27; // [sp+28h] [bp-FECh]
  unsigned int v28; // [sp+2Ch] [bp-FE8h]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v24, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    v4 = 0xFFFF;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/base_common.c",
      148,
      "diff_to_be256_target_base",
      25,
      170,
      20,
      v24);
    v18 = 0;
    v19 = 0;
    v14 = 0;
    v15 = 0;
    v9 = 0;
    v10 = 0;
    v5 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(1.15790322e77 / v1 * 1.59309191e-58);
    v4 = bswap32(HIDWORD(v3));
    v5 = bswap32(v3);
    LODWORD(v6) = sub_12F4FC(v3);
    v7 = 1.15790322e77 / v1 - v6 * 6.27710174e57;
    v8 = (unsigned __int64)(v7 * 2.93873588e-39);
    v9 = bswap32(HIDWORD(v8));
    v10 = bswap32(v8);
    LODWORD(v11) = sub_12F4FC(v8);
    v12 = v7 - v11 * 3.40282367e38;
    v13 = (unsigned __int64)(v12 * 5.42101086e-20);
    v14 = bswap32(HIDWORD(v13));
    v15 = bswap32(v13);
    LODWORD(v16) = sub_12F4FC(v13);
    v17 = (unsigned __int64)(v12 - v16 * 1.84467441e19);
    v18 = bswap32(HIDWORD(v17));
    v19 = bswap32(v17);
  }
  v24[0] = v4;
  v24[1] = v5;
  v24[2] = v9;
  v24[3] = v10;
  v25 = v14;
  v26 = v15;
  v27 = v18;
  v28 = v19;
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v9;
  a1[3] = v10;
  result = v25;
  v21 = v26;
  v22 = v27;
  v23 = v28;
  a1[4] = v25;
  a1[5] = v21;
  a1[6] = v22;
  a1[7] = v23;
  return result;
}
