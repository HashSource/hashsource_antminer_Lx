int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  if ( *(_BYTE *)(a1 + 144) != 1 )
  {
    if ( a2 && a3 >= 900 && a3 <= 1900 )
    {
      *(_DWORD *)(a1 + 772) = (int)*(float *)(a1 + 760) * (*(_DWORD *)(a1 + 772) / (unsigned int)a3);
      *(float *)(a1 + 760) = (float)a3;
    }
    if ( a4 && a5 >= 1400 && a5 <= 1550 )
      *(_DWORD *)(a1 + 764) = a5;
  }
  return 0;
}
