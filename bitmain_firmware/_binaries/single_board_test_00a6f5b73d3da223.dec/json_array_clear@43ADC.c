int __fastcall json_array_clear(_DWORD *a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  if ( !a1 || *a1 != 1 )
    return -1;
  for ( i = 0; a1[3] > i; ++i )
    sub_42F24(*(_DWORD *)(4 * i + a1[4]));
  a1[3] = 0;
  return 0;
}
