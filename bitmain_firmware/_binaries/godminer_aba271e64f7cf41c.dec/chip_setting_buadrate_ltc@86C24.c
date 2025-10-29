int __fastcall chip_setting_buadrate_ltc(int a1, int a2)
{
  _DWORD s[4]; // [sp+8h] [bp-1Ch] BYREF
  unsigned int v6; // [sp+18h] [bp-Ch]
  char v7; // [sp+1Ch] [bp-8h]
  char v8; // [sp+1Dh] [bp-7h]
  unsigned __int16 v9; // [sp+1Eh] [bp-6h]

  v6 = 0;
  v9 = 26;
  v8 = 0;
  v7 = 0;
  memset(s, 0, sizeof(s));
  s[2] = 6291457;
  if ( a2 == 921600 )
    goto LABEL_27;
  if ( a2 > 921600 )
  {
    if ( a2 != 3000000 )
    {
      if ( a2 <= 3000000 )
      {
        if ( a2 == 1500000 || a2 == 1562500 )
        {
          v9 = 1;
          goto LABEL_33;
        }
        if ( (_UNKNOWN *)a2 != &unk_FE502 )
          goto LABEL_32;
LABEL_27:
        v9 = 2;
        goto LABEL_33;
      }
      if ( a2 == 6250000 )
      {
        v9 = 1;
        v8 = 1;
        goto LABEL_33;
      }
      if ( a2 == 12500000 )
      {
        v9 = 0;
        v8 = 1;
        goto LABEL_33;
      }
      if ( a2 != 3125000 )
        goto LABEL_32;
    }
    v9 = 0;
    goto LABEL_33;
  }
  if ( (__int16 *)a2 == &word_1C200 )
    goto LABEL_29;
  if ( a2 > (int)&word_1C200 )
  {
    if ( a2 == 446429 || a2 == 460800 )
    {
      v9 = 6;
      goto LABEL_33;
    }
    if ( (__int16 *)a2 != &word_1C41C )
      goto LABEL_32;
LABEL_29:
    v9 = 26;
    goto LABEL_33;
  }
  switch ( a2 )
  {
    case 9600:
      goto LABEL_31;
    case 38400:
      v9 = 80;
      goto LABEL_33;
    case 9586:
LABEL_31:
      v9 = 325;
      goto LABEL_33;
  }
LABEL_32:
  v9 = 26;
LABEL_33:
  if ( v8 )
    chip_setting_freq_ltc(a1, 1, 0, 1);
  v6 = (unsigned int)&loc_1FF00 & (v9 << 8) | (16 * v7) & 0x30 | v8 & 1;
  s[0] = v6;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
