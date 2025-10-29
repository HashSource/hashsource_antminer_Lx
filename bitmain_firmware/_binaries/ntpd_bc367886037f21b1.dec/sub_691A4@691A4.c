int __fastcall sub_691A4(int a1)
{
  int v2; // r0
  void *v3; // r4
  int v4; // r2

  while ( 1 )
  {
    v2 = sub_6E4A0(a1);
    v3 = (void *)v2;
    if ( !v2 )
      return 0;
    v4 = *(_DWORD *)(v2 + 8);
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        sub_64A18(3, "unknown req %d to blocking worker", v4);
        free(v3);
        return 0;
      }
      if ( sub_67DF4(a1, v2) )
        goto LABEL_5;
    }
    else if ( sub_6834C(a1, v2) )
    {
LABEL_5:
      free(v3);
      return 0;
    }
    free(v3);
  }
}
