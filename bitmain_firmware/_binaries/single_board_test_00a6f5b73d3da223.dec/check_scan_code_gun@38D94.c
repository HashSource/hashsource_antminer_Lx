int __fastcall check_scan_code_gun(int a1)
{
  int v2; // r0

  if ( pcba_chain_check() == 2 )
  {
    gCode_gun_chain = is_asic_pass(1);
    if ( gCode_gun_chain == 3 )
    {
      v2 = printf("gCode_gun_chain = %d\n", (unsigned __int8)gCode_gun_chain);
      if ( (*(int (__fastcall **)(int))a1)(v2) != 1 )
        (*(void (__fastcall **)(int))(a1 + 88))(1);
      return 1;
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Scan code gun");
      lcd_show(2u, "don't plug on");
      lcd_show(3u, "J4");
      puts("Scan code gun don't plug on J4");
      return 0;
    }
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(2u, "Chain Error     ");
    puts("Don't detect hashboard or scan code gun");
    return 0;
  }
}
