int __fastcall sub_DC464(int a1, char a2, int a3, _DWORD *a4, _DWORD *a5, signed int a6)
{
  size_t v6; // r3
  int v12; // [sp+24h] [bp+14h] BYREF
  _DWORD v13[2]; // [sp+28h] [bp+18h] BYREF
  int v14; // [sp+30h] [bp+20h]
  int v15; // [sp+34h] [bp+24h]
  void *ptr; // [sp+38h] [bp+28h]
  size_t nmemb; // [sp+3Ch] [bp+2Ch]
  signed int j; // [sp+40h] [bp+30h]
  int i; // [sp+44h] [bp+34h]

  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v6 = a6;
  if ( a6 >= *(_DWORD *)(a1 + 196) )
    v6 = *(_DWORD *)(a1 + 196);
  nmemb = v6;
  ptr = calloc(v6, 0xCu);
  LOBYTE(v14) = a2;
  BYTE1(v14) = a3;
  HIWORD(v14) = 28;
  (*(void (__fastcall **)(int, _DWORD *, size_t, void *, int *))(a1 + 176))(a1, v13, nmemb, ptr, &v12);
  if ( a2 )
  {
    for ( i = 0; i < v12; ++i )
    {
      for ( j = 0; j < (int)nmemb; ++j )
      {
        if ( *((unsigned __int8 *)ptr + 12 * i + 4) == *(unsigned __int8 *)(j + *(_DWORD *)(a1 + 296)) )
        {
          a4[j] = *((_DWORD *)ptr + 3 * i);
          a5[j] = 1;
          break;
        }
      }
    }
  }
  else if ( v12 == 1 && *((unsigned __int8 *)ptr + 4) == a3 )
  {
    *a4 = *(_DWORD *)ptr;
    *a5 = 1;
  }
  free(ptr);
  return v12;
}
