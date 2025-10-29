int __fastcall sub_131EC(int a1, int a2)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r0
  const char *v8; // r0
  __int64 v9; // r0
  char v10[256]; // [sp+4h] [bp-108h] BYREF

  config_file = (int)"/etc/ntp.conf";
  sub_6BCB0(v10, 256, "daemon_version=\"%s\"", Version);
  v4 = strlen(v10);
  sub_24370(v10, v4 + 1);
  set_tod_using = sub_CBF4;
  sub_1DDA0(a1, a2);
  memset(&cfgt, 0, 0xB8u);
  dword_1064D8 = 5;
  v5 = sub_639B8(config_file);
  if ( sub_1BEEC(v5, "r") )
  {
    dword_106440 = sub_63948(config_file);
    v6 = sub_194F8(dword_106440);
    sub_1BF70(v6);
    dword_106434 = 0;
    dword_106448 = time(0);
    return sub_FCE8(1);
  }
  else
  {
    v8 = (const char *)sub_639B8(config_file);
    v9 = sub_64A18(6, "getconfig: Couldn't open <%s>: %m", v8);
    return sub_18248(v9, HIDWORD(v9));
  }
}
