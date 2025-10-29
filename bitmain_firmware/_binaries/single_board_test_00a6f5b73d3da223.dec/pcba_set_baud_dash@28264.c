int __fastcall pcba_set_baud_dash(int a1, char *a2)
{
  _DWORD s[4]; // [sp+Ch] [bp+Ch] BYREF
  unsigned int v6; // [sp+1Ch] [bp+1Ch]
  char v7; // [sp+26h] [bp+26h]
  unsigned __int8 v8; // [sp+27h] [bp+27h]

  v6 = 0;
  v8 = 26;
  v7 = 3;
  memset(s, 0, sizeof(s));
  s[2] = 1835009;
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
    v7 = 1;
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
    v7 = 0;
  }
LABEL_27:
  v6 = (v8 << 8) | 0xA0C40031;
  s[0] = v6;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
}
