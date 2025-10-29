int __fastcall sub_156B38(int a1, char a2, int a3, int a4, unsigned int a5)
{
  int result; // r0
  unsigned int i; // [sp+24h] [bp+1Ch]

  if ( *(_DWORD *)(a1 + 128) || a3 )
  {
    memset((void *)(a1 + *(_DWORD *)(a1 + 128)), 0, 128 - *(_DWORD *)(a1 + 128));
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 128)) = a2 & (255 << (8 - a3));
    sub_14C4AC((unsigned __int8 *)a1, 0);
  }
  memset((void *)a1, 0, 0x80u);
  sub_156A20(a1, *(_DWORD *)(a1 + 260), *(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 128), a3);
  result = sub_14C4AC((unsigned __int8 *)a1, 1);
  for ( i = 0; i < a5; ++i )
    result = sub_140E58(a4 + 4 * i, *(_DWORD *)(4 * (i + 32) + a1 + 4));
  return result;
}
