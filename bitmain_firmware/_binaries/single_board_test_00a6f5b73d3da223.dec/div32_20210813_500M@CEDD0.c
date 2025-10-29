int __fastcall div32_20210813_500M(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v10; // [sp+101Eh] [bp+100Eh]

  V_LOCK();
  logfmt_raw(&v9, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div32_20210813_500M", a2, (unsigned __int8)a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "div32_20210813_500M",
    19,
    9871,
    60,
    &v9);
  v10 = a4;
  if ( a4 == 8 )
    v10 = 15;
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0xFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8B, -65536);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -65536);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8C, 0xFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0xFFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8C, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -1048576);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8D, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0xFFFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8D, -16777216);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -16777216);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8E, 0xFFFFFF);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 4095);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8A, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, -4096);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 0x8B, 0);
  serdes_apb_write(a1, a2, a3, (v10 << 12) | 1, 0);
  return 0;
}
