int __fastcall sub_6E894(void **a1, char *a2, void **a3)
{
  bool v4; // zf
  _BOOL4 v5; // r3
  int v6; // r2
  int result; // r0
  char *v8; // r3
  char *v9; // r3

  if ( !a3 )
    return -1;
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 )
    goto LABEL_9;
  v5 = a3 == a1;
  if ( *a1 )
    v5 = 1;
  if ( v5 || (v6 = (int)a1[7], a1[7] = (void *)(v6 + 1), (result = sub_6B928((int)(a1 + 2), a2, v6, (int)a3)) != 0) )
  {
LABEL_9:
    v8 = (char *)a3[1];
    if ( v8 != (char *)-1 )
    {
      v9 = v8 - 1;
      a3[1] = v9;
      if ( !v9 )
        sub_6E5DC(a3);
    }
    return -1;
  }
  return result;
}
