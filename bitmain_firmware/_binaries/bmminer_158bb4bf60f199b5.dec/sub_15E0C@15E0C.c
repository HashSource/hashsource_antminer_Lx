int sub_15E0C()
{
  int i; // r4
  _DWORD *v1; // r6
  int j; // r5
  int v3; // r1

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        return 0;
    }
    v1 = &dword_9F80C[27 * i];
    for ( j = 0; j != 4; ++j )
    {
      v3 = *((unsigned __int8 *)v1 + 13);
      v1 += 6;
      sub_1A954((unsigned __int8)i, v3, 0, 1);
    }
  }
  return 0;
}
