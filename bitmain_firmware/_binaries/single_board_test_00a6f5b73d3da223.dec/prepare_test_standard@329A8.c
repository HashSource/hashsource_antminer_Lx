int __fastcall prepare_test_standard(int a1)
{
  const char *v1; // r4
  const char *v2; // r5
  const char *v3; // r6
  int chip_bin; // r0
  int v8; // [sp+24h] [bp+Ch] BYREF
  int v9; // [sp+28h] [bp+10h] BYREF
  char v10[8]; // [sp+2Ch] [bp+14h] BYREF

  *(_DWORD *)v10 = 0;
  v9 = 0;
  v8 = 0;
  substr(byte_47BF64, 0, 3u, (int)v10);
  substr(byte_47BF64, 3, 2u, (int)&v9);
  substr(byte_47BF64, 5, 2u, (int)&v8);
  v1 = (const char *)(MES2Local_Config_Information + 16);
  v2 = (const char *)(MES2Local_Config_Information + 32);
  v3 = (const char *)(MES2Local_Config_Information + 48);
  chip_bin = get_chip_bin((int)qr_code);
  if ( (unsigned __int8)find_test_standard_position(
                          a1,
                          v1,
                          v2,
                          v3,
                          v10,
                          (const char *)&v9,
                          (const char *)&v8,
                          src,
                          chip_bin) != 1 )
  {
    gFind_test_standard = 0;
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Can't find");
    lcd_show(2u, "test standard");
    lcd_show(3u, "please re-scan");
    puts("Can't find test standard");
    sleep(5u);
    return 0;
  }
  else
  {
    gFind_test_standard = 1;
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Find test");
    lcd_show(2u, "standard");
    lcd_show(3u, "Press Start Key");
    puts("find test standard, Press Start Key to Begin Test");
    return 1;
  }
}
