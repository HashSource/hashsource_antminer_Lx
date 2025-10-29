int __fastcall sub_EFC70(int a1, unsigned __int8 a2)
{
  char v4[28]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v5[28]; // [sp+81Ch] [bp+80Ch] BYREF
  int v6; // [sp+181Ch] [bp+180Ch] BYREF
  int v7; // [sp+1820h] [bp+1810h]
  int v8; // [sp+1824h] [bp+1814h] BYREF
  unsigned __int8 v9; // [sp+1828h] [bp+1818h]
  char v10; // [sp+1829h] [bp+1819h]
  __int16 v11; // [sp+182Ah] [bp+181Ah]
  __int16 v12; // [sp+182Eh] [bp+181Eh]
  int v13; // [sp+1830h] [bp+1820h]
  char v14; // [sp+1835h] [bp+1825h]
  char v15; // [sp+1836h] [bp+1826h]
  char v16; // [sp+1837h] [bp+1827h]

  v16 = 6;
  v15 = -125;
  v8 = -2096715179;
  v6 = 0;
  v7 = 0;
  v13 = -2147482880;
  v12 = a2 + 137;
  v9 = a2;
  v10 = 0;
  v11 = v12;
  v14 = 8;
  if ( sub_EF2B0(a1, (unsigned __int8 *)&v8, 8u, (unsigned __int8 *)&v6, 8u) )
  {
    strcpy(v4, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "_bitmain_set_DA_conversion_N",
      28,
      357,
      100,
      v5);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v7) << 8) | (unsigned __int8)v7;
  }
}
