const char *__fastcall sub_2C4BC(int a1, const char *a2, int a3)
{
  int v5; // r0
  int v6; // r4
  bool v7; // zf
  const char *result; // r0
  const char **v9; // r3
  int *v10; // r4
  int v11; // r0
  const char *v12; // r0
  const char **v13; // r5
  int v14; // r3

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = sub_63948(a1);
  v5 = sub_63948(a2);
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_WORD *)(a3 + 20) = 258;
  v6 = dword_B8928;
  v7 = dword_B8928 == 0;
  *(_DWORD *)(a3 + 8) = v5;
  if ( v7 )
  {
    v10 = &dword_B8928;
LABEL_9:
    v11 = sub_637E4(0, 12, 0, 0);
    *v10 = v11;
    *(_DWORD *)(v11 + 8) = 0;
    v12 = a2;
    v13 = (const char **)*v10;
    result = (const char *)sub_63948(v12);
    v14 = *v10;
    *v13 = result;
    *(_DWORD *)(v14 + 4) = a3;
  }
  else
  {
    result = *(const char **)v6;
    if ( a2 != *(const char **)v6 )
    {
      do
      {
        result = (const char *)strcmp(result, a2);
        if ( !result )
          break;
        v9 = *(const char ***)(v6 + 8);
        if ( !v9 )
        {
          v10 = (int *)(v6 + 8);
          goto LABEL_9;
        }
        result = *v9;
        v6 = *(_DWORD *)(v6 + 8);
      }
      while ( *v9 != a2 );
    }
    *(_DWORD *)(v6 + 4) = a3;
  }
  return result;
}
