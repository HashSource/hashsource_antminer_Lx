_DWORD *__fastcall sub_F83C0(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // [sp+Ch] [bp+Ch]

  v2 = (_DWORD *)*a2;
  *a2 = *(_DWORD *)(*a2 + 4);
  if ( (_DWORD *)v2[1] != result + 1 )
    *(_DWORD *)(v2[1] + 8) = a2;
  if ( result + 1 != v2 )
    v2[2] = a2[2];
  if ( a2[2] )
  {
    if ( *(_DWORD **)(a2[2] + 4) == a2 )
      *(_DWORD *)(a2[2] + 4) = v2;
    else
      *(_DWORD *)a2[2] = v2;
  }
  else
  {
    *result = v2;
  }
  v2[1] = a2;
  if ( result + 1 != a2 )
    a2[2] = v2;
  return result;
}
