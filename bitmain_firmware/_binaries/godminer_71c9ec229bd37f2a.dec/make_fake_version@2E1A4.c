int make_fake_version()
{
  char v1[64]; // [sp+0h] [bp-40h] BYREF

  sprintf(v1, "%s %s", "May 14 2024", "14:37:11");
  strcpy(g_miner_compiletime, v1);
  strcpy(g_miner_type, "Antminer unknow");
  return *(_DWORD *)"Antminer unknow";
}
