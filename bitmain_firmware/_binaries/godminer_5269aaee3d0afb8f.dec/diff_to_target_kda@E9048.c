int __fastcall diff_to_target_kda(int a1)
{
  double v1; // d0
  double v3; // r0
  double v4; // d8
  double v5; // r0
  double v6; // d8
  double v7; // r0
  unsigned __int64 *v8; // r2
  unsigned __int64 *v9; // r3
  char v10; // r1
  int v11; // r1
  __int64 v12; // r2
  __int64 v13; // r0
  __int64 v14; // r2
  int v15; // r3
  int *v16; // r3
  int v17; // r0
  __int64 v18; // r8
  unsigned __int64 v19; // r0
  __int64 v20; // kr00_8
  __int64 v21; // kr08_8
  unsigned __int64 v23; // [sp+10h] [bp-1004h] BYREF
  __int64 v24; // [sp+18h] [bp-FFCh]
  __int64 v25; // [sp+20h] [bp-FF4h]
  __int64 v26; // [sp+28h] [bp-FECh] BYREF

  if ( v1 > 0.0 )
  {
    v18 = (unsigned __int64)(2.69595353e67 / v1 * 1.59309191e-58);
    LODWORD(v3) = sub_12D7CC(v18);
    v4 = 2.69595353e67 / v1 - v3 * 6.27710174e57;
    v20 = (unsigned __int64)(v4 * 2.93873588e-39);
    LODWORD(v5) = sub_12D7CC(v20);
    v6 = v4 - v5 * 3.40282367e38;
    v21 = (unsigned __int64)(v6 * 5.42101086e-20);
    LODWORD(v7) = sub_12D7CC(v21);
    v19 = (unsigned __int64)(v6 - v7 * 1.84467441e19);
  }
  else
  {
    V_LOCK();
    LOWORD(v15) = 10564;
    HIWORD(v15) = (unsigned int)&unk_141344 >> 16;
    logfmt_raw((char *)&v23, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v16) = -14756;
    HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
    v17 = *v16;
    LOWORD(v16) = -21680;
    HIWORD(v16) = (unsigned int)&unk_149550 >> 16;
    zlog(
      v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/kda/kda_common.c",
      151,
      v16,
      18,
      83,
      20,
      &v23);
    v18 = 4294901760LL;
    v19 = 0;
    v20 = 0;
    v21 = 0;
  }
  v8 = (unsigned __int64 *)((char *)&v26 + 7);
  v9 = &v23;
  v26 = v18;
  v25 = v20;
  v24 = v21;
  v23 = v19;
  do
  {
    v10 = *(_BYTE *)v9;
    *(_BYTE *)v9 = *(_BYTE *)v8;
    v9 = (unsigned __int64 *)((char *)v9 + 1);
    *(_BYTE *)v8 = v10;
    v8 = (unsigned __int64 *)((char *)v8 - 1);
  }
  while ( v9 < v8 );
  v11 = HIDWORD(v23);
  v12 = v24;
  *(_DWORD *)a1 = v23;
  *(_DWORD *)(a1 + 4) = v11;
  *(_QWORD *)(a1 + 8) = v12;
  v13 = v25;
  v14 = v26;
  *(_QWORD *)(a1 + 16) = v25;
  *(_QWORD *)(a1 + 24) = v14;
  return v13;
}
