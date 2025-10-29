int __fastcall sub_3AA2C(struct sockaddr *a1, int a2, char a3, char a4, int a5)
{
  __int16 v6; // r6
  char v7; // r3
  int v9; // [sp+Ch] [bp-4h]

  v6 = __rev16(a5 << 12);
  if ( dword_BB920 )
    v7 = (8 * dword_BB920) | 0x87;
  else
    v7 = -105;
  byte_BB924 = v7;
  byte_BB926 = a3;
  word_BB928 = v6;
  byte_BB927 = a4;
  byte_BB925 = 0;
  word_BB92A = 0;
  sub_16874(a1, a2, -1, (unsigned __int8 *)&byte_BB924, 8u);
  ++errorcounter[a5];
  return v9;
}
