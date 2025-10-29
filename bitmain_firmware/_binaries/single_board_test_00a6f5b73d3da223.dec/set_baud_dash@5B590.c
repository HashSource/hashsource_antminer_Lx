int __fastcall set_baud_dash(int a1, char *a2)
{
  _DWORD s[4]; // [sp+8h] [bp+8h] BYREF
  unsigned int v6; // [sp+18h] [bp+18h]
  unsigned int v7; // [sp+1Ch] [bp+1Ch]
  int v8; // [sp+20h] [bp+20h]
  char v9; // [sp+27h] [bp+27h]
  int j; // [sp+28h] [bp+28h]
  int i; // [sp+2Ch] [bp+2Ch]
  unsigned __int8 v12; // [sp+33h] [bp+33h]
  int v13; // [sp+34h] [bp+34h]

  v13 = 0;
  v7 = 0;
  v12 = 26;
  v9 = 3;
  v8 = *(_DWORD *)(a1 + 624);
  *(_DWORD *)(a1 + 240) = makeup_chip_addr_dash(*(_DWORD *)(a1 + 296), 0x46u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 70);
  sub_56628(a1, 70);
  memset(s, 0, sizeof(s));
  s[2] = 1835009;
  v12 = 26;
  v7 = -1597760975;
  s[0] = -1597760975;
  v13 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
  LOBYTE(s[2]) = 0;
  v6 = (v12 << 8) | 0xA0840031;
  for ( i = 0; *(_DWORD *)(a1 + 196) > i; ++i )
  {
    if ( i && i % 5 == 4 )
    {
      BYTE1(s[2]) = *(_DWORD *)(a1 + 240) * i;
      s[0] = v6;
      v13 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
    }
  }
  if ( a2 == (char *)&loc_16E360 )
    goto LABEL_27;
  if ( (int)a2 <= 1500000 )
  {
    if ( a2 == (char *)&loc_70800 )
    {
      v12 = 6;
    }
    else if ( (int)a2 > 460800 )
    {
      if ( a2 != (char *)&loc_E1000 && a2 != (char *)&loc_FE502 )
        goto LABEL_32;
      v12 = 2;
    }
    else if ( a2 == (char *)38400 )
    {
      v12 = 80;
    }
    else
    {
      if ( a2 != "stem_Config_File_Information" )
        goto LABEL_32;
      v12 = 26;
    }
    goto LABEL_33;
  }
  if ( a2 == byte_2FAF08 )
  {
LABEL_26:
    v12 = 0;
    goto LABEL_33;
  }
  if ( (int)a2 <= (int)byte_2FAF08 )
  {
    if ( a2 != (_BYTE *)&loc_17D780 + 4 )
    {
      if ( a2 != (char *)&unk_2DC6C0 )
        goto LABEL_32;
      goto LABEL_26;
    }
LABEL_27:
    v12 = 1;
    goto LABEL_33;
  }
  if ( a2 == (char *)6250000 )
  {
    v12 = 0;
    v9 = 1;
  }
  else
  {
    if ( a2 != (char *)12500000 )
    {
LABEL_32:
      v12 = 26;
      goto LABEL_33;
    }
    v12 = 0;
    v9 = 0;
  }
LABEL_33:
  v7 = (v12 << 8) | 0xA0C40031;
  v6 = (v12 << 8) | 0xA0840031;
  LOBYTE(s[2]) = 0;
  for ( j = 0; *(_DWORD *)(a1 + 196) > j; ++j )
  {
    BYTE1(s[2]) = *(_DWORD *)(a1 + 240) * j;
    if ( j && j % 5 == 4 )
    {
      s[0] = v6;
      v13 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
    }
    else
    {
      s[0] = v7;
      v13 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
    }
  }
  sleep(1u);
  return v13;
}
