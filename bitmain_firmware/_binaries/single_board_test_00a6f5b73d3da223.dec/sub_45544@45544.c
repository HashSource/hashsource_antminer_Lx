void __fastcall sub_45544(int a1)
{
  _DWORD *v2; // [sp+10h] [bp+10h]
  _DWORD *i; // [sp+14h] [bp+14h]

  for ( i = *(_DWORD **)(a1 + 16); (_DWORD *)(a1 + 12) != i; i = v2 )
  {
    v2 = (_DWORD *)i[1];
    sub_44A90(i[5]);
    jsonp_free(i);
  }
}
