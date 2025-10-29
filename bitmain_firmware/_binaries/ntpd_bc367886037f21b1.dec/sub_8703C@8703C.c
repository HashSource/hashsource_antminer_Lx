int __fastcall sub_8703C(int *a1, char *s)
{
  int v3; // r2
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  void (*v9)(void); // r3
  const char *v10; // r0

  if ( a1 )
  {
    v3 = a1[3];
    byte_1062C4 = (v3 & 0x200000) != 0;
    if ( (v3 & 0x2000) != 0 )
    {
      v9 = (void (*)(void))a1[22];
      if ( v9 )
      {
        if ( option_xlateable_txt )
        {
          if ( (v3 & 0x30000) == 0x20000 )
            a1[3] = v3 | 0x10000;
          v9();
        }
      }
    }
    if ( (unsigned int)(*a1 - 102400) > 0x10001 )
    {
      fprintf(stderr, off_B7470[0], s, *a1 >> 12, ((unsigned int)*a1 >> 7) & 0x1F, *a1 & 0x7F);
      if ( *a1 <= 167937 )
        v10 = off_B7478[0];
      else
        v10 = off_B746C[0];
      fputs(v10, stderr);
      fwrite("41:0:16\n", 8u, 1u, stderr);
      return -1;
    }
    else if ( a1[7] )
    {
      return 0;
    }
    else
    {
      v6 = strrchr(s, 47);
      if ( v6 )
        a1[7] = (int)(v6 + 1);
      else
        a1[7] = (int)s;
      v7 = getenv("PATH");
      v8 = sub_7F5BC(v7, s);
      if ( !v8 )
        v8 = s;
      a1[6] = (int)v8;
      sub_86FC0("-_^");
      return 0;
    }
  }
  else
  {
    fputs(off_B7468[0], stderr);
    return -1;
  }
}
