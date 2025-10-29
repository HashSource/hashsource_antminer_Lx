int __fastcall get_algo_type(const char *a1, int *a2)
{
  size_t n; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  for ( i = 0; i <= 9; ++i )
  {
    n = strlen(a1);
    if ( n && !strncasecmp(a1, off_1EC5CC[i], n) && !a1[n] )
    {
      *a2 = i;
      return 1;
    }
  }
  return 0;
}
