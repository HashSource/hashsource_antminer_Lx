int __fastcall get_server_port_from_url(const char *a1, char *a2, _WORD *a3)
{
  int v7; // [sp+14h] [bp+14h] BYREF
  char *v8; // [sp+18h] [bp+18h]
  unsigned __int8 v9; // [sp+1Fh] [bp+1Fh]

  v9 = 0;
  if ( a1 )
  {
    v8 = strchr(a1, 58);
    if ( v8 )
    {
      if ( v8 != a1 )
      {
        strncpy(a2, a1, v8 - a1);
        a2[v8 - a1] = 0;
        if ( v8 + 1 - a1 < strlen(a1) )
        {
          sub_E2384(v8 + 1, &v7, 0, 0xFFFF);
          *a3 = v7;
          return 1;
        }
      }
    }
  }
  return v9;
}
