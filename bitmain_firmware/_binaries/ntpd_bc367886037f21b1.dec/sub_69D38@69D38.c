int sub_69D38()
{
  int v0; // r4
  int v1; // r12
  void *v2; // r0

  v0 = dword_10621C;
  if ( dword_10621C )
  {
    v1 = *(_DWORD *)dword_10621C;
    --dword_106208;
    v2 = (void *)dword_10621C;
    dword_10621C = v1;
    memset(v2, 0, 0x8A4u);
    *(_DWORD *)(v0 + 2208) = 1;
  }
  else
  {
    ++dword_106218;
  }
  return v0;
}
