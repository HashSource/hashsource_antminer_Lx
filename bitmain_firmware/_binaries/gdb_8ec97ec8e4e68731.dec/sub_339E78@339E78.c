int __fastcall sub_339E78(int a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r5
  int v9; // r0
  int v10; // r4

  v2 = (int *)sub_339E4C();
  v3 = a1 - 32;
  v4 = *v2;
  if ( *(_BYTE *)a1 == 71
    && *(_BYTE *)(a1 + 1) == 78
    && *(_BYTE *)(a1 + 2) == 85
    && *(_BYTE *)(a1 + 3) == 67
    && *(_BYTE *)(a1 + 4) == 67
    && *(_BYTE *)(a1 + 5) == 43
    && *(_BYTE *)(a1 + 6) == 43
    && *(unsigned __int8 *)(a1 + 7) <= 1u )
  {
    v6 = *(_DWORD *)(a1 - 12);
    if ( v6 < 0 )
      v7 = 1 - v6;
    else
      v7 = v6 + 1;
    v8 = v2[1];
    *(_DWORD *)(a1 - 12) = v7;
    v2[1] = v8 - 1;
    if ( v4 != v3 )
    {
      *(_DWORD *)(a1 - 16) = v4;
      *v2 = v3;
    }
    v9 = a1;
    v10 = *(_DWORD *)(a1 + 36);
    nullsub_36(v9);
    return v10;
  }
  else
  {
    if ( v4 )
      sub_339780();
    *v2 = v3;
    return 0;
  }
}
