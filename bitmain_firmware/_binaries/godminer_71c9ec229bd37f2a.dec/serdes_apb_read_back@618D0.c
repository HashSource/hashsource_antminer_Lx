int __fastcall serdes_apb_read_back(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned __int16 v7; // r6
  int v8; // r10
  char *v9; // r7
  int v10; // r2
  int v11; // r0
  char *v12; // r4
  char *v13; // r5
  int v14; // r12
  int v15; // r2
  int v16; // r0
  int v17; // r2
  char *v18; // r3
  char v19; // lr
  char v20; // r12
  unsigned int v21; // t1
  unsigned int v24; // [sp+1Ch] [bp-1018h]
  unsigned int v26; // [sp+28h] [bp-100Ch]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = 0;
  sub_5DE08(a1, a3, 145, a4);
  v8 = 0;
  v24 = a4 >> 12;
  v9 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v10 = 16;
  else
    v10 = 1;
  v26 = v10;
  do
  {
    if ( a3 != 255 )
      v7 = a3;
    v11 = sub_5E074(a1, v7, 145, v9);
    if ( v11 > 0 )
    {
      v12 = v9;
      v13 = &v9[12 * v11];
      do
      {
        while ( (*(_DWORD *)v12 & 0x20) == 0 )
        {
          v12 += 12;
          if ( v13 == v12 )
            goto LABEL_12;
        }
        V_LOCK();
        v14 = (unsigned __int8)v12[4];
        v15 = *(_DWORD *)v12;
        v12 += 12;
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          v24,
          v14,
          (unsigned __int8)*(v12 - 4),
          a4,
          v15);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read_back",
          20,
          852,
          20,
          var1004);
      }
      while ( v13 != v12 );
    }
LABEL_12:
    v16 = sub_5E074(a1, v7, 146, v9);
    if ( v16 > 0 )
    {
      v17 = a5 + 8 * v8;
      v18 = v9;
      do
      {
        v19 = v18[4];
        v17 += 8;
        v20 = v18[8];
        v21 = *(_DWORD *)v18;
        v18 += 12;
        *(_BYTE *)(v17 - 8) = v19;
        *(_BYTE *)(v17 - 7) = v20;
        *(_DWORD *)(v17 - 4) = bswap32(v21);
      }
      while ( v18 != &v9[12 * v16] );
      v8 += v16;
    }
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v26 > (unsigned __int8)v7 );
  free(v9);
  return v8;
}
