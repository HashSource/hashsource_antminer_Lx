int __fastcall hashtable_get(int a1, char *s)
{
  size_t v4; // r0
  int *v5; // r3
  int v6; // r0
  int result; // r0

  v4 = strlen(s);
  LOWORD(v5) = 23924;
  HIWORD(v5) = (unsigned int)&unk_164D64 >> 16;
  v6 = sub_3485C((unsigned __int16 *)s, v4, *v5);
  result = sub_34DA0(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (v6 & ~(-1 << *(_DWORD *)(a1 + 8)))), s, v6);
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
