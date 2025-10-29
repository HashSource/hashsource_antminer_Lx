int __fastcall sub_EFA14(int a1)
{
  char v3[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[24]; // [sp+818h] [bp+808h] BYREF
  int v5; // [sp+1818h] [bp+1808h] BYREF
  int v6; // [sp+181Ch] [bp+180Ch]
  int v7; // [sp+1820h] [bp+1810h] BYREF
  __int16 v8; // [sp+1824h] [bp+1814h]
  __int16 v9; // [sp+1826h] [bp+1816h]
  int v10; // [sp+1828h] [bp+1818h]
  char v11; // [sp+182Dh] [bp+181Dh]
  char v12; // [sp+182Eh] [bp+181Eh]
  char v13; // [sp+182Fh] [bp+181Fh]

  v13 = 4;
  v12 = 3;
  v7 = 50637397;
  v5 = 0;
  v6 = 0;
  v10 = -2147482880;
  v9 = 7;
  v8 = 7;
  v11 = 6;
  if ( sub_EF2B0(a1, (unsigned __int8 *)&v7, 6u, (unsigned __int8 *)&v5, 8u) )
  {
    strcpy(v3, "get AD conversion N failed\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "_bitmain_get_AD_conversion_N",
      28,
      311,
      100,
      v4);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v6) << 8) | (unsigned __int8)v6;
  }
}
