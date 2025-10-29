int __fastcall sub_3BBD8(int a1, unsigned __int8 a2, signed int a3, int a4)
{
  int v9; // [sp+20h] [bp+10h] BYREF
  _WORD s[8]; // [sp+24h] [bp+14h] BYREF
  void *ptr; // [sp+34h] [bp+24h]
  signed int j; // [sp+38h] [bp+28h]
  int i; // [sp+3Ch] [bp+2Ch]

  ptr = calloc(a3, 0xCu);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  s[5] = a2;
  memset(ptr, 0, 12 * a3);
  (*(void (__fastcall **)(int, _WORD *, signed int, void *, int *))(a1 + 176))(a1, s, a3, ptr, &v9);
  for ( i = 0; i < v9; ++i )
  {
    for ( j = 0; j < a3; ++j )
    {
      if ( *((unsigned __int8 *)ptr + 12 * i + 4) == *(unsigned __int8 *)(j + *(_DWORD *)(a1 + 296)) && a4 )
      {
        *(_BYTE *)(a4 + 8 * i) = *((_BYTE *)ptr + 12 * i + 4);
        *(_BYTE *)(a4 + 8 * i + 1) = *((_WORD *)ptr + 6 * i + 3);
        *(_DWORD *)(a4 + 8 * i + 4) = *((_DWORD *)ptr + 3 * i);
        break;
      }
    }
  }
  free(ptr);
  return v9;
}
