_DWORD *__fastcall sub_40138(_DWORD *result, int a2)
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    sub_3FF74(result, a2);
    return (_DWORD *)strbuffer_pop((strbuffer_t *)(v2 + 10));
  }
  return result;
}
