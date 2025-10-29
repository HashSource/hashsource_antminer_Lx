int __fastcall substr(const char *a1, int a2, unsigned int a3, int a4)
{
  unsigned int i; // [sp+14h] [bp+14h]

  if ( a2 + a3 <= strlen(a1) )
  {
    for ( i = 0; i < a3; ++i )
      *(_BYTE *)(i + a4) = a1[i + a2];
    *(_BYTE *)(i + a4) = 0;
    return 1;
  }
  else
  {
    puts("You want copy to many chars");
    return 0;
  }
}
