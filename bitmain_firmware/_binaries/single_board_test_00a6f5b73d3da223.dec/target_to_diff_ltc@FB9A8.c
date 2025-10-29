int __fastcall target_to_diff_ltc(int a1)
{
  int j; // [sp+14h] [bp+14h]
  int i; // [sp+18h] [bp+18h]
  unsigned __int8 v5; // [sp+1Fh] [bp+1Fh]

  v5 = 0;
  for ( i = 24; i >= 0; i -= 8 )
  {
    for ( j = 63; j >= 0; --j )
    {
      if ( ((*(_QWORD *)(i + a1) >> j) & 1) != 0 )
        return v5;
      ++v5;
    }
  }
  return v5;
}
