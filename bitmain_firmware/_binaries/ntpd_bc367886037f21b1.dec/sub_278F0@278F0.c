void *__fastcall sub_278F0(int a1)
{
  void *v2; // r0
  void *result; // r0

  v2 = *(void **)(a1 + 12);
  if ( v2 )
    free(v2);
  result = *(void **)(a1 + 20);
  if ( result )
    free(result);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}
