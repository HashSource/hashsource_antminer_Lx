int __fastcall serdes_apb_read(int a1, int a2, char a3, unsigned __int16 a4)
{
  _BYTE v8[8]; // [sp+20h] [bp+8h] BYREF
  _BYTE v9[16]; // [sp+1020h] [bp+1008h] BYREF
  int v10; // [sp+1030h] [bp+1018h]
  unsigned __int8 *v11; // [sp+1034h] [bp+101Ch]
  int j; // [sp+1038h] [bp+1020h]
  int i; // [sp+103Ch] [bp+1024h]
  unsigned __int8 v14; // [sp+1043h] [bp+102Bh]
  int v15; // [sp+1044h] [bp+102Ch]

  sub_789C4(a1, a3, 145, a4);
  v11 = (unsigned __int8 *)malloc(0x600u);
  v15 = 1;
  if ( (unsigned __int8)a3 == 255 )
    v15 = sub_7936C(v9);
  v14 = 0;
  for ( i = 0; i < v15; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v14 = v9[i];
    else
      v14 = a3;
    v10 = sub_78A20(a1, v14, 145, v11);
    for ( j = 0; j < v10; ++j )
    {
      if ( v10 && (*(_DWORD *)&v11[12 * j] & 0x20) != 0 )
      {
        V_LOCK();
        logfmt_raw(
          v8,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          HIBYTE(a4) >> 4,
          v11[12 * j + 4],
          v11[12 * j + 8],
          a4,
          *(_DWORD *)&v11[12 * j]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "serdes_apb_read",
          15,
          847,
          100,
          v8);
      }
    }
    v10 = sub_78A20(a1, v14, 146, v11);
  }
  free(v11);
  return 0;
}
