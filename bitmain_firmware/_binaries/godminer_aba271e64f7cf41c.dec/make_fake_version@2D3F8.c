int make_fake_version()
{
  char s[64]; // [sp+8h] [bp-44h] BYREF

  sprintf(s, "%s %s", "Aug 21 2024", "19:33:46");
  strcpy(g_miner_compiletime, s);
  strcpy(g_miner_type, "Antminer unknow");
  return *(_DWORD *)"Antminer unknow";
}
