unsigned int __fastcall sub_1990F0(int a1, char a2, int a3, int a4, unsigned int a5)
{
  unsigned int result; // r0
  unsigned int v8; // [sp+14h] [bp+14h]
  unsigned int v9; // [sp+18h] [bp+18h]
  unsigned int v10; // [sp+1Ch] [bp+1Ch]
  unsigned int i; // [sp+24h] [bp+24h]

  v10 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 100) += a3 + 8 * v10;
  v9 = *(_DWORD *)(a1 + 100);
  v8 = *(_DWORD *)(a1 + 104);
  if ( v10 || a3 )
  {
    *(_BYTE *)(v10 + a1) = (128 >> a3) | -(128 >> a3) & a2;
    if ( v10 > 0x35 )
    {
      memset((void *)(a1 + v10 + 1), 0, 63 - v10);
      sub_189268((_DWORD *)a1, a1);
      memset((void *)a1, 0, 0x36u);
      *(_DWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 104);
    }
    else
    {
      memset((void *)(a1 + v10 + 1), 0, 53 - v10);
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x35u);
    *(_DWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 104);
  }
  sub_18920C(a1 + 54, v9);
  sub_18920C(a1 + 58, v8);
  *(_WORD *)(a1 + 62) = __PAIR16__((32 * a5) >> 24, 32 * a5);
  result = sub_189268((_DWORD *)a1, a1);
  for ( i = 0; i < a5; ++i )
    result = sub_18920C(a4 + 4 * i, *(_DWORD *)(4 * (i + 16) + a1 + 4));
  return result;
}
