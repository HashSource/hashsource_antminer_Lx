char __cdecl strbuffer_pop(strbuffer_t *strbuff)
{
  int v1; // r2
  char v4; // [sp+Fh] [bp+Fh]

  if ( !*((_DWORD *)strbuff + 1) )
    return 0;
  v1 = *(_DWORD *)strbuff;
  v4 = *(_BYTE *)(--*((_DWORD *)strbuff + 1) + v1);
  *(_BYTE *)(*((_DWORD *)strbuff + 1) + *(_DWORD *)strbuff) = 0;
  return v4;
}
