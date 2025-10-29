void __fastcall config_free(int a1)
{
  int i; // [sp+Ch] [bp+Ch]

  if ( a1 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) )
    {
      free(*(void **)(*(_DWORD *)(a1 + 8) + 8));
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) = 0;
    }
    if ( *(_DWORD *)a1 )
    {
      for ( i = 0; *(_DWORD *)(a1 + 4) > i; ++i )
      {
        if ( *(_DWORD *)(80 * i + *(_DWORD *)a1) )
        {
          free(*(void **)(80 * i + *(_DWORD *)a1));
          *(_DWORD *)(80 * i + *(_DWORD *)a1) = 0;
        }
        if ( *(_DWORD *)(80 * i + *(_DWORD *)a1 + 24) )
        {
          free(*(void **)(80 * i + *(_DWORD *)a1 + 24));
          *(_DWORD *)(80 * i + *(_DWORD *)a1 + 24) = 0;
        }
      }
      free(*(void **)a1);
      *(_DWORD *)a1 = 0;
    }
    if ( *(_DWORD *)(a1 + 12) )
    {
      free(*(void **)(a1 + 12));
      *(_DWORD *)(a1 + 12) = 0;
    }
    if ( *(_DWORD *)(a1 + 48) )
    {
      free(*(void **)(a1 + 48));
      *(_DWORD *)(a1 + 48) = 0;
    }
    if ( *(_DWORD *)(a1 + 68) )
    {
      free(*(void **)(a1 + 68));
      *(_DWORD *)(a1 + 68) = 0;
    }
  }
}
