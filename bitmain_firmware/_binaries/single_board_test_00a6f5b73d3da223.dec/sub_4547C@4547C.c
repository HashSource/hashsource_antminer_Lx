int __fastcall sub_4547C(int a1, const char *a2, int a3)
{
  _DWORD *v6; // [sp+14h] [bp+14h]
  int v7; // [sp+18h] [bp+18h]

  v7 = 8 * (a3 & ((1 << *(_DWORD *)(a1 + 8)) - 1)) + *(_DWORD *)(a1 + 4);
  v6 = (_DWORD *)sub_45414((hashtable_t *)a1, (bucket_t *)v7, a2, a3);
  if ( !v6 )
    return -1;
  if ( v6 == *(_DWORD **)v7 && v6 == *(_DWORD **)(v7 + 4) )
  {
    *(_DWORD *)(v7 + 4) = a1 + 12;
    *(_DWORD *)v7 = *(_DWORD *)(v7 + 4);
  }
  else if ( v6 == *(_DWORD **)v7 )
  {
    *(_DWORD *)v7 = v6[1];
  }
  else if ( v6 == *(_DWORD **)(v7 + 4) )
  {
    *(_DWORD *)(v7 + 4) = *v6;
  }
  sub_45368(v6);
  sub_45368(v6 + 2);
  sub_44A90(v6[5]);
  jsonp_free(v6);
  --*(_DWORD *)a1;
  return 0;
}
