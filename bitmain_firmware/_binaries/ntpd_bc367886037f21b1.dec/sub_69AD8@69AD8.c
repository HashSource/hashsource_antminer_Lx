int *__fastcall sub_69AD8(int a1)
{
  int v1; // r6
  signed int v2; // r6
  int *result; // r0
  int v4; // r3
  int v5; // r4
  int *i; // lr
  int v7; // r1

  dword_106210 = 0;
  dword_106208 = 0;
  dword_106214 = 0;
  dword_10620C = 0;
  v1 = dword_106218;
  dword_106218 = 0;
  v2 = a1 + v1;
  result = (int *)sub_638A8(0, v2, 0x8A4u, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = dword_10621C;
    for ( i = result; ; i += 553 )
    {
      ++v4;
      ++dword_106208;
      v7 = dword_106210;
      *i = v5;
      v5 = (int)i;
      dword_106210 = v7 + 1;
      if ( v2 == v4 )
        break;
    }
    dword_10621C = (int)&result[553 * v2 - 553];
  }
  ++dword_106214;
  return result;
}
