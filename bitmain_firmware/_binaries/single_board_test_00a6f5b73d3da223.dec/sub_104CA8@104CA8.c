int __fastcall sub_104CA8(int a1, unsigned int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int v8; // [sp+0h] [bp+0h]
  int v9; // [sp+4h] [bp+4h]
  int v11; // [sp+Ch] [bp+Ch]
  _BYTE s[208]; // [sp+10h] [bp+10h] BYREF

  v11 = a1;
  v9 = a3;
  v8 = a4;
  if ( !a1 || !a3 && a4 || a5 > 0xC7 )
    return -1;
  memset(s, 0, 0xC8u);
  while ( v8 >= a5 )
  {
    sub_104C24((int)s, v9, a5);
    sub_104824((int)s);
    v9 += a5;
    v8 -= a5;
  }
  s[v8] ^= a6;
  s[a5 - 1] = ~(s[a5 - 1] ^ 0x7F);
  sub_104C24((int)s, v9, v8);
  sub_104824((int)s);
  while ( a2 >= a5 )
  {
    sub_104C6C((int)s, v11, a5);
    sub_104824((int)s);
    v11 += a5;
    a2 -= a5;
  }
  sub_104C6C((int)s, v11, a2);
  memset(s, 0, 0xC8u);
  return 0;
}
