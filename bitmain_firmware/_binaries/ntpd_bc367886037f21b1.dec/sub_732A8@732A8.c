_DWORD *__fastcall sub_732A8(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/nls/msgcat.c", 64, 0, "name != ((void *)0)");
  if ( !a2 || *a2 )
    sub_6E8F0((int)"./../lib/isc/nls/msgcat.c", 65, 0, "msgcatp != ((void *)0) && *msgcatp == ((void *)0)");
  result = malloc(4u);
  *a2 = result;
  if ( result )
    *result = 1296261492;
  return result;
}
