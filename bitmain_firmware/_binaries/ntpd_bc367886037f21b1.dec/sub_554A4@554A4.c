int __fastcall sub_554A4(int a1)
{
  double v1; // d16
  int v2; // r2
  int *v3; // r7
  __int64 v5; // r0
  int v6; // r4
  int v7; // r3
  double v8; // d17
  bool v9; // nf
  int v10; // lr
  int v11; // r7
  int v13; // r2
  __int64 v14; // r2
  __int64 v15; // r0
  bool v16; // zf

  v1 = 0.0;
  v2 = 0;
  v3 = *(int **)(a1 + 84);
  v5 = 0;
  v6 = *v3;
  v7 = *v3 + 2208;
  do
  {
    v8 = *(double *)(v7 + 176);
    v9 = v8 < v1;
    if ( v8 < v1 )
      v8 = v1;
    v1 = *(double *)(v7 + 72);
    if ( !v9 )
    {
      LODWORD(v5) = v7 + 104;
      HIDWORD(v5) = v2;
    }
    if ( v8 <= v1 )
      HIDWORD(v5) = v2;
    ++v2;
    if ( v8 > v1 )
      v1 = v8;
    else
      LODWORD(v5) = v7;
    v7 += 216;
  }
  while ( v2 != 5 );
  v10 = *(_DWORD *)(v6 + 4328);
  *(_DWORD *)(v6 + 4328) = v10 & 0xFFFFFCFF;
  if ( v1 >= 13.0 )
  {
    *(_QWORD *)(v6 + 3280) = v5;
    v13 = *(_DWORD *)(v5 + 92);
    v3[191] = v13;
    HIDWORD(v5) = *(_DWORD *)(v5 + 88);
    HIDWORD(v14) = *(_DWORD *)(v6 + 4328);
    *(_DWORD *)(a1 + 112) = v13;
    LODWORD(v14) = HIDWORD(v14) | 0x80;
    *(_DWORD *)(v6 + 4328) = HIDWORD(v14) | 0x80;
    if ( (v5 & 0x10000000000LL) != 0 )
    {
      v15 = *((_QWORD *)v3 + 93);
      v11 = 1;
      *(_DWORD *)(v6 + 4328) = HIDWORD(v14) | 0x180;
      *(_QWORD *)(v6 + 40) = v15;
    }
    else
    {
      v16 = (v5 & 0x20000000000LL) == 0;
      if ( (v5 & 0x20000000000LL) != 0 )
      {
        HIDWORD(v14) |= 0x280u;
        v5 = *((_QWORD *)v3 + 94);
      }
      else
      {
        LODWORD(v14) = 0;
      }
      if ( v16 )
        HIDWORD(v14) = 0;
      else
        *(_DWORD *)(v6 + 4328) = HIDWORD(v14);
      v11 = 1;
      if ( v16 )
        *(_QWORD *)(v6 + 40) = v14;
      else
        *(_QWORD *)(v6 + 40) = v5;
    }
  }
  else
  {
    v11 = v10 & 0x80;
    *(_DWORD *)(v6 + 3284) = (*(_DWORD *)(v6 + 3284) + 1) % 5;
    if ( (v10 & 0x80) != 0 )
    {
      *(_DWORD *)(v6 + 4328) = v10 & 0xFFFFFC7F;
      sub_3918C((__int16 *)a1, 4);
      v11 = 0;
    }
  }
  if ( *(int *)(v6 + 48) > 0 )
    sub_55404(*(_DWORD *)(a1 + 76), *(int **)(a1 + 84), *(_DWORD *)(v6 + 3284));
  return v11;
}
