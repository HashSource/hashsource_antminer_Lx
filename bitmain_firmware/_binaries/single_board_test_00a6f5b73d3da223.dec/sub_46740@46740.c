void sub_46740()
{
  int v0; // [sp+0h] [bp+0h]
  unsigned __int8 i; // [sp+7h] [bp+7h]

  if ( dword_479E64 )
  {
    for ( i = 0; i < dword_479EA8; ++i )
    {
      v0 = dword_479E68[i];
      if ( *(_DWORD *)(dword_479E64 + 4 * v0) )
      {
        free(*(void **)(dword_479E64 + 4 * v0));
        *(_DWORD *)(dword_479E64 + 4 * v0) = 0;
      }
    }
    free((void *)dword_479E64);
    dword_479E64 = 0;
  }
}
