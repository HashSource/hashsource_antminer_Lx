unsigned int sub_1BFF0()
{
  _DWORD *v0; // r5
  unsigned int v1; // r6
  _DWORD *v2; // r0
  unsigned int v3; // r6
  _DWORD *v4; // r4

  v0 = (_DWORD *)dword_B83D8;
  if ( !dword_B83D8 )
    return 0;
  v2 = *(_DWORD **)dword_B83D8;
  v3 = __clz(*(_DWORD *)(dword_B83D8 + 8));
  *(_DWORD *)(dword_B83D8 + 8) = 1;
  v1 = v3 >> 5;
  if ( v2 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      sub_1BB80(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  *v0 = 0;
  return v1;
}
