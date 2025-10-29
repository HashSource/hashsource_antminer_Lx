int __fastcall serdes_apb_read(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int16 v4; // r7
  int v6; // r9
  char *v7; // r8
  _BYTE *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _BYTE *v14; // r3
  int v15; // r0
  char *v16; // r4
  char *v17; // r5
  int v18; // r12
  int v19; // r2
  int v24; // [sp+2Ch] [bp-1018h]
  _BYTE v25[16]; // [sp+30h] [bp-1014h] BYREF
  char v26[4100]; // [sp+40h] [bp-1004h] BYREF

  v6 = 0;
  sub_5C8F0(a1, (unsigned __int8)a3, 145, a4);
  v7 = (char *)malloc(0x600u);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_1387B8;
    v24 = 14;
    v8 = v25;
  }
  else
  {
    v9 = 1;
    v24 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)v8 = v10;
    *((_DWORD *)v8 + 1) = v11;
    *((_DWORD *)v8 + 2) = v12;
    *((_WORD *)v8 + 6) = v13;
  }
  do
  {
    v14 = a3;
    if ( a3 == (_BYTE *)255 )
      v14 = v25;
    else
      v4 = (unsigned __int16)a3;
    if ( a3 == (_BYTE *)255 )
      v4 = (unsigned __int8)v14[v6];
    v15 = sub_5CB5C(a1, v4, 145, v7);
    if ( v15 > 0 )
    {
      v16 = v7;
      v17 = &v7[12 * v15];
      do
      {
        while ( (*(_DWORD *)v16 & 0x20) == 0 )
        {
          v16 += 12;
          if ( v17 == v16 )
            goto LABEL_16;
        }
        V_LOCK();
        v18 = (unsigned __int8)v16[4];
        v19 = *(_DWORD *)v16;
        v16 += 12;
        logfmt_raw(
          v26,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          a4 >> 12,
          v18,
          (unsigned __int8)*(v16 - 4),
          a4,
          v19);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/backend_eth/backend_eth.c",
          169,
          "serdes_apb_read",
          15,
          818,
          100,
          v26);
      }
      while ( v17 != v16 );
    }
LABEL_16:
    sub_5CB5C(a1, v4, 146, v7);
    ++v6;
  }
  while ( v24 != v6 );
  free(v7);
  return 0;
}
