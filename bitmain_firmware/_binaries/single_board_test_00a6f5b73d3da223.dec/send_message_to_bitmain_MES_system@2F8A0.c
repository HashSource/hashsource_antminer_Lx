int __fastcall send_message_to_bitmain_MES_system(const void *a1, size_t a2)
{
  ssize_t v5; // [sp+10h] [bp+10h]
  unsigned __int8 v6; // [sp+16h] [bp+16h]
  char v7; // [sp+17h] [bp+17h]

  v7 = 5;
  v6 = 0;
  putchar(32);
  while ( v7 )
  {
    v5 = send(bitmain_MES_system_clientSocket, a1, a2, 0);
    if ( v5 )
    {
      if ( v5 >= 0 )
      {
        v6 = 1;
        puts("done");
        break;
      }
      printf("Socket return back: %d\n", v5);
    }
    else
    {
      puts("Timeout. MES close socket");
    }
    ++v7;
  }
  if ( v6 != 1 )
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "send message to");
    lcd_show(2u, "MES system");
    lcd_show(3u, "fail");
    puts("send message to MES system fail");
  }
  return v6;
}
