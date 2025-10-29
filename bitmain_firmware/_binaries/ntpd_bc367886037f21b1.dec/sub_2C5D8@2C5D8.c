void sub_2C5D8()
{
  int i; // r4

  for ( i = dword_B8928; i; i = *(_DWORD *)(i + 8) )
    sub_2C270(
      *(_DWORD *)(i + 4),
      statsdir,
      *(const char **)(*(_DWORD *)(i + 4) + 8),
      *(unsigned __int8 *)(*(_DWORD *)(i + 4) + 20),
      *(unsigned __int8 *)(*(_DWORD *)(i + 4) + 21));
}
