int __fastcall check_whether_board_changed(int a1)
{
  int v1; // r3
  int v2; // r0
  int v5; // [sp+Ch] [bp+Ch]

  v5 = pcba_chain_check();
  if ( *(_DWORD *)(g_config_info + 36) )
  {
    if ( v5 == 1 )
    {
      while ( *(_BYTE *)(a1 + 85) && pcba_chain_check() )
        usleep(0x30D40u);
      lcd_show_one(1u, "Please change");
      lcd_show(2u, "next hashboard");
      sleep(1u);
      while ( 1 )
      {
        v1 = *(_BYTE *)(a1 + 86) ^ 1;
        if ( *(_BYTE *)(a1 + 86) == 1 )
          break;
        if ( pcba_chain_check() == 1 )
          *(_BYTE *)(a1 + 86) = 1;
        usleep(0x30D40u);
      }
    }
    else
    {
      if ( !v5 )
      {
        puts("No board found, please check.");
        lcd_show_one(1u, "Plug off");
        lcd_show(2u, "before test done");
      }
      return 0;
    }
  }
  else if ( v5 == 2 )
  {
    while ( *(_BYTE *)(a1 + 85) && pcba_chain_check() != 1 )
      usleep(0x30D40u);
    lcd_show_one(1u, "Please change");
    lcd_show(2u, "next hashboard");
    sleep(1u);
    while ( 1 )
    {
      v1 = *(_BYTE *)(a1 + 86) ^ 1;
      if ( *(_BYTE *)(a1 + 86) == 1 )
        break;
      if ( pcba_chain_check() == 2 )
        *(_BYTE *)(a1 + 86) = 1;
      usleep(0x30D40u);
    }
  }
  else
  {
    v2 = is_asic_pass(v5 - 1);
    printf("Please check hashboard. Only find chain %d\n", v2);
    lcd_show_one(1u, "Plug off");
    lcd_show(2u, "before test done");
    return 0;
  }
  return v1;
}
