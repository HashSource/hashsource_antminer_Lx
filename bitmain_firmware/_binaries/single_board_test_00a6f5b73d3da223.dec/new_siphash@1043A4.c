_DWORD *new_siphash()
{
  _DWORD *v1; // [sp+4h] [bp+4h]

  v1 = calloc(1u, 0x60u);
  if ( !v1 )
    puts("siphash calloc failed!");
  v1[18] = 1065021;
  v1[19] = 1065105;
  v1[20] = 1065773;
  v1[21] = 1064941;
  return v1;
}
