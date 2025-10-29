_DWORD *sub_328A0()
{
  _DWORD *v0; // r4
  _DWORD *result; // r0

  v0 = (_DWORD *)peer_list;
  if ( peer_list )
  {
    do
    {
      result = sub_3281C(v0);
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  return result;
}
