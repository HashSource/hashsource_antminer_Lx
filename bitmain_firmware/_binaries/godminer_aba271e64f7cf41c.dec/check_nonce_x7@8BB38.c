int __fastcall check_nonce_x7(int a1, _DWORD *a2)
{
  double *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  double v8; // r2
  char v13[64]; // [sp+1Ch] [bp-1040h] BYREF
  int v14; // [sp+101Ch] [bp-40h]
  int v15; // [sp+1020h] [bp-3Ch]
  int v16; // [sp+1024h] [bp-38h]
  int v17; // [sp+1028h] [bp-34h]
  int v18; // [sp+102Ch] [bp-30h]
  int v19; // [sp+1030h] [bp-2Ch]
  double v20; // [sp+1034h] [bp-28h]
  int v21; // [sp+103Ch] [bp-20h]
  double v22; // [sp+1040h] [bp-1Ch]
  _DWORD *v23; // [sp+104Ch] [bp-10h]

  v23 = a2;
  v21 = a2[48];
  v2 = (double *)(a2 + 49);
  v3 = a2[49];
  v4 = a2[50];
  v5 = *((_DWORD *)v2 + 2);
  v6 = *((_DWORD *)v2 + 3);
  v14 = v3;
  v15 = v4;
  v16 = v5;
  v17 = v6;
  v7 = *((_DWORD *)v2 + 5);
  v8 = v2[3];
  v18 = *((_DWORD *)v2 + 4);
  v19 = v7;
  v20 = v8;
  v22 = v8;
  if ( *(_QWORD *)&v8 < *((_QWORD *)v23 + 15) )
    return 0;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "hw diff (%llu<%llu) not reach pool", v23[30], v23[31], v22, a2, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "check_nonce_x7",
    14,
    601,
    20,
    v13);
  return 1;
}
