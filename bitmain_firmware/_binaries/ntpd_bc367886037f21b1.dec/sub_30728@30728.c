void sub_30728()
{
  int *v0; // r4
  int v1; // r0
  int v2; // r6
  _DWORD *v3; // r3
  _DWORD *v4; // r0

  if ( dword_B9E90 )
  {
    v0 = mru_incalloc[0];
    if ( !mru_incalloc[0] )
      return;
  }
  else
  {
    v0 = mru_initalloc;
    if ( !mru_initalloc )
      return;
  }
  v1 = sub_638A8(0, v0, 72);
  v2 = dword_B9E94;
  mru_alloc += (int)v0;
  v3 = (_DWORD *)(v1 + 72 * (_DWORD)v0);
  do
  {
    v4 = memset(v3 - 18, 0, 0x48u);
    v0 = (int *)((char *)v0 - 1);
    *v4 = v2;
    v3 = v4;
    v2 = (int)v4;
    dword_B9E94 = (int)v4;
  }
  while ( v0 );
  ++dword_B9E90;
}
