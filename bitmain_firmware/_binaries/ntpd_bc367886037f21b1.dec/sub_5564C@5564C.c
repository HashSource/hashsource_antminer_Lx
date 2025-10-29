int __fastcall sub_5564C(int a1)
{
  double v2; // d8
  int v3; // r5
  int v4; // r4
  double *v5; // r6
  int v6; // r3
  int v7; // r0
  double v8; // r0
  double v9; // d0
  int result; // r0

  v2 = 2.0;
  v3 = **(_DWORD **)(a1 + 84);
  v4 = v3 + 2300;
  if ( *(_DWORD *)(v3 + 4328) )
    *(_DWORD *)(v3 + 52) = 1;
  *(_BYTE *)(a1 + 91) = 3;
  *(_DWORD *)(v3 + 4332) = 0;
  *(_DWORD *)(v3 + 4328) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 2128) = 8;
  *(_DWORD *)(v3 + 2116) = 127;
  v5 = (double *)&unk_99670;
  memset((void *)(v3 + 2200), 0, 0x438u);
  v6 = 127;
  while ( 1 )
  {
    *(_DWORD *)(v4 - 100) = v6;
    *(_DWORD *)(v4 - 4) = 256;
    sub_6BCB0(v4, 5, "WV%.0f", v2);
    v7 = v4 + 104;
    *(_DWORD *)(v4 + 100) = 512;
    v4 += 216;
    LODWORD(v8) = sub_6BCB0(v7, 5, "WH%.0f", 512, v2);
    if ( v4 == v3 + 3380 )
      break;
    v9 = *v5++;
    floor(v8);
    v6 = *(_DWORD *)(v3 + 2116);
    v2 = v9;
  }
  *(_DWORD *)(v3 + 3284) = 2;
  result = sub_554A4(a1);
  *(_DWORD *)(v3 + 3288) = *(_DWORD *)(v3 + 3284);
  return result;
}
