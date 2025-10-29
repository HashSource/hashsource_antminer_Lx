void *app_config_init()
{
  if ( g_config_info )
    puts("app_config_init already done");
  memset(&unk_1F0C9C, 0, 0x78u);
  if ( (unsigned __int8)read_config_ini((void **)&unk_1F0C9C) != 1 )
  {
    printf("read config err!");
    config_free((int)&unk_1F0C9C);
    return 0;
  }
  else if ( !proofread_config(&unk_1F0C9C) )
  {
    printf("proofread config failed!");
    config_free((int)&unk_1F0C9C);
    return 0;
  }
  else
  {
    g_config_info = (int)&unk_1F0C9C;
    return &unk_1F0C9C;
  }
}
