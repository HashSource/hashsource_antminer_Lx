int __fastcall sub_48864(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r0
  int *v6; // r5
  int v7; // r4
  double *v8; // r1
  double v9; // d17
  double *v10; // r2
  int v11; // r3
  double v12; // d16
  __int64 v13; // r2

  v3 = sub_606FC("/dev/audio", 320, a1);
  if ( v3 < 0 )
    return 0;
  v5 = sub_637E4(0, 3232, 0, 1);
  v6 = *(int **)(a2 + 84);
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = (int)sub_49328;
  v6[6] = 0;
  v7 = v5;
  v4 = sub_18BA4(v6 + 2);
  if ( v4 )
  {
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -17;
    v6[191] = *(_DWORD *)"IRIG";
    v6[11] = (int)"Generic IRIG Audio Driver";
    *(_DWORD *)(v7 + 3180) = 2;
    *(_DWORD *)(v7 + 3160) = 1;
    *(_DWORD *)(v7 + 2836) = 127;
    *(_QWORD *)(v7 + 1800) = 0;
    *(_DWORD *)(v7 + 776) = 0;
    *(_DWORD *)(v7 + 780) = 0;
    *(_DWORD *)(v7 + 784) = 0;
    *(_DWORD *)(v7 + 788) = 1072693248;
    *(double *)(v7 + 1808) = -1.0;
    v8 = (double *)(v7 + 1832);
    *(_DWORD *)(v7 + 792) = 0;
    *(_DWORD *)(v7 + 796) = 1074266112;
    v9 = 2.0;
    *(_QWORD *)(v7 + 1816) = 0xC008000000000000LL;
    *(_DWORD *)(v7 + 800) = 0;
    v10 = (double *)(v7 + 800);
    *(_DWORD *)(v7 + 804) = 1075052544;
    *(_QWORD *)(v7 + 1824) = 0xC014000000000000LL;
    v11 = 3;
    while ( ++v11 != 128 )
    {
      v12 = *v10 + v9;
      if ( (v11 & 0xF) == 0 )
        v9 = v9 + v9;
      v10[1] = v12;
      ++v10;
      *v8++ = -v12;
    }
    v4 = 1;
    HIDWORD(v13) = (char *)&loc_83124 + 2;
    LODWORD(v13) = 0;
    *(_QWORD *)(v7 + 32) = v13;
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free((void *)v7);
  }
  return v4;
}
