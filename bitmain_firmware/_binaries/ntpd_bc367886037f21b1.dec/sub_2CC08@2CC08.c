int __fastcall sub_2CC08(__int64 a1, int a2)
{
  int v2; // r6
  int v4; // r8
  int v5; // r5
  int v6; // r4
  int v7; // r3
  int v8; // r2

  v2 = HIDWORD(a1);
  v4 = a1;
  if ( !*(_WORD *)(HIDWORD(a1) + 32) )
  {
    *(_QWORD *)a1 = 0;
    *(_WORD *)(a1 + 16) = *(_WORD *)(HIDWORD(a1) + 34);
    goto LABEL_10;
  }
  v5 = HIDWORD(a1) + 80;
  v6 = 0;
  do
  {
    LODWORD(a1) = sub_6D738(a2, v5);
    if ( (int)a1 >= 0 )
    {
      v7 = v6 - 1;
      if ( *(unsigned __int16 *)(v2 + 32) <= v6 )
        goto LABEL_9;
      v8 = v2 + 16 * v6;
      a1 = *(_QWORD *)(v8 + 80);
      LOWORD(v8) = *(_WORD *)(v8 + 92);
      *(_QWORD *)v4 = a1;
      *(_WORD *)(v4 + 16) = v8;
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_7;
    }
    ++v6;
    v5 += 16;
  }
  while ( *(unsigned __int16 *)(v2 + 32) != v6 );
  v7 = v6 - 1;
LABEL_9:
  *(_QWORD *)v4 = 0;
  *(_WORD *)(v4 + 16) = *(_WORD *)(v2 + 34);
  if ( v7 != -1 )
  {
LABEL_7:
    *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 16 * v7 + 80);
    return a1;
  }
LABEL_10:
  *(_QWORD *)(v4 + 8) = -1;
  return a1;
}
