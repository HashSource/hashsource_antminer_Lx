int __fastcall create_connection_to_MES_system_by_name(int a1)
{
  char *v2; // r4
  char *v3; // r0
  size_t v4; // r0
  char s[32]; // [sp+8h] [bp+8h] BYREF
  struct sockaddr addr; // [sp+28h] [bp+28h] BYREF
  unsigned __int8 i; // [sp+3Bh] [bp+3Bh]
  int v10; // [sp+3Ch] [bp+3Ch]
  int v11; // [sp+40h] [bp+40h]
  int v12; // [sp+44h] [bp+44h]
  int v13; // [sp+48h] [bp+48h]
  struct hostent *v14; // [sp+4Ch] [bp+4Ch]

  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  if ( a1 == 1 )
  {
    v13 = 1000000;
    v12 = 1000000;
    v11 = 1000000;
    v10 = 1000000;
  }
  else
  {
    if ( a1 != 2 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "don't figer out");
      lcd_show(2u, "which process to");
      lcd_show(3u, "connect MES");
      puts("don't figer out which process to connect MES");
      return 0;
    }
    v13 = 60;
    v12 = 3;
    v11 = 3;
    v10 = 3;
  }
  if ( bitmain_MES_system_clientSocket != -1 )
  {
    close(bitmain_MES_system_clientSocket);
    bitmain_MES_system_clientSocket = -1;
    puts("close socket");
  }
  for ( i = 0; i < v13; ++i )
  {
    sleep(1u);
    if ( !get_local_ip("eth0", s) )
    {
      printf("%s: %s\n", "eth0", s);
      break;
    }
    if ( i >= v13 - 1 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "can't get");
      lcd_show(2u, "local ip");
      printf("Can't get %s ip\n", "eth0");
      return 0;
    }
  }
  for ( i = 0; i < v12; ++i )
  {
    v14 = gethostbyname("mtcs.bitmain.vip");
    if ( v14 )
      break;
    printf("try get MES system ip: %d\n", i);
    sleep(3u);
    if ( i >= v12 - 1 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "can't get");
      lcd_show(2u, "MES system ip");
      puts("Can't get MES system by host name");
      return 0;
    }
  }
  memset(s, 0, sizeof(s));
  for ( i = 0; v14->h_addr_list[i]; ++i )
  {
    v2 = inet_ntoa(*(struct in_addr *)v14->h_addr_list[i]);
    v3 = inet_ntoa(*(struct in_addr *)v14->h_addr_list[i]);
    v4 = strlen(v3);
    memcpy(s, v2, v4);
  }
  for ( i = 0; i < v11; ++i )
  {
    bitmain_MES_system_clientSocket = socket(v14->h_addrtype, 1, 0);
    if ( bitmain_MES_system_clientSocket >= 0 )
    {
      puts("Creat socket success");
      break;
    }
    puts("Creat socket fail");
    if ( i >= v11 - 1 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "can't connect");
      lcd_show(2u, "MES system");
      puts("Creat socket timeout");
      return 0;
    }
  }
  addr.sa_family = v14->h_addrtype;
  *(_WORD *)addr.sa_data = htons(0x1F9Au);
  *(_DWORD *)&addr.sa_data[2] = inet_addr(s);
  while ( 1 )
  {
    if ( v10 <= 0 )
    {
      puts("Creat socket connection to MES system fail");
      return 0;
    }
    if ( !connect(bitmain_MES_system_clientSocket, &addr, 0x10u) )
      break;
    sleep(1u);
    printf("timeout_counter = %d\n", --v10);
  }
  puts("Creat socket connection to MES system succeed");
  if ( (unsigned __int8)set_socket_feature(bitmain_MES_system_clientSocket) == 1 )
    return 1;
  lcd_clear_result();
  lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
  lcd_show(1u, "set socket");
  lcd_show(2u, "feature");
  lcd_show(3u, "fail");
  puts("Creat socket timeout");
  return 0;
}
