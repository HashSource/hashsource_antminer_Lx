int __fastcall get_chip_ft_correspond(_DWORD *a1, _DWORD *a2)
{
  if ( opt_algo == 11 )
    *a1 = &off_14E4A8;
  else
    *a1 = &off_14E5D4;
  *a2 = 25;
  return 0;
}
