int __fastcall get_all_works(int a1)
{
  _DWORD *v1; // r4
  char s[64]; // [sp+1Ch] [bp+Ch] BYREF
  int v6; // [sp+5Ch] [bp+4Ch]
  int v7; // [sp+60h] [bp+50h]
  size_t core_works_from_txt; // [sp+64h] [bp+54h]
  unsigned int j; // [sp+68h] [bp+58h]
  unsigned int i; // [sp+6Ch] [bp+5Ch]

  memset(s, 0, sizeof(s));
  i = 0;
  j = 0;
  v7 = 0;
  printf(
    "%s, AsicNum %d, CoreNum %d, PatternNum %d\n",
    "get_all_works",
    *(_DWORD *)(a1 + 40),
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12),
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16));
  v1 = *(_DWORD **)(a1 + 8);
  v1[2] = malloc(104 * v1[4] * v1[3] * *(_DWORD *)(a1 + 40));
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) )
  {
    for ( i = 0; *(_DWORD *)(a1 + 40) > i; ++i )
    {
      for ( j = 0; *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) > j; ++j )
      {
        v6 = 104 * *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) * (j + i * *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12))
           + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8);
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) == 6 || *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) == 7 )
        {
          sprintf(
            s,
            "%s/%s/%s%02d/%s%02d.txt",
            *(const char **)(a1 + 12),
            **(const char ***)(a1 + 8),
            "asic-",
            i,
            "core-",
            j);
          core_works_from_txt = get_core_works_from_txt(
                                  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4),
                                  s,
                                  v6,
                                  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16));
        }
        else
        {
          sprintf(
            s,
            "%s/%s/%s%02d/%s%02d.json",
            *(const char **)(a1 + 12),
            **(const char ***)(a1 + 8),
            "asic-",
            i,
            "core-",
            j);
          core_works_from_txt = get_core_works(
                                  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4),
                                  s,
                                  v6,
                                  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16));
        }
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16) > core_works_from_txt )
        {
          printf(
            "which_asic %02x, which_core %02x, get core works %d, less than pattern_num %d\n",
            i,
            j,
            core_works_from_txt,
            *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16));
          return 0;
        }
      }
    }
    return 1;
  }
  else
  {
    printf("%s, malloc works sturct error!\n", "get_all_works");
    return 0;
  }
}
