int __fastcall sub_2C88C(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r3
  int v7; // r2
  _QWORD *v8; // r6
  __int64 v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r2
  int v13; // r1
  bool v14; // zf
  __int64 v15; // r0
  int result; // r0
  __int64 v17; // r2
  __int16 v18; // r1
  __int64 v19; // [sp+0h] [bp-10h] BYREF

  if ( *(_WORD *)(a1 + 32) )
  {
    v4 = a1 + 80;
    v5 = 0;
    while ( sub_6D738(a2, v4) < 0 )
    {
      ++v5;
      v4 += 16;
      if ( *(unsigned __int16 *)(a1 + 32) == v5 )
      {
        v6 = v5 - 1;
        goto LABEL_11;
      }
    }
    v6 = v5 - 1;
    if ( *(unsigned __int16 *)(a1 + 32) > v5 )
    {
      v7 = a1 + 16 * v5;
      v8 = (_QWORD *)(a1 + 48);
      v9 = *(_QWORD *)(v7 + 80);
      LOWORD(v7) = *(_WORD *)(v7 + 92);
      *(_QWORD *)(a1 + 64) = v9;
      *(_WORD *)(a1 + 36) = v7;
      if ( !v5 )
        goto LABEL_12;
      goto LABEL_7;
    }
LABEL_11:
    v8 = (_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 64) = 0;
    *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 34);
    if ( v6 == -1 )
      goto LABEL_12;
LABEL_7:
    v10 = 16 * v6;
    v11 = a1 + 16 * v6;
    v12 = *(__int16 *)(v11 + 92);
    v13 = dword_B8930;
    *(_WORD *)(a1 + 38) = v12;
    v14 = v13 == 0;
    *(_BYTE *)(a1 + 72) = *(_BYTE *)(v11 + 94);
    v15 = *(_QWORD *)(v11 + 80);
    *(_QWORD *)(a1 + 48) = v15;
    if ( v14 )
    {
      sub_6D854(&v19, v8, v12 - *(__int16 *)(a1 + 36));
      *(_QWORD *)(a1 + 40) = v19;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v15;
    }
    result = sub_6D968(&v19, v8, *(_DWORD *)(a1 + v10 + 88));
    *(_QWORD *)(a1 + 56) = v19;
  }
  else
  {
    v8 = (_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 64) = 0;
    *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 34);
LABEL_12:
    *v8 = -1;
    v17 = *(_QWORD *)(a1 + 48);
    v18 = *(_WORD *)(a1 + 36);
    *(_BYTE *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 56) = v17;
    *(_QWORD *)(a1 + 40) = v17;
    *(_WORD *)(a1 + 38) = v18;
    return 0;
  }
  return result;
}
