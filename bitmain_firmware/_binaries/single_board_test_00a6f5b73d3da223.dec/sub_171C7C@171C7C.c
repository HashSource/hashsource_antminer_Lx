_DWORD *__fastcall sub_171C7C(_DWORD *a1, char a2, int a3, void *a4, unsigned int a5)
{
  unsigned int v5; // r3
  char v8; // [sp+4h] [bp+4h]
  _DWORD src[16]; // [sp+10h] [bp+10h] BYREF
  _DWORD *v12; // [sp+50h] [bp+50h]
  int v13; // [sp+54h] [bp+54h]
  unsigned int v14; // [sp+58h] [bp+58h]
  unsigned int v15; // [sp+5Ch] [bp+5Ch]
  void *s; // [sp+60h] [bp+60h]
  unsigned int i; // [sp+64h] [bp+64h]

  v8 = a3;
  s = a1;
  v15 = a1[32];
  v14 = a3 + 8 * v15;
  a1[66] += v14;
  if ( a1[66] < v14 && !++a1[67] && !++a1[68] )
    ++a1[69];
  sub_1673B4(src, a1[66]);
  sub_1673B4(&src[1], a1[67]);
  sub_1673B4(&src[2], a1[68]);
  sub_1673B4(&src[3], a1[69]);
  if ( !v14 )
  {
    a1[69] = 0;
    a1[68] = a1[69];
    a1[67] = a1[68];
    a1[66] = a1[67];
  }
  v13 = 128 >> v8;
  v5 = v15++;
  *((_BYTE *)s + v5) = (128 >> v8) | a2 & -(128 >> v8);
  memset((char *)s + v15, 0, 128 - v15);
  if ( v15 > 0x6E )
  {
    sub_16C794(a1);
    a1[69] = 0;
    a1[68] = a1[69];
    a1[67] = a1[68];
    a1[66] = a1[67];
    memset(s, 0, 0x80u);
  }
  sub_167388((_WORD *)s + 55, 32 * a5);
  memcpy((char *)s + 112, src, 0x10u);
  sub_16C794(a1);
  v12 = a1 + 34;
  for ( i = 0; i < a5; ++i )
    sub_1673B4(&src[i], v12[i]);
  memcpy(a4, src, 4 * a5);
  return sub_1674D4(a1, 32 * a5);
}
