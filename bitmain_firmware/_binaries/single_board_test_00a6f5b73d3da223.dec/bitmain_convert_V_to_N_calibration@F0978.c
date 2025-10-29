int bitmain_convert_V_to_N_calibration()
{
  double v0; // d0
  int i; // [sp+18h] [bp+18h]
  int v4; // [sp+1Ch] [bp+1Ch]

  v4 = -1;
  if ( dword_47B930 <= 1 )
    return -1;
  for ( i = 0; dword_47B930 - 1 > i; ++i )
  {
    if ( *((double *)&unk_47B8D0 + i + 2) <= v0 && *((double *)&unk_47B8D0 + i + 3) > v0
      || *((double *)&unk_47B8D0 + i + 2) > v0 && *((double *)&unk_47B8D0 + i + 3) <= v0 )
    {
      v4 = (int)((v0 - *((double *)&unk_47B8D0 + i + 2))
               * ((double)(*((unsigned __int8 *)&unk_47B8D0 + i + 1) - *((unsigned __int8 *)&unk_47B8D0 + i))
                / (*((double *)&unk_47B8D0 + i + 3) - *((double *)&unk_47B8D0 + i + 2)))
               + (double)*((unsigned __int8 *)&unk_47B8D0 + i));
    }
  }
  return v4;
}
