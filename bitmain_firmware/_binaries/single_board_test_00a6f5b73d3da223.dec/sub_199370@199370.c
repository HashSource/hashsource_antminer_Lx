int __fastcall sub_199370(int a1, char a2, int a3, int a4, unsigned int a5)
{
  int result; // r0
  unsigned int v8; // [sp+14h] [bp+14h]
  unsigned int v9; // [sp+18h] [bp+18h]
  unsigned int v10; // [sp+1Ch] [bp+1Ch]
  unsigned int v11; // [sp+20h] [bp+20h]
  unsigned int v12; // [sp+24h] [bp+24h]
  unsigned int i; // [sp+2Ch] [bp+2Ch]

  v12 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 196) += a3 + 8 * v12;
  v11 = *(_DWORD *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 200);
  v9 = *(_DWORD *)(a1 + 204);
  v8 = *(_DWORD *)(a1 + 208);
  if ( v12 || a3 )
  {
    *(_BYTE *)(v12 + a1) = (128 >> a3) | -(128 >> a3) & a2;
    if ( v12 > 0x6D )
    {
      memset((void *)(a1 + v12 + 1), 0, 127 - v12);
      sub_18FC14((_DWORD *)a1, a1);
      memset((void *)a1, 0, 0x6Eu);
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 204) = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 200);
    }
    else
    {
      memset((void *)(a1 + v12 + 1), 0, 109 - v12);
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x6Du);
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 204) = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 200);
  }
  sub_18920C(a1 + 110, v11);
  sub_18920C(a1 + 114, v10);
  sub_18920C(a1 + 118, v9);
  sub_18920C(a1 + 122, v8);
  *(_WORD *)(a1 + 126) = __PAIR16__((32 * a5) >> 24, 32 * a5);
  result = sub_18FC14((_DWORD *)a1, a1);
  for ( i = 0; i < a5; ++i )
    result = sub_18920C(a4 + 4 * i, *(_DWORD *)(4 * (i + 32) + a1 + 4));
  return result;
}
