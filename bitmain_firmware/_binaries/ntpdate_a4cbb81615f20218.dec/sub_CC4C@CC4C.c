unsigned int sub_CC4C()
{
  int v0; // r3
  int *v1; // r1
  unsigned int v2; // r0
  int *v3; // r3
  unsigned int result; // r0

  v0 = off_310CC[0];
  v1 = (int *)&byte_4[off_310D0];
  v2 = *(_DWORD *)off_310CC[0] + *(_DWORD *)off_310D0;
  *(_DWORD *)off_310CC[0] = v2;
  v3 = (int *)&byte_4[v0];
  result = v2 >> 1;
  if ( v3 < off_310CC )
  {
    if ( v1 >= off_310CC )
      v1 = &dword_31050;
  }
  else
  {
    v3 = &dword_31050;
  }
  off_310CC[0] = (int)v3;
  off_310D0 = (int)v1;
  return result;
}
