int __fastcall parameter_update_dash(int a1, char a2, unsigned int a3)
{
  int v3; // r1
  unsigned int v5; // r0
  int v6; // s15

  if ( *(_BYTE *)(a1 + 152) )
    return 0;
  if ( (int)a3 <= 800 )
    v3 = a2 & 1;
  else
    v3 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 780) / a3;
    v6 = (int)*(float *)(a1 + 768);
    *(float *)(a1 + 768) = (float)(int)a3;
    *(_DWORD *)(a1 + 780) = (unsigned int)((double)(v6 * v5) * 0.35);
  }
  else
  {
    sub_5A4C4(a1);
  }
  return 0;
}
