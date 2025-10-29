void __fastcall sub_26D84(int a1, const char **a2)
{
  int v3; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v3 = a1;
  sub_64C1C((int)&off_9E548, (int)"Options for both config file and command line");
  sub_64C1C((int)&off_9EDA8, (int)"Options for command line only");
  sub_64CF0(&v3, a2, (void (*)(const char *, ...))sub_52B50);
  if ( v3 != 1 )
  {
    strcpy(s, "Unexpected extra commandline arguments");
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 0);
  }
  sub_53DD0();
  if ( dword_1AECD8 )
    sub_63E84();
  if ( dword_1AECC8 )
  {
    byte_1AEB9C = 1;
    strcpy(byte_1AEBC4, (const char *)dword_1AECC8);
    if ( dword_1AECD4 )
      strcpy((char *)&word_1AEBA4, (const char *)dword_1AECD4);
    else
      strcpy((char *)&word_1AEBA4, "a+");
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(s, 0x800u, "Log file path: %s Open flag: %s", byte_1AEBC4, (const char *)&word_1AEBA4);
      sub_47AB4(3, s, 0);
    }
  }
}
