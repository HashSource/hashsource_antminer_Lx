int __fastcall find_APW_power_version(int a1)
{
  unsigned __int8 i; // [sp+Fh] [bp+Fh]
  unsigned __int8 j; // [sp+Fh] [bp+Fh]

  if ( *(_DWORD *)(g_config_info + 32) )
  {
    for ( i = 0; i < (unsigned int)gPower_version_array_size; ++i )
    {
      if ( APW_power_version[i] == a1 )
        return 1;
    }
  }
  else
  {
    for ( j = 0; j < *(int *)(g_config_info + 60); ++j )
    {
      if ( *(_DWORD *)(4 * j + *(_DWORD *)(g_config_info + 56)) == a1 )
        return 1;
    }
  }
  return 0;
}
