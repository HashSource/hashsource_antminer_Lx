bool __fastcall sub_33A848(int a1, int a2)
{
  const char *v2; // r0
  const char *v4; // r1

  if ( a2 == a1 )
    return 1;
  v2 = *(const char **)(a1 + 4);
  if ( *v2 == 42 )
    return 0;
  v4 = *(const char **)(a2 + 4);
  if ( *v4 == 42 )
    ++v4;
  return strcmp(v2, v4) == 0;
}
