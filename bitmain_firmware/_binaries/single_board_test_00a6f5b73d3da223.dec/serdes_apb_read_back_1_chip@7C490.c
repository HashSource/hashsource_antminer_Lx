int __fastcall serdes_apb_read_back_1_chip(int a1, char a2, char a3, unsigned __int16 a4, int a5)
{
  _BYTE v10[24]; // [sp+20h] [bp+8h] BYREF
  int v11; // [sp+1020h] [bp+1008h]
  unsigned __int8 *v12; // [sp+1024h] [bp+100Ch]
  int k; // [sp+1028h] [bp+1010h]
  int j; // [sp+102Ch] [bp+1014h]
  unsigned __int8 i; // [sp+1032h] [bp+101Ah]
  unsigned __int8 v16; // [sp+1033h] [bp+101Bh]
  int v17; // [sp+1034h] [bp+101Ch]

  sub_789C4(a1, a3, 145, a4);
  v12 = (unsigned __int8 *)malloc(0x600u);
  v17 = 0;
  v16 = 16;
  if ( (unsigned __int8)a3 != 255 )
    v16 = 1;
  for ( i = 0; i < (unsigned int)v16; ++i )
  {
    if ( (unsigned __int8)a3 != 255 )
      i = a3;
    v11 = sub_78DA0(a1, a2, i, 145, v12);
    for ( j = 0; j < v11; ++j )
    {
      if ( (*(_DWORD *)&v12[12 * j] & 0x20) != 0 )
      {
        V_LOCK();
        logfmt_raw(
          v10,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          HIBYTE(a4) >> 4,
          v12[12 * j + 4],
          v12[12 * j + 8],
          a4,
          *(_DWORD *)&v12[12 * j]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "serdes_apb_read_back_1_chip",
          27,
          924,
          20,
          v10);
      }
    }
    v11 = sub_78DA0(a1, a2, i, 146, v12);
    for ( k = 0; k < v11; ++k )
    {
      *(_BYTE *)(a5 + 8 * v17) = v12[12 * k + 4];
      *(_BYTE *)(a5 + 8 * v17 + 1) = v12[12 * k + 8];
      *(_DWORD *)(a5 + 8 * v17++ + 4) = HIBYTE(*(_DWORD *)&v12[12 * k])
                                      | (*(_DWORD *)&v12[12 * k] << 24)
                                      | ((unsigned __int8)BYTE1(*(_DWORD *)&v12[12 * k]) << 16)
                                      | (unsigned __int16)(HIWORD(*(_DWORD *)&v12[12 * k]) << 8);
    }
  }
  free(v12);
  return v17;
}
