bool create_connection_to_MES_system_by_ip()
{
  struct sockaddr addr; // [sp+4h] [bp+4h] BYREF
  int v3; // [sp+14h] [bp+14h]

  v3 = 30;
  bitmain_MES_system_clientSocket = socket(2, 1, 0);
  if ( bitmain_MES_system_clientSocket >= 0 )
  {
    puts("Creat socket success");
    addr.sa_family = 2;
    *(_WORD *)addr.sa_data = htons(0x1F9Au);
    *(_DWORD *)&addr.sa_data[2] = inet_addr("39.107.255.133");
    while ( v3 > 0 )
    {
      if ( !connect(bitmain_MES_system_clientSocket, &addr, 0x10u) )
      {
        puts("Creat socket connection to MES system succeed");
        return (unsigned __int8)set_socket_feature(bitmain_MES_system_clientSocket) == 1;
      }
      sleep(1u);
      printf("timeout_counter = %d\n", --v3);
    }
    puts("Creat socket connection to MES system fail");
    return 0;
  }
  else
  {
    puts("Creat socket fail");
    return 0;
  }
}
