int __fastcall sub_5884C(int a1, int a2, int a3, size_t a4)
{
  int v9; // [sp+28h] [bp+18h]
  _DWORD *ptr; // [sp+2Ch] [bp+1Ch]
  _DWORD *s; // [sp+30h] [bp+20h]
  int i; // [sp+34h] [bp+24h]

  s = malloc(4 * a4);
  ptr = malloc(4 * a4);
  v9 = sub_587D8(a1, 1, 0, 0, s, ptr, a4);
  for ( i = 0; i < v9; ++i )
  {
    *(_DWORD *)(4 * i + a2) = HIBYTE(s[i]) - 64;
    *(_DWORD *)(4 * i + a3) = ptr[i];
  }
  free(ptr);
  free(s);
  return v9;
}
