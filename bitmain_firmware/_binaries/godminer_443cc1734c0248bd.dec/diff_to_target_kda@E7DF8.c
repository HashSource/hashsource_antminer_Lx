int __fastcall diff_to_target_kda(int a1)
{
  double v1; // d0
  __int64 v3; // r8
  double v4; // r0
  double v5; // d8
  __int64 v6; // kr00_8
  double v7; // r0
  double v8; // d8
  __int64 v9; // kr08_8
  double v10; // r0
  unsigned __int64 v11; // r0
  unsigned __int64 *v12; // r2
  unsigned __int64 *v13; // r3
  char v14; // r1
  int v15; // r1
  __int64 v16; // r2
  __int64 v17; // r0
  __int64 v18; // r2
  unsigned __int64 v20; // [sp+10h] [bp-1004h] BYREF
  __int64 v21; // [sp+18h] [bp-FFCh]
  __int64 v22; // [sp+20h] [bp-FF4h]
  __int64 v23; // [sp+28h] [bp-FECh] BYREF

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v20, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/kda/kda_common.c",
      151,
      "diff_to_target_kda",
      18,
      83,
      20,
      &v20);
    v3 = 4294901760LL;
    v11 = 0;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(2.69595353e67 / v1 * 1.59309191e-58);
    LODWORD(v4) = sub_12C57C(v3);
    v5 = 2.69595353e67 / v1 - v4 * 6.27710174e57;
    v6 = (unsigned __int64)(v5 * 2.93873588e-39);
    LODWORD(v7) = sub_12C57C(v6);
    v8 = v5 - v7 * 3.40282367e38;
    v9 = (unsigned __int64)(v8 * 5.42101086e-20);
    LODWORD(v10) = sub_12C57C(v9);
    v11 = (unsigned __int64)(v8 - v10 * 1.84467441e19);
  }
  v12 = (unsigned __int64 *)((char *)&v23 + 7);
  v13 = &v20;
  v23 = v3;
  v22 = v6;
  v21 = v9;
  v20 = v11;
  do
  {
    v14 = *(_BYTE *)v13;
    *(_BYTE *)v13 = *(_BYTE *)v12;
    v13 = (unsigned __int64 *)((char *)v13 + 1);
    *(_BYTE *)v12 = v14;
    v12 = (unsigned __int64 *)((char *)v12 - 1);
  }
  while ( v13 < v12 );
  v15 = HIDWORD(v20);
  v16 = v21;
  *(_DWORD *)a1 = v20;
  *(_DWORD *)(a1 + 4) = v15;
  *(_QWORD *)(a1 + 8) = v16;
  v17 = v22;
  v18 = v23;
  *(_QWORD *)(a1 + 16) = v22;
  *(_QWORD *)(a1 + 24) = v18;
  return v17;
}
