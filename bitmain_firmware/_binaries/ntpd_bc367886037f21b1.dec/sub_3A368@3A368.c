int __fastcall sub_3A368(__int64 a1)
{
  unsigned int v1; // r6
  unsigned int v2; // r8
  int v3; // r7
  int v4; // r11
  int v5; // r9
  int v6; // r1
  int v7; // r10
  int v8; // r2
  __int64 v9; // r0
  int v10; // r10
  __int64 v11; // r0
  __int64 v12; // r0
  double *v13; // r9
  int v14; // r10
  double v15; // d0
  int (__fastcall *v16)(_DWORD, int, int); // r3

  v1 = *(unsigned __int16 *)a1;
  if ( v1 == 2 )
  {
    v2 = bswap32(*(_DWORD *)(a1 + 4));
    if ( HIWORD(v2) << 16 == 2139029504 )
    {
      v3 = HIDWORD(a1);
      LODWORD(a1) = sub_31748((unsigned __int16 *)a1, 0, 0, -1, 0, 0);
      v4 = a1;
      if ( (_DWORD)a1 )
      {
        v5 = *(_DWORD *)(a1 + 84);
        if ( v5 )
        {
          *(_BYTE *)v3 = 8;
          v6 = *(_DWORD *)(v5 + 192);
          v7 = *(_DWORD *)(v5 + 196);
          v8 = v5 + 232;
          *(_DWORD *)(v3 + 8) = *(_DWORD *)(v5 + 188);
          *(_DWORD *)(v3 + 12) = v6;
          v9 = *(_QWORD *)(v5 + 200);
          *(_DWORD *)(v3 + 16) = v7;
          v10 = *(_DWORD *)(v5 + 208);
          *(_QWORD *)(v3 + 20) = v9;
          v11 = *(_QWORD *)(v5 + 212);
          *(_WORD *)(v3 + 2) = 63;
          *(_DWORD *)(v3 + 28) = v10;
          *(_QWORD *)(v3 + 32) = v11;
          v12 = *(_QWORD *)(v5 + 224);
          *(_DWORD *)(v3 + 4) = -4;
          *(_QWORD *)(v3 + 72) = v12;
          a1 = *(_QWORD *)(v5 + 232);
          *(_QWORD *)(v3 + 80) = a1;
          if ( *(unsigned __int8 *)(v3 + 1) > 2u )
          {
            v13 = (double *)(v5 + 264);
            v14 = v3;
            do
            {
              v15 = *v13++;
              LODWORD(a1) = 32;
              ldexp(*(double *)&a1, v8);
              if ( v15 >= 0.0 )
                a1 = sub_8BBA8(LODWORD(v15), HIDWORD(v15));
              else
                a1 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v15), HIDWORD(COERCE_UNSIGNED_INT64(-v15)));
              *(_DWORD *)(v14 + 92) = a1;
              ++v1;
              *(_DWORD *)(v14 + 88) = HIDWORD(a1);
              v14 += 8;
            }
            while ( *(unsigned __int8 *)(v3 + 1) > v1 );
          }
          v16 = (int (__fastcall *)(_DWORD, int, int))*((_DWORD *)*(&refclock_conf + BYTE1(v2)) + 5);
          if ( v16 )
            LODWORD(a1) = v16((unsigned __int8)v2, v3, v4);
        }
      }
    }
  }
  return a1;
}
