_DWORD *__fastcall sub_65D70(_DWORD *a1, int a2)
{
  int v2; // r3
  int v4; // r0
  unsigned int v5; // r2

  v2 = a2 + 10;
  if ( a2 + 10 > 11 )
    v2 = a2 - 2;
  v4 = a2 + 10 > 11;
  if ( (unsigned int)v2 > 0xB )
  {
    v5 = (v2 >> 31) ^ ((v2 ^ (unsigned int)(v2 >> 31)) / 0xC);
    v4 += v5;
    v2 -= 12 * v5;
  }
  *a1 = v4;
  a1[1] = *(unsigned __int16 *)&a192930Aug21202[2 * v2 + 116] - 306;
  return a1;
}
