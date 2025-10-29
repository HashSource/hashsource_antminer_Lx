int __fastcall setup_serdes_phy(int a1)
{
  int v1; // r3
  _BYTE v4[4084]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 v6; // [sp+1023h] [bp+1013h]
  int v7; // [sp+1024h] [bp+1014h]
  int v8; // [sp+1028h] [bp+1018h]
  int i; // [sp+102Ch] [bp+101Ch]

  v8 = 3;
  v7 = 3;
  for ( i = 0; ; ++i )
  {
    v1 = v7;
    if ( i >= v7 )
      break;
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s try cmn lock times %d", "setup_serdes_phy", i + 1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "setup_serdes_phy",
      16,
      12448,
      60,
      v4);
    v6 = -1;
    serdes_initial_seq_1_by_vendor(a1, 0, 255, 8u);
    SOC_24G_seq1_20210922_update(a1, 0, v6, 8);
    memset(v4, 0, 0x80u);
    v5 = serdes_phy_bist(a1, v6, 8u, (int)v4);
    v1 = v5;
    if ( !v5 )
      break;
    sub_7B47C(a1, (int)v4);
  }
  return v1;
}
