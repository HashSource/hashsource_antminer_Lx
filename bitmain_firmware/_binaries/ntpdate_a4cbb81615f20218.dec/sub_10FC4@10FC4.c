void __fastcall sub_10FC4(_DWORD **a1)
{
  _DWORD *v2; // r0

  if ( !a1 )
    sub_10788();
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 != 1296261492 )
      sub_10788();
    free(v2);
  }
  *a1 = 0;
}
