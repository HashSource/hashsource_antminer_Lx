_BYTE *__fastcall sub_4089C(size_t a1, unsigned int *a2, size_t *a3)
{
  _BYTE *v5; // r0

  v5 = (_BYTE *)sub_405B4(a1, a2, a3);
  if ( !v5 )
    return 0;
  while ( *v5 != 45 )
  {
    v5 = (_BYTE *)sub_405B4((size_t)v5, a2, a3);
    if ( !v5 )
      return 0;
  }
  --*a3;
  return v5 + 1;
}
