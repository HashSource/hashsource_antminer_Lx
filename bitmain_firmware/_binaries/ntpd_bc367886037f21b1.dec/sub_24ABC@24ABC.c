char *__fastcall sub_24ABC(const char *a1)
{
  size_t v2; // r0
  int v3; // r4
  size_t v4; // r6
  int v5; // r5

  v2 = strlen(a1);
  v3 = dword_B88D8;
  if ( (*(_WORD *)(dword_B88D8 + 2) & 0x80) != 0 )
    return 0;
  v4 = v2;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( v5 && !memcmp(a1, *(const void **)(v3 + 4), v4) )
    {
      if ( *(_BYTE *)(v5 + v4) == 61 )
        return (char *)(v5 + v4 + 1);
      if ( !*(_BYTE *)(v5 + v4) )
        break;
    }
    v3 += 8;
    if ( (*(_WORD *)(v3 + 2) & 0x80) != 0 )
      return 0;
  }
  return byte_97B44;
}
