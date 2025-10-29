int __fastcall sub_74BF0(int a1, unsigned int a2, int a3, int a4, unsigned int a5)
{
  _BYTE v10[16]; // [sp+38h] [bp+10h] BYREF
  __int64 v11[4]; // [sp+1038h] [bp+1010h] BYREF
  _BYTE v12[168]; // [sp+105Ch] [bp+1034h] BYREF
  struct timeval v13; // [sp+1104h] [bp+10DCh] BYREF
  struct timeval v14; // [sp+110Ch] [bp+10E4h] BYREF
  unsigned __int8 sols_ae; // [sp+1117h] [bp+10EFh]
  unsigned int v16; // [sp+1118h] [bp+10F0h]
  unsigned int v17; // [sp+111Ch] [bp+10F4h]
  int j; // [sp+1120h] [bp+10F8h]
  int i; // [sp+1124h] [bp+10FCh]
  _DWORD vars0[4]; // [sp+1128h] [bp+1100h] BYREF

  memset(v12, 0, sizeof(v12));
  gettimeofday(&v14, 0);
  memset(v11, 0, sizeof(v11));
  generate_sipkeys_ae(a1, a2, v11);
  graph_init_ae(a5);
  for ( i = 0; a4 / 4 > i; ++i )
  {
    v17 = sip_node_ae(a5, v11[0], v11[1], v11[2], v11[3], *(_DWORD *)(a3 + 4 * i), 0);
    v16 = sip_node_ae(a5, v11[0], v11[1], v11[2], v11[3], *(_DWORD *)(a3 + 4 * i), 1u);
    graph_add_edge_ae(a5, v17 >> 1, v16 >> 1);
  }
  sols_ae = get_sols_ae(a5, v11[0], v11[1], v11[2], v11[3], (int)v12, a3, a4 / 4);
  if ( sols_ae )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "[FindCycle] get golden nonce!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
      81,
      "findcycle_ae",
      12,
      311,
      20,
      v10);
    qsort(v12, 0x2Au, 4u, (__compar_fn_t)sub_74BD0);
    for ( j = 0; j <= 41; ++j )
      *(_DWORD *)(4 * j + a3) = vars0[j - 51];
  }
  graph_exit_ae(a5);
  gettimeofday(&v13, 0);
  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    a5,
    1000000 * v13.tv_sec + v13.tv_usec - 1000000 * v14.tv_sec - v14.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ae/backend_ae.c",
    81,
    "findcycle_ae",
    12,
    320,
    20,
    v10);
  return sols_ae;
}
