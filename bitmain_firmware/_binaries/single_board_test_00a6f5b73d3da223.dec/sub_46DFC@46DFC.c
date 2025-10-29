int __fastcall sub_46DFC(_BYTE *a1, char a2)
{
  char v3[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned __int8 v5; // [sp+181Fh] [bp+180Fh]

  v5 = 1;
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  a1[3] = 3;
  a1[4] = 20;
  a1[5] = 22;
  a1[6] = 35;
  a1[7] = 36;
  if ( a2 == 3 )
    qmemcpy(a1 + 8, "-.2345678:<>@ABCDQ", 18);
  else
    v5 = 0;
  a1[26] = 1;
  a1[27] = 1;
  a1[28] = 1;
  a1[29] = 17;
  a1[30] = 2;
  a1[31] = 13;
  a1[32] = 1;
  if ( a2 == 3 )
    a1[33] = 9;
  else
    v5 = 0;
  a1[34] = 1;
  a1[35] = 4;
  a1[36] = 1;
  a1[37] = 1;
  a1[38] = 1;
  a1[39] = 1;
  a1[40] = 1;
  a1[41] = 1;
  a1[42] = 2;
  a1[43] = 2;
  a1[44] = 2;
  a1[45] = 2;
  a1[46] = 1;
  a1[47] = 1;
  a1[48] = 1;
  a1[49] = 1;
  a1[50] = 8;
  a1[51] = 1;
  if ( v5 != 1 )
  {
    strcpy(v3, "This FMT is not supported\n");
    V_LOCK();
    logfmt_raw(&v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "init_eeprom_fmt_info",
      20,
      357,
      100,
      &v4);
  }
  return v5;
}
