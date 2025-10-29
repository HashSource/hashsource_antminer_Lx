int __fastcall chip_setting_fuart_cfg_ckb2(int a1, char *a2)
{
  _BYTE v5[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+102Ch] [bp+101Ch]
  unsigned __int8 v8; // [sp+1037h] [bp+1027h]

  v7 = 0;
  v8 = 26;
  memset(v6, 0, sizeof(v6));
  v6[2] = 6291457;
  if ( a2 == (char *)&loc_16E360 )
    goto LABEL_21;
  if ( (int)a2 <= 1500000 )
  {
    if ( a2 == (char *)&loc_70800 )
    {
      v8 = 6;
    }
    else if ( (int)a2 > 460800 )
    {
      if ( a2 != (char *)&loc_E1000 && a2 != (char *)&loc_FE502 )
        goto LABEL_26;
      v8 = 2;
    }
    else if ( a2 == (char *)38400 )
    {
      v8 = 80;
    }
    else
    {
      if ( a2 != "stem_Config_File_Information" )
        goto LABEL_26;
      v8 = 26;
    }
    goto LABEL_27;
  }
  if ( a2 == byte_2FAF08 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_27;
  }
  if ( (int)a2 <= (int)byte_2FAF08 )
  {
    if ( a2 != (_BYTE *)&loc_17D780 + 4 )
    {
      if ( a2 != (char *)&unk_2DC6C0 )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_21:
    v8 = 1;
    goto LABEL_27;
  }
  if ( a2 == (char *)6250000 )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 != (char *)12500000 )
    {
LABEL_26:
      v8 = 26;
      goto LABEL_27;
    }
    v8 = 0;
  }
LABEL_27:
  v7 = v8 << 8;
  v6[0] = v7;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set fuart cfg value %08x/%d", v6[0], a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/chip_setting_ckb2.c",
    90,
    "chip_setting_fuart_cfg_ckb2",
    27,
    74,
    60,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
