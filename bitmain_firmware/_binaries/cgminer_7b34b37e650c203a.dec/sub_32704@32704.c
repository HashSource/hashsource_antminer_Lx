char *__fastcall sub_32704(char *s)
{
  int v2; // r3
  _DWORD *v3; // r6
  char *v4; // r4
  char *v5; // r0
  char *v6; // r4

  if ( dword_69068 || dword_6906C )
    return "Use only user + pass or userpass, but not both";
  v2 = dword_69070 + 1;
  dword_69070 = v2;
  if ( v2 > dword_733CC )
  {
    sub_324B8();
    v2 = dword_69070;
  }
  v3 = *(_DWORD **)(dword_744C8 + 4 * (v2 + 0x3FFFFFFF));
  v4 = _strdup(s);
  sub_4014C((int)s, v3 + 42);
  v5 = strtok(v4, ":");
  v3[43] = v5;
  if ( !v5 )
    return "Failed to find : delimited user info";
  v6 = strtok(0, ":");
  v3[44] = v6;
  if ( v6 )
    return 0;
  v3[44] = calloc(1u, 1u);
  return v6;
}
