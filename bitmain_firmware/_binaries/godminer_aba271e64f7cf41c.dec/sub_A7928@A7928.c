int sub_A7928()
{
  double v0; // d0
  double v2; // d0
  int i; // [sp+1Ch] [bp-8h]

  if ( dword_15FAFC <= 1 )
    return -1;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_15FAFC - 1 )
      return -1;
    if ( v0 > *(double *)&dword_15FAE8[2 * i + 26] - 0.001 && v0 < *(double *)&dword_15FAE8[2 * i + 28] + 0.001
      || v0 < *(double *)&dword_15FAE8[2 * i + 26] + 0.001 && v0 > *(double *)&dword_15FAE8[2 * i + 28] - 0.001 )
    {
      break;
    }
  }
  v2 = (v0 - *(double *)&dword_15FAE8[2 * i + 26])
     * ((double)(*((unsigned __int8 *)&dword_15FAE8[6] + i + 1) - *((unsigned __int8 *)&dword_15FAE8[6] + i))
      / (*(double *)&dword_15FAE8[2 * i + 28] - *(double *)&dword_15FAE8[2 * i + 26]))
     + (double)*((unsigned __int8 *)&dword_15FAE8[6] + i);
  round();
  if ( (unsigned int)(int)v2 >= 0x100 )
    return -1;
  else
    return (int)v2;
}
