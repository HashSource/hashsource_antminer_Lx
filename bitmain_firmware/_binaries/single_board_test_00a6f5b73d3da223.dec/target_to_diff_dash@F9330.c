int __fastcall target_to_diff_dash(int a1)
{
  int j; // [sp+Ch] [bp+Ch]
  int i; // [sp+10h] [bp+10h]
  unsigned __int8 v5; // [sp+17h] [bp+17h]

  v5 = 0;
  for ( i = 31; i >= 0; --i )
  {
    for ( j = 7; j >= 0; --j )
    {
      if ( (((int)*(unsigned __int8 *)(i + a1) >> j) & 1) != 0 )
        return v5;
      ++v5;
    }
  }
  return v5;
}
