int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  int v5; // r7
  _WORD *v6; // r4
  int v7; // r2
  int v8; // t1
  int v9; // r3
  _DWORD v11[7]; // [sp+28h] [bp-1024h] BYREF
  int v12; // [sp+44h] [bp-1008h] BYREF
  _DWORD v13[3]; // [sp+48h] [bp-1004h] BYREF
  _WORD v14[2044]; // [sp+54h] [bp-FF8h] BYREF

  V_LOCK();
  v5 = 0;
  V_INT((int)v11, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    (char *)v13,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s...",
    "check_cmn_calibration_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status",
    28,
    8494,
    60,
    v13);
  v13[0] = 100991489;
  v13[1] = 235735561;
  v13[2] = 134677248;
  v14[0] = 3851;
  do
  {
    v6 = (_WORD *)((char *)&v12 + 3);
    do
    {
      while ( 1 )
      {
        v8 = *((unsigned __int8 *)v6 + 1);
        v6 = (_WORD *)((char *)v6 + 1);
        v7 = v8;
        v9 = a3 + v8;
        if ( v8 != 3 )
        {
          if ( *(_BYTE *)(v9 + 16 * v5) )
            break;
        }
        if ( v6 == (_WORD *)((char *)v14 + 1) )
          goto LABEL_7;
      }
      check_cmn_calibration_status_1_phy(a1, v5, v7);
    }
    while ( v6 != (_WORD *)((char *)v14 + 1) );
LABEL_7:
    ++v5;
  }
  while ( v5 != 8 );
  return 0;
}
