int __fastcall sub_198D8(int *a1, int *a2)
{
  bool v2; // nf

  if ( !a1 )
    sub_10788();
  if ( (unsigned int)a1[1] > 0x3B9AC9FF )
    sub_10788();
  v2 = *a1 < 0;
  if ( *a1 >= 0 )
    *a2 = *a1;
  if ( v2 )
    return 41;
  else
    return 0;
}
