int __fastcall sub_33D8F4(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r1
  int v3; // r6
  int v4; // r3
  int v5; // r4

  v1 = *a1;
  v2 = **a1;
  if ( v2 != 110 )
  {
    if ( (unsigned int)(v2 - 48) <= 9 )
    {
      v3 = 0;
      goto LABEL_5;
    }
    return 0;
  }
  *a1 = v1 + 1;
  v2 = v1[1];
  if ( (unsigned int)(v2 - 48) > 9 )
    return 0;
  ++v1;
  v3 = 1;
LABEL_5:
  v4 = 0;
  do
  {
    *a1 = ++v1;
    v5 = v2 + 10 * v4;
    v2 = *v1;
    v4 = v5 - 48;
  }
  while ( (unsigned int)(v2 - 48) <= 9 );
  if ( v3 )
    return 48 - v5;
  return v4;
}
