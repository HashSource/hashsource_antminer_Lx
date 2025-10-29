int __fastcall serdes_apb_read_back_1_chip(int a1, char a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r6
  int v7; // r10
  char *v8; // r7
  int v9; // r3
  int v10; // r0
  char *v11; // r4
  char *v12; // r5
  int v13; // r12
  int v14; // r2
  int v15; // r0
  int v16; // r2
  char *v17; // r3
  char v18; // lr
  char v19; // r12
  unsigned int v20; // t1
  unsigned int v24; // [sp+24h] [bp-1018h]
  unsigned int v26; // [sp+30h] [bp-100Ch]
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  LOWORD(v6) = 0;
  v24 = a4 >> 12;
  sub_5DE08(a1, a3, 145, a4);
  v7 = 0;
  v8 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v9 = 16;
  else
    v9 = 1;
  v26 = v9;
  do
  {
    if ( a3 != 255 )
      LOWORD(v6) = a3;
    v10 = sub_5E294(a1, a2, (unsigned __int16)v6, 145, v8);
    if ( v10 > 0 )
    {
      v11 = v8;
      v12 = &v8[12 * v10];
      do
      {
        while ( (*(_DWORD *)v11 & 0x20) == 0 )
        {
          v11 += 12;
          if ( v12 == v11 )
            goto LABEL_12;
        }
        V_LOCK();
        v13 = (unsigned __int8)v11[4];
        v14 = *(_DWORD *)v11;
        v11 += 12;
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v24,
          v13,
          (unsigned __int8)*(v11 - 4),
          a4,
          v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read_back_1_chip",
          27,
          895,
          20,
          var1004);
      }
      while ( v12 != v11 );
    }
LABEL_12:
    v15 = sub_5E294(a1, a2, (unsigned __int16)v6, 146, v8);
    if ( v15 > 0 )
    {
      v16 = a5 + 8 * v7;
      v17 = v8;
      do
      {
        v18 = v17[4];
        v16 += 8;
        v19 = v17[8];
        v20 = *(_DWORD *)v17;
        v17 += 12;
        *(_BYTE *)(v16 - 8) = v18;
        *(_BYTE *)(v16 - 7) = v19;
        *(_DWORD *)(v16 - 4) = bswap32(v20);
      }
      while ( v17 != &v8[12 * v15] );
      v7 += v15;
    }
    v6 = (unsigned __int8)(v6 + 1);
  }
  while ( v26 > v6 );
  free(v8);
  return v7;
}
