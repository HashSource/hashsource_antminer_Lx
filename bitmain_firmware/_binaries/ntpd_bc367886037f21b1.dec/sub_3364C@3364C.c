int __fastcall sub_3364C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r4
  int v5; // r3
  int v6; // [sp+4h] [bp-4h]

  v2 = (_DWORD *)a1[60];
  if ( v2 )
  {
    if ( (int)a1[61] >= 0 )
    {
      v3 = 0;
      do
      {
        sub_61DF8(v2[v3++], 0);
        v2 = (_DWORD *)a1[60];
      }
      while ( a1[61] >= v3 );
    }
    free(v2);
    a1[60] = 0;
  }
  sub_278F0((int)(a1 + 68));
  v5 = a1[17];
  a1[61] = 0;
  a1[17] = v5 & 0xFFFF7FFF;
  return v6;
}
