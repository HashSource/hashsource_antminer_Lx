int __fastcall sub_7D094(int a1, char a2, int a3, _DWORD *a4, _DWORD *a5, signed int a6)
{
  signed int v6; // r3
  int v12; // [sp+24h] [bp-30h] BYREF
  __int64 v13; // [sp+28h] [bp-2Ch] BYREF
  __int64 v14; // [sp+30h] [bp-24h]
  void *ptr; // [sp+38h] [bp-1Ch]
  size_t nmemb; // [sp+3Ch] [bp-18h]
  signed int j; // [sp+40h] [bp-14h]
  int i; // [sp+44h] [bp-10h]

  v13 = 0;
  v14 = 0;
  v6 = *(_DWORD *)(a1 + 336);
  if ( a6 < v6 )
    v6 = a6;
  nmemb = v6;
  ptr = calloc(v6, 0xCu);
  LOBYTE(v14) = a2;
  BYTE1(v14) = a3;
  WORD1(v14) = 255;
  (*(void (__fastcall **)(int, __int64 *, size_t, void *, int *))(a1 + 288))(a1, &v13, nmemb, ptr, &v12);
  if ( a2 )
  {
    for ( i = 0; i < v12; ++i )
    {
      for ( j = 0; j < (int)nmemb; ++j )
      {
        if ( *((unsigned __int8 *)ptr + 12 * i + 4) == *(unsigned __int8 *)(*(_DWORD *)(a1 + 492) + j) )
        {
          a4[j] = *((_DWORD *)ptr + 3 * i);
          a5[j] = 1;
          break;
        }
      }
    }
  }
  else if ( v12 == 1 && a3 == *((unsigned __int8 *)ptr + 4) )
  {
    *a4 = *(_DWORD *)ptr;
    *a5 = 1;
  }
  free(ptr);
  return v12;
}
