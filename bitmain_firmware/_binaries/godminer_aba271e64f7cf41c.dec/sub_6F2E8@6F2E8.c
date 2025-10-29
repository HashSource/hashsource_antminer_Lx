unsigned int __fastcall sub_6F2E8(const char *a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 2; ++i )
  {
    if ( !strcmp(a1, off_14FC40[i]) )
      return i;
  }
  return 3;
}
