int __fastcall sub_1BA38(int a1, char *a2, _DWORD *a3, char **a4)
{
  char *v7; // r0
  char *v8; // r7
  size_t v9; // r10
  _BYTE *v10; // r0
  void *v11; // r9

  if ( !a2 )
    sub_10788();
  v7 = strrchr(a2, 47);
  if ( a2 == v7 )
  {
    v8 = a2 + 1;
    v11 = sub_9820("/");
  }
  else
  {
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = v7 + 1 - a2;
      v10 = sub_96BC(0, v9, 0, 0);
      v11 = v10;
      if ( v10 )
      {
        sub_10410(v10, (unsigned __int8 *)a2, v9);
        goto LABEL_6;
      }
      return 1;
    }
    v8 = a2;
    v11 = sub_9820(".");
  }
  if ( !v11 )
    return 1;
LABEL_6:
  if ( *v8 )
  {
    *a3 = v11;
    *a4 = v8;
    return 0;
  }
  else
  {
    free(v11);
    return 30;
  }
}
