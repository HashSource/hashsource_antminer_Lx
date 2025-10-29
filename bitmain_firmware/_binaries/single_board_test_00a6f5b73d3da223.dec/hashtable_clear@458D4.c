void __fastcall hashtable_clear(int a1)
{
  _DWORD *v1; // r2
  unsigned int i; // [sp+Ch] [bp+Ch]

  sub_45544(a1);
  for ( i = 0; 1 << *(_DWORD *)(a1 + 8) > i; ++i )
  {
    v1 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i);
    v1[1] = a1 + 12;
    *v1 = v1[1];
  }
  list_init((list_t *)(a1 + 12));
  list_init((list_t *)(a1 + 20));
  *(_DWORD *)a1 = 0;
}
