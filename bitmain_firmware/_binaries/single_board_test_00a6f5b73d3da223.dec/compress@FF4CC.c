unsigned int __fastcall compress(_DWORD *a1, unsigned int a2)
{
  int v3; // r3
  unsigned int v5; // [sp+0h] [bp+0h]
  int v6; // [sp+Ch] [bp+Ch]
  unsigned int v7; // [sp+10h] [bp+10h]
  unsigned int v8; // [sp+14h] [bp+14h]

  v7 = a2 & 1;
  v8 = a2 >> *a1;
  v5 = a2 >> 1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(4 * v8 + a1[7]);
    if ( a1[8] == v6 )
      break;
    if ( (~a1[5] & v6) == v5 << a1[2] )
      return v7 | (2 * (v6 & a1[5]));
    v8 = a1[4] & (v8 + 1);
  }
  if ( a1[6] >= a1[3] )
    return a2 & 1;
  *(_DWORD *)(4 * v8 + a1[7]) = a1[6] | (v5 << a1[2]);
  v3 = a1[6];
  a1[6] = v3 + 1;
  return v7 | (2 * v3);
}
