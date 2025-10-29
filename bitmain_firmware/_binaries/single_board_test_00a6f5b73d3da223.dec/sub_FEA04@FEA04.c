_DWORD *__fastcall sub_FEA04(_DWORD *a1, int a2, unsigned int a3)
{
  const void *v7[5]; // [sp+1Ch] [bp+14h] BYREF
  char *v8; // [sp+30h] [bp+28h]
  int v9; // [sp+34h] [bp+2Ch]
  unsigned int v10; // [sp+38h] [bp+30h]
  unsigned int v11; // [sp+3Ch] [bp+34h]

  sub_FE590((_DWORD *)a2);
  v11 = *(_DWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a2 + 4);
  v9 = sub_FE384(a2);
  if ( a3 >= v11 )
    a3 = v11;
  if ( a3 > v10 )
  {
    v8 = (char *)malloc(v9 + a3);
    sub_FE3B4(v7, (_DWORD *)a2);
    *(_DWORD *)(a2 + 24) = sub_FE994(v7[0], (int)v7[1], v7[2], (unsigned int)v7[3], (int)v7[4], v8);
    free(*(void **)(a2 + 12));
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 16) = &v8[v9 + a3];
    sub_FE590((_DWORD *)a2);
    sub_FE3B4(a1, (_DWORD *)a2);
  }
  else
  {
    sub_FE3B4(a1, (_DWORD *)a2);
  }
  return a1;
}
