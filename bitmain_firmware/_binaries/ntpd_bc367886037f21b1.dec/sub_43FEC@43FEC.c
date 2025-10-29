void __fastcall sub_43FEC(int a1, int a2)
{
  int **v2; // r5
  int *v3; // r4
  int v5; // r0
  int v6; // r3
  int *v7; // r1
  int *v8; // r3
  int v9; // r2
  bool v10; // zf
  const char *v11; // r2

  v2 = *(int ***)(a2 + 84);
  v3 = *v2;
  if ( !*v2 )
    return;
  if ( v3[2] != a2 )
  {
    if ( v2[7] == (int *)-1 )
    {
      v5 = v3[34];
      if ( v5 == -1 )
        goto LABEL_5;
    }
    else
    {
      sub_18C18((int)(v2 + 2));
      v5 = v3[34];
      v2[7] = (int *)-1;
      if ( v5 == -1 )
        goto LABEL_5;
    }
    close(v5);
  }
LABEL_5:
  v6 = v3[1] - 1;
  v3[1] = v6;
  if ( !v6 )
  {
    v7 = &dword_BBD5C;
    v8 = (int *)dword_BBD5C;
    while ( v8 )
    {
      v9 = *v8;
      v10 = v3 == v8;
      if ( v3 != v8 )
        v7 = v8;
      v8 = (int *)*v8;
      if ( v10 )
        *v7 = v9;
    }
    free((void *)v3[5]);
    free((void *)v3[6]);
    free(v3);
  }
  *v2 = 0;
  if ( (ntp_syslogmask & 0x100) != 0 )
  {
    v11 = (const char *)sub_6A02C(a2 + 16);
    sub_64A18(5, "%s: shutdown", v11);
  }
}
