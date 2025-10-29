int __fastcall serdes_initial_seq_2_by_vendor(int a1, unsigned __int8 a2, char a3, char a4)
{
  int v8; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v9; // [sp+101Eh] [bp+100Eh]

  v9 = 0;
  if ( a4 == 8 )
    v9 = 15;
  V_LOCK();
  logfmt_raw(&v8, 0x1000u, 0, "%s ...", "serdes_initial_seq_2_by_vendor");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "serdes_initial_seq_2_by_vendor",
    30,
    3354,
    60,
    &v8);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -536870913);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1A, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1D, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1E, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -262145);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x45, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -262145);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x46, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -524289);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x47, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -33);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x71, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -67108865);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x20, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -786433);
  serdes_apb_write(a1, a2, a3, 0x803Eu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -131073);
  serdes_apb_write(a1, a2, a3, 0x803Eu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x805Du, 624);
  serdes_apb_write(a1, a2, a3, 0x8001u, -258049);
  serdes_apb_write(a1, a2, a3, 0x805Du, 40894464);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0xFFFFFFF);
  serdes_apb_write(a1, a2, a3, 0x805Du, 1879048192);
  serdes_apb_write(a1, a2, a3, 0x8001u, -4);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 2);
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 112);
  serdes_apb_write(a1, a2, a3, 0x8001u, -258049);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 28672);
  serdes_apb_write(a1, a2, a3, 0x8001u, -66060289);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 7340032);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0xFFFFFFF);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 1879048192);
  serdes_apb_write(a1, a2, a3, 0x8001u, -4);
  serdes_apb_write(a1, a2, a3, 0x805Fu, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  return 0;
}
