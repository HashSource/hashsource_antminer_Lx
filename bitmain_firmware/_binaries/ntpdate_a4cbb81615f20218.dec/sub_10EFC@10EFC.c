_DWORD *__fastcall sub_10EFC(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    sub_10788();
  if ( !a2 || *a2 )
    sub_10788();
  result = malloc(4u);
  *a2 = result;
  if ( result )
    *result = 1296261492;
  return result;
}
