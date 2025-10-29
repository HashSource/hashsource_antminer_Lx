int __fastcall sub_16364(_DWORD *a1, const char *a2, int a3, int a4, int *a5, int a6)
{
  _BOOL4 v10; // r2
  char *v11; // r4
  int result; // r0
  void *v13; // r0
  int v14; // r3
  int v15; // r3
  void *v16; // r0
  int v17; // r1

  if ( !a1 || *a1 != 1281582695 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  if ( (unsigned int)(a3 - 1) > 3 )
    sub_10788();
  v10 = a3 == 1;
  if ( a5 )
    v10 = 1;
  if ( !v10 )
    sub_10788();
  if ( a4 < -5 )
    sub_10788();
  if ( (a6 & 0xFFFFEFE0) != 0 )
    sub_10788();
  v11 = (char *)sub_96BC(0, 0x38u, 0, 0);
  if ( !v11 )
    return 1;
  v13 = sub_9820(a2);
  *(_DWORD *)v11 = v13;
  if ( v13 )
  {
    *((_DWORD *)v11 + 1) = a3;
    *((_DWORD *)v11 + 2) = a4;
    *((_DWORD *)v11 + 3) = a6;
    *((_DWORD *)v11 + 12) = -1;
    *((_DWORD *)v11 + 13) = -1;
    switch ( a3 )
    {
      case 3:
        v16 = sub_9820((const char *)a5[1]);
        v17 = a5[2];
        *((_QWORD *)v11 + 4) = *((_QWORD *)a5 + 2);
        *((_DWORD *)v11 + 6) = v17;
        *((_DWORD *)v11 + 4) = 0;
        *((_DWORD *)v11 + 10) = 0;
        *((_DWORD *)v11 + 5) = v16;
        break;
      case 4:
        v15 = *a5;
        *(_QWORD *)(v11 + 20) = 0xFFFFFFFE00000000LL;
        *((_DWORD *)v11 + 4) = v15;
        *((_QWORD *)v11 + 4) = 0;
        break;
      case 2:
        *((_DWORD *)v11 + 4) = *a5;
        break;
    }
    v14 = a1[2];
    if ( v14 )
      *(_DWORD *)(v14 + 48) = v11;
    else
      a1[3] = v11;
    *((_DWORD *)v11 + 13) = v14;
    *((_DWORD *)v11 + 12) = 0;
    a1[2] = v11;
    result = strcmp(a2, "default_stderr");
    if ( result )
      return 0;
    else
      dword_33378 = (int)v11;
  }
  else
  {
    free(v11);
    return 1;
  }
  return result;
}
