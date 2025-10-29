void __fastcall sub_30D40(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11
  __int64 v7; // d16
  __int64 v8; // d17
  _QWORD *v9; // r3
  char v10; // r1

  v9 = (_QWORD *)(a4 + 10);
  *v9 = v7;
  v9[1] = v8;
  *(_DWORD *)(v6 - 8) = 0;
  while ( *(_DWORD *)(v6 - 60) && *(int *)(v6 - 8) <= 29 )
  {
    sub_CC7AC(*(_DWORD *)(v6 - 60), *(_DWORD *)(v6 - 64));
    *(_BYTE *)(v6 - 48 + (*(_DWORD *)(v6 - 8))++) = v10 + 48;
    *(_DWORD *)(v6 - 60) = sub_CC518(*(_DWORD *)(v6 - 60), *(_DWORD *)(v6 - 64));
  }
  *(_DWORD *)(v6 - 12) = 0;
  *(_DWORD *)(v6 - 16) = *(_DWORD *)(v6 - 8) - 1;
  while ( *(_DWORD *)(v6 - 12) < *(_DWORD *)(v6 - 8) )
    *(_BYTE *)(*(_DWORD *)(v6 - 56) + (*(_DWORD *)(v6 - 12))++) = *(_BYTE *)(v6 - 48 + (*(_DWORD *)(v6 - 16))--);
  __asm { POP             {R11,PC} }
}
