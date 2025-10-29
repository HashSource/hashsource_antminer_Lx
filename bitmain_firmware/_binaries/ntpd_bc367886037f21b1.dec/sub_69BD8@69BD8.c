char *__fastcall sub_69BD8(char *result)
{
  _DWORD *v1; // r4
  int v2; // r2
  int v3; // r1
  int v4; // r2

  v1 = result;
  if ( result )
  {
    v2 = *((_DWORD *)result + 552) - 1;
    *((_DWORD *)result + 552) = v2;
    if ( v2 )
      result = sub_64A18(3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v3 = dword_10621C;
    dword_10621C = (int)v1;
    v4 = dword_106208 + 1;
    *v1 = v3;
    dword_106208 = v4;
  }
  return result;
}
