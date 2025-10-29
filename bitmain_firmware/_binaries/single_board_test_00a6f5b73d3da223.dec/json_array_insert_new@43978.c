int __fastcall json_array_insert_new(int a1, size_t a2, int a3)
{
  json_t **v8; // [sp+18h] [bp+10h]

  if ( !a3 )
    return -1;
  if ( a1 && *(_DWORD *)a1 == 1 && a1 != a3 && *(_DWORD *)(a1 + 12) >= a2 )
  {
    v8 = json_array_grow((json_array_t *)a1, 1u, 0);
    if ( v8 )
    {
      if ( *(json_t ***)(a1 + 16) == v8 )
      {
        sub_43808(a1, a2 + 1, a2, *(_DWORD *)(a1 + 12) - a2);
      }
      else
      {
        array_copy(*(json_t ***)(a1 + 16), 0, v8, 0, a2);
        array_copy(*(json_t ***)(a1 + 16), a2 + 1, v8, a2, *(_DWORD *)(a1 + 12) - a2);
        jsonp_free(v8);
      }
      *(_DWORD *)(4 * a2 + *(_DWORD *)(a1 + 16)) = a3;
      ++*(_DWORD *)(a1 + 12);
      return 0;
    }
    else
    {
      sub_42F24(a3);
      return -1;
    }
  }
  else
  {
    sub_42F24(a3);
    return -1;
  }
}
