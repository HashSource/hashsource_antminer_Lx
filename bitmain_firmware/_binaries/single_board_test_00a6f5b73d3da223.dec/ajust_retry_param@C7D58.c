int __fastcall ajust_retry_param(int a1, char a2, char a3)
{
  int v7; // [sp+1Ch] [bp+Ch] BYREF
  int v8; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int v9; // [sp+1020h] [bp+1010h]

  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s...", "ajust_retry_param");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "ajust_retry_param",
    17,
    8707,
    60,
    &v7);
  if ( serdes_apb_read_back_1_chip(a1, a2, a3, 0x8023u, (int)&v8) )
  {
    if ( v9 <= 0xFA )
    {
      if ( v9 <= 9 )
      {
        serdes_apb_write_1_chip(a1, a2, a3, 0x8001u, -4190209);
        serdes_apb_write_1_chip(a1, a2, a3, 0x8021u, (int)&unk_3FE000);
      }
    }
    else
    {
      serdes_apb_write_1_chip(a1, a2, a3, 0x8001u, -4190209);
      serdes_apb_write_1_chip(a1, a2, a3, 0x8021u, 0x2000);
    }
  }
  return 0;
}
