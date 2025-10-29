int __fastcall sub_DB908(int a1, char *a2)
{
  _BYTE v5[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+102Ch] [bp+101Ch]
  unsigned __int8 v8; // [sp+1037h] [bp+1027h]

  v7 = -65536;
  v8 = 26;
  memset(v6, 0, sizeof(v6));
  v6[2] = 1572865;
  if ( a2 == (char *)&loc_FE502 )
  {
LABEL_18:
    v8 = 2;
    goto LABEL_23;
  }
  if ( (int)a2 > 1041666 )
  {
    if ( a2 != (_BYTE *)&loc_17D780 + 4 )
    {
      if ( (int)a2 > 1562500 )
      {
        if ( a2 != (char *)&unk_2DC6C0 && a2 != byte_2FAF08 )
          goto LABEL_22;
        v8 = 0;
        goto LABEL_23;
      }
      if ( a2 != (char *)&loc_16E360 )
        goto LABEL_22;
    }
    v8 = 1;
    goto LABEL_23;
  }
  if ( a2 == "stem_Config_File_Information" )
  {
    v8 = 26;
    goto LABEL_23;
  }
  if ( (int)a2 > 115200 )
  {
    if ( a2 == (char *)&loc_70800 )
    {
      v8 = 6;
      goto LABEL_23;
    }
    if ( a2 != (char *)&loc_E1000 )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( a2 != (char *)38400 )
  {
LABEL_22:
    v8 = 26;
    goto LABEL_23;
  }
  v8 = 80;
LABEL_23:
  v7 |= v8;
  v6[0] = v7;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set_misc_eth value %08x/%d", v6[0], a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_misc_eth_LTC",
    24,
    252,
    60,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
