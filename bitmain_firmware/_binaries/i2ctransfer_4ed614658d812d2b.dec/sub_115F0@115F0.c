int __fastcall sub_115F0(const char *a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r3
  _BOOL4 v7; // r1
  char *endptr; // [sp+4h] [bp-8h] BYREF

  result = strtol(a1, &endptr, 0);
  if ( *endptr || !*a1 )
  {
    fwrite("Error: Chip address is not a number!\n", 1u, 0x25u, (FILE *)stderr);
    return -1;
  }
  else
  {
    if ( a2 )
      v5 = 0;
    else
      v5 = 3;
    if ( a2 )
      v6 = 127;
    else
      v6 = 119;
    v7 = v6 < result;
    if ( v5 > result )
      v7 = 1;
    if ( v7 )
    {
      fprintf((FILE *)stderr, "Error: Chip address out of range (0x%02lx-0x%02lx)!\n", v5, v6);
      return -2;
    }
  }
  return result;
}
