void __fastcall sub_436CC(int a1)
{
  unsigned int i; // [sp+Ch] [bp+Ch]

  for ( i = 0; *(_DWORD *)(a1 + 12) > i; ++i )
    sub_42F24(*(_DWORD *)(4 * i + *(_DWORD *)(a1 + 16)));
  jsonp_free(*(void **)(a1 + 16));
  jsonp_free((void *)a1);
}
