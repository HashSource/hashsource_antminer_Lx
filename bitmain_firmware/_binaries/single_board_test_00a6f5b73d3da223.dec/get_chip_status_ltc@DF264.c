int __fastcall get_chip_status_ltc(_DWORD *a1, int a2)
{
  int v3; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  v3 = a1[81];
  for ( i = 0; a1[49] > i; ++i )
  {
    if ( (int)a1[82] <= 1
      && *(_BYTE *)(8 * i + v3) != 1
      && (*(_DWORD *)(4 * i + a2) == 2 || *(_DWORD *)(4 * i + a2) == 3) )
    {
      *(_BYTE *)(8 * i + v3) = 1;
      ++a1[82];
    }
    if ( *(_BYTE *)(8 * i + v3) && (*(_DWORD *)(4 * i + a2) == 2 || *(_DWORD *)(4 * i + a2) == 3) )
      *(_DWORD *)(4 * i + a2) = 0;
  }
  return 0;
}
