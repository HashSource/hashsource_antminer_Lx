int __fastcall sub_7D860(int a1, void ***a2)
{
  void **v4; // r4
  unsigned int v5; // r3
  void (__fastcall *v6)(int, int); // r5
  int v7; // r0
  void **v8; // lr
  int v10; // r2
  int v11; // r1
  bool v12; // zf
  int v13; // r3
  int v14; // r2
  void **v15; // r12
  unsigned __int16 v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r1
  unsigned int v19; // r3
  int v20; // r12
  unsigned __int16 v21; // lr

  v4 = *a2;
  v5 = (unsigned int)(*a2)[4];
  v6 = (void (__fastcall *)(int, int))(*a2)[10];
  if ( (v5 & 0x40) != 0 )
  {
    free(v4[6]);
    v5 = (unsigned int)v4[4];
  }
  v7 = *(_DWORD *)(a1 + 12);
  v8 = a2[1];
  v4[6] = v8;
  if ( (v7 & 0x80000) != 0 && (v5 & 0x100) != 0 )
    return 1;
  v10 = *((unsigned __int16 *)v4 + 4);
  v11 = *(unsigned __int16 *)v4;
  if ( v10 == 0x8000 )
  {
    v21 = *((_WORD *)v4 + 1);
    v14 = (int)v4;
    v15 = a2[2];
    *((_WORD *)v4 + 2) = v11;
    *((_WORD *)v4 + 3) = v21;
  }
  else
  {
    v12 = (v5 & 4) == 0;
    v13 = *(_DWORD *)(a1 + 68);
    v14 = v13 + (v10 << 6);
    if ( v12 )
    {
      *(_WORD *)(v14 + 4) = 0x8000;
      v15 = a2[2];
      if ( v11 != 0x8000 )
      {
        v16 = *((_WORD *)v4 + 1);
        v15 = (void **)((unsigned int)v15 | 0x10);
        *(_WORD *)(v14 + 4) = v11;
        *(_WORD *)(v14 + 6) = v16;
        a2[2] = v15;
      }
    }
    else
    {
      v20 = *(unsigned __int16 *)(v14 + 4);
      if ( v20 != v11 )
      {
        fprintf(stderr, off_B74E4[0], *(_DWORD *)(v14 + 52), v4[13], *(_DWORD *)(v13 + (v20 << 6) + 52));
        return -1;
      }
      v15 = a2[2];
    }
    v5 = *(_DWORD *)(v14 + 16);
    *(_DWORD *)(v14 + 24) = v8;
  }
  v17 = v5 & 0xFFFFF00 | (unsigned int)v15 & 0xF00000FF;
  *(_DWORD *)(v14 + 16) = v17;
  if ( (v17 & 4) != 0
    && (v18 = *(unsigned __int16 *)(v14 + 12),
        v19 = (unsigned __int16)(*(_WORD *)(v14 + 14) + 1),
        *(_WORD *)(v14 + 14) = v19,
        v18 < v19) )
  {
    if ( (v7 & 4) != 0 )
      sub_7D77C(a1, v14);
    return -1;
  }
  else
  {
    if ( v6 )
      v6(a1, v14);
    return 0;
  }
}
