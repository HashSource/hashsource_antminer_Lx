void __fastcall sub_73370(_DWORD **a1)
{
  _DWORD *v2; // r0

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/nls/msgcat.c", 94, 0, "msgcatp != ((void *)0)");
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 != 1296261492 )
      sub_733C0();
    free(v2);
  }
  *a1 = 0;
}
