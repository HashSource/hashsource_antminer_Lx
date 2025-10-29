int __fastcall sub_2B1B0(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d8
  unsigned __int64 v5; // r0
  int result; // r0
  double v7; // d7
  double v8; // d7
  double v9; // r0
  double v10; // d8
  double v11; // r0
  double v12; // d8
  double v13; // r0
  double v14; // d8
  double v15; // r0
  double v16; // d7

  v3 = *(_DWORD *)(a1 + 260);
  if ( v1 == 0.0 )
  {
    LODWORD(v9) = sub_4A10C(*(_QWORD *)(a1 + 184));
    v10 = v9 * 6.27710174e57;
    LODWORD(v11) = sub_4A10C(*(_QWORD *)(a1 + 176));
    v12 = v10 + v11 * 3.40282367e38;
    LODWORD(v13) = sub_4A10C(*(_QWORD *)(a1 + 168));
    v14 = v12 + v13 * 1.84467441e19;
    LODWORD(v15) = sub_4A10C(*(_QWORD *)(a1 + 160));
    v16 = v15 + v14;
    if ( v15 + v14 == 0.0 )
    {
      v4 = 2.69595353e67;
      v5 = -1;
    }
    else
    {
      v4 = 2.69595353e67 / v16;
      round();
      v5 = (unsigned __int64)(2.69595353e67 / v16);
    }
    *(double *)(a1 + 376) = v4;
  }
  else
  {
    *(double *)(a1 + 376) = v1;
    v4 = v1;
    round();
    v5 = (unsigned __int64)v1;
  }
  *(double *)(v3 + 480) = v4;
  result = sub_2AEF8(v5, (char *)(*(_DWORD *)(a1 + 260) + 48), 8u, 0);
  v7 = *(double *)(v3 + 464);
  if ( v7 == v4 )
  {
    ++*(_DWORD *)(v3 + 488);
    goto LABEL_5;
  }
  if ( v7 <= v4 )
  {
    if ( v7 != 0.0 )
    {
LABEL_5:
      v8 = *(double *)(v3 + 472);
      if ( v8 != v4 )
        goto LABEL_6;
LABEL_15:
      ++*(_DWORD *)(v3 + 492);
      return result;
    }
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  else
  {
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  v8 = *(double *)(v3 + 472);
  if ( v8 == v4 )
    goto LABEL_15;
LABEL_6:
  if ( v8 < v4 )
  {
    *(double *)(v3 + 472) = v4;
    *(_DWORD *)(v3 + 492) = 1;
  }
  return result;
}
