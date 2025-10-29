__int64 *__fastcall sub_2D4D4(int a1, int a2, time_t *a3)
{
  __int64 *v4; // r8
  unsigned int v5; // r7
  _QWORD *v6; // r0
  _QWORD *v7; // r10
  int v8; // r4
  __int64 v9; // r10
  __int64 v10; // r2
  unsigned int v11; // r3
  _BOOL4 v12; // r1
  _BOOL4 v13; // r0
  int v14; // r2
  _BOOL4 v15; // r7
  int v16; // r7
  char v17; // r3
  int v19; // r12
  __int16 v20; // r2
  int v21; // r0
  __int64 v22; // r2
  __int64 v23; // [sp+0h] [bp-2Ch] BYREF
  __int64 v24; // [sp+8h] [bp-24h] BYREF
  __int64 v25; // [sp+10h] [bp-1Ch] BYREF
  __int64 v26; // [sp+18h] [bp-14h] BYREF

  v4 = &v23;
  v5 = a2;
  sub_654FC((int)&v23, a2, a3);
  v24 = v23;
  v6 = sub_2CDF0(0);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = v6 + 8;
  v8 = (int)v6;
  if ( sub_6D738(&v24, v6 + 8) < 0 )
    goto LABEL_20;
  if ( sub_6D738(&v24, v8 + 40) < 0 )
  {
    v4 = 0;
    goto LABEL_5;
  }
  sub_6D854(&v23, v8 + 40, 3);
  v25 = v23;
  if ( sub_6D738(&v24, &v25) < 0 )
  {
    v19 = *(_DWORD *)(v8 + 52);
    v20 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 40);
    LODWORD(v25) = *(_DWORD *)(v8 + 48);
    *(_WORD *)(a1 + 24) = v20;
    HIDWORD(v25) = v19;
    sub_6D854(&v23, &v24, v20);
    v26 = v23;
    sub_2C88C(v8, (int)&v26);
    v21 = sub_6D738(v7, &v25);
    if ( v21 )
      v4 = 0;
    else
      v22 = v26;
    if ( v21 )
    {
      *(_WORD *)(a1 + 24) = (_WORD)v4;
    }
    else
    {
      v4 = (_QWORD *)(&dword_0 + 1);
      v5 = v26;
    }
    if ( !v21 )
      v24 = v22;
  }
  else
  {
LABEL_20:
    sub_2C88C(v8, (int)&v24);
    v4 = 0;
  }
LABEL_5:
  v9 = *(_QWORD *)(v8 + 64);
  v10 = *(_QWORD *)(v8 + 48);
  *(_WORD *)(a1 + 20) = *(_WORD *)(v8 + 36);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  if ( sub_6D738(&v24, v8 + 56) >= 0 )
  {
    v11 = *(_DWORD *)(v8 + 40);
    *(_WORD *)(a1 + 22) = *(_WORD *)(v8 + 38) - *(_WORD *)(v8 + 36);
    v12 = v11 - 86400 <= v5;
    *(_DWORD *)(a1 + 16) = v11 - v5;
    v13 = v5 < v11;
    if ( v11 - 86400 > v11 )
      v14 = v12 || v13;
    else
      v14 = v12 && v13;
    *(_BYTE *)(a1 + 27) = *(_BYTE *)(v8 + 72);
    if ( v14 )
    {
      v15 = v11 - 10 <= v5;
      if ( v11 - 10 > v11 )
        v16 = v13 || v15;
      else
        v16 = v15 && v13;
      if ( v16 )
        v17 = 3;
      else
        v17 = 2;
      *(_BYTE *)(a1 + 26) = v17;
    }
    else
    {
      *(_BYTE *)(a1 + 26) = 1;
    }
  }
  return v4;
}
