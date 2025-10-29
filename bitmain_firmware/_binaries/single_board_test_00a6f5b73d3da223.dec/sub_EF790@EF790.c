int __fastcall sub_EF790(int a1)
{
  char v3[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4088]; // [sp+818h] [bp+808h] BYREF
  int v5; // [sp+1818h] [bp+1808h] BYREF
  __int16 v6; // [sp+181Ch] [bp+180Ch]
  int v7; // [sp+1820h] [bp+1810h] BYREF
  int v8; // [sp+1824h] [bp+1814h]
  int v9; // [sp+1828h] [bp+1818h]
  __int16 v10; // [sp+182Eh] [bp+181Eh]
  char v11; // [sp+1831h] [bp+1821h]
  char v12; // [sp+1832h] [bp+1822h]
  char v13; // [sp+1833h] [bp+1823h]
  int v14; // [sp+1834h] [bp+1824h]

  v14 = -2147482880;
  v13 = 4;
  v12 = 2;
  v7 = 0;
  v8 = 0;
  v5 = 33860181;
  v9 = -1;
  v10 = 6;
  v6 = 6;
  v11 = 6;
  if ( sub_EF2B0(a1, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
  {
    strcpy(v3, "get power version failed\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "_bitmain_get_power_version",
      26,
      251,
      100,
      v4);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v8) << 8) | (unsigned __int8)v8;
  }
}
