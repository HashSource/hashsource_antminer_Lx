char *__fastcall receive_message_from_bitmain_MES_system(unsigned int *a1)
{
  _BYTE v4[10240]; // [sp+Ch] [bp+Ch] BYREF
  ssize_t v5; // [sp+280Ch] [bp+280Ch]
  char *v6; // [sp+2810h] [bp+2810h]
  unsigned int v7; // [sp+2814h] [bp+2814h]
  unsigned int i; // [sp+2818h] [bp+2818h]
  unsigned int v9; // [sp+281Ch] [bp+281Ch]

  v9 = 0;
  i = 0;
  v7 = 0;
  v5 = 0;
  memset(v4, 0, sizeof(v4));
  v6 = 0;
  do
  {
    memset(v4, 0, sizeof(v4));
    v5 = recv(bitmain_MES_system_clientSocket, v4, 0x2800u, 0);
    if ( v5 )
    {
      if ( v5 < 0 )
      {
        printf("Receive message fail: %d\n", v5);
        return 0;
      }
      if ( v6 )
      {
        v6 = (char *)realloc(v6, v9 + v5);
        if ( !v6 )
        {
          lcd_clear_result();
          lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
          lcd_show(1u, "realloc for");
          lcd_show(2u, "MES config");
          lcd_show(3u, "infor fail");
          puts("realloc for MES config infor fail");
          return 0;
        }
        memcpy(&v6[v9], v4, v5);
        v9 += v5;
      }
      else
      {
        v6 = (char *)malloc(v5);
        if ( !v6 )
        {
          lcd_clear_result();
          lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
          lcd_show(1u, "malloc for");
          lcd_show(2u, "MES config");
          lcd_show(3u, "infor fail");
          puts("malloc for MES config infor fail");
          return 0;
        }
        memcpy(v6, v4, v5);
        v9 = v5;
      }
      v7 = 0;
    }
    else
    {
      ++v7;
      sleep(1u);
    }
    if ( v6[v9 - 1] == 10 )
    {
      *a1 = v9;
      puts("Receive all message from MES system");
      return v6;
    }
  }
  while ( v7 <= 6 );
  printf("Only receive %d bytes message during last 6 seconds\n", v9);
  for ( i = 0; i < v9; ++i )
    printf("%c\n", (unsigned __int8)v6[i]);
  putchar(10);
  lcd_clear_result();
  lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
  lcd_show(1u, "Not receive all");
  lcd_show(2u, "MES config");
  lcd_show(3u, "information");
  puts("Not receive all MES config information");
  return 0;
}
