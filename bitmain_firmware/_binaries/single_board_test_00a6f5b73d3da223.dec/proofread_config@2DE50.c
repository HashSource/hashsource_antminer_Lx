bool __fastcall proofread_config(_DWORD *a1)
{
  int v4; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  v4 = 0;
  for ( i = 0; a1[1] > i; ++i )
  {
    if ( *(_BYTE *)(80 * i + *a1 + 56) )
    {
      if ( (unsigned __int8)get_algo_type(*(const char **)(80 * i + *a1), (int *)(80 * i + *a1 + 4)) != 1 )
      {
        printf("algo %s type err!\n", *(const char **)(80 * i + *a1));
        return 0;
      }
      a1[2] = *a1 + 80 * i;
      *(_DWORD *)(80 * i + *a1 + 32) = 0;
      ++v4;
    }
  }
  a1[16] = 0;
  return v4 == 1;
}
