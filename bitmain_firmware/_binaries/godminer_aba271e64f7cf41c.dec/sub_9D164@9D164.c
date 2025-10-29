void sub_9D164()
{
  int v0; // [sp+0h] [bp-Ch]
  unsigned __int8 i; // [sp+7h] [bp-5h]

  if ( dword_15FA68 )
  {
    for ( i = 0; i < dword_15FAAC; ++i )
    {
      v0 = dword_15FA6C[i];
      if ( *(_DWORD *)(dword_15FA68 + 4 * v0) )
      {
        free(*(void **)(dword_15FA68 + 4 * v0));
        *(_DWORD *)(dword_15FA68 + 4 * v0) = 0;
      }
    }
    free((void *)dword_15FA68);
    dword_15FA68 = 0;
  }
}
