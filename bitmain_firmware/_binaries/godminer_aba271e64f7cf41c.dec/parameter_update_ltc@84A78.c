int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  if ( *(_BYTE *)(a1 + 256) != 1 )
  {
    if ( a2 && a3 >= 900 && a3 <= 1500 )
      *(float *)(a1 + 1104) = (float)a3;
    if ( a4 && a5 > 1319 && a5 <= 1500 )
      *(_DWORD *)(a1 + 1108) = a5;
  }
  return 0;
}
