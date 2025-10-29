int __fastcall SOC_16G_20210819_update(int a1, unsigned __int8 a2, char a3, char a4)
{
  int v8; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v9; // [sp+101Eh] [bp+100Eh]

  v9 = 0;
  if ( a4 == 8 )
    v9 = 15;
  V_LOCK();
  logfmt_raw(&v8, 0x1000u, 0, "%s ...", "SOC_16G_20210819_update");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "SOC_16G_20210819_update",
    23,
    3987,
    60,
    &v8);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -536870913);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1A, 0x20000000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1D, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x6F, 0x80000000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -262145);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x6E, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -5);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x6E, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, 0x7FFFFFFF);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x1A, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -1025);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x47, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -7340033);
  serdes_apb_write(a1, a2, a3, 0x8008u, 0x200000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -57345);
  serdes_apb_write(a1, a2, a3, 0x8009u, 40960);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -67108865);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x20, 0x4000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -131073);
  serdes_apb_write(a1, a2, a3, 0x803Eu, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -262145);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x12, 0x40000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -1025);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x4A, 1024);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -8388609);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x7E, 0x800000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, 0xFFFFFFF);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0xB6, 1610612736);
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x805Du, 576);
  serdes_apb_write(a1, a2, a3, 0x8001u, -258049);
  serdes_apb_write(a1, a2, a3, 0x805Du, 147456);
  serdes_apb_write(a1, a2, a3, 0x8001u, -66060289);
  serdes_apb_write(a1, a2, a3, 0x805Du, 37748736);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0xFFFFFFF);
  serdes_apb_write(a1, a2, a3, 0x805Du, 0x40000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -4);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 2);
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 64);
  serdes_apb_write(a1, a2, a3, 0x8001u, -258049);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 0x4000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -66060289);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 0x400000);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0xFFFFFFF);
  serdes_apb_write(a1, a2, a3, 0x805Eu, 0x40000000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -4);
  serdes_apb_write(a1, a2, a3, 0x805Fu, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, -1009);
  serdes_apb_write(a1, a2, a3, 0x8002u, 32);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 2, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -4);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 8, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 8, 0x10000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -196609);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 3, 0x10000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -786433);
  serdes_apb_write(a1, a2, a3, 0x803Eu, 786432);
  serdes_apb_write(a1, a2, a3, 0x8001u, -8388609);
  serdes_apb_write(a1, a2, a3, 0x8048u, 0x800000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -805306369);
  serdes_apb_write(a1, a2, a3, 0x804Cu, 805306368);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -12289);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x96, 4096);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -4194305);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x7C, 0x400000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -497);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0xBE, 384);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -225);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0xA6, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -61441);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0xBE, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -32769);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x8B, 0x8000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -65537);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x8C, 0x10000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -131073);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 0x8C, 0x20000);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -65521);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 2, 0x8000);
  serdes_apb_write(a1, a2, a3, 0x8001u, -2);
  serdes_apb_write(a1, a2, a3, 0x8002u, 0);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, -4);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 2, 2);
  serdes_apb_write(a1, a2, a3, (v9 << 12) | 1, 0);
  serdes_apb_write(a1, a2, a3, 0x8001u, 0);
  return 0;
}
