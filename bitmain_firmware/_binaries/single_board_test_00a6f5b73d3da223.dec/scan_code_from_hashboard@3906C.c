int __fastcall scan_code_from_hashboard(int a1)
{
  int hardware_version; // r0
  char v5; // [sp+15h] [bp+Dh] BYREF
  _BYTE v6[2]; // [sp+16h] [bp+Eh] BYREF

  v6[0] = 0;
  v5 = 0;
  v6[1] = 0;
  if ( gScanCodeGun_data_ready == 3 )
  {
    if ( byte_1ED2B4 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Got Scan code");
      lcd_show(2u, "Press");
      lcd_show(3u, "Start Key");
      puts("No need scan code, Press Start Key to Begin Test");
      byte_1ED2B4 = 0;
    }
    return 1;
  }
  usleep(0x249F0u);
  hardware_version = get_hardware_version();
  printf("FPGA version is 0x%08x\n", hardware_version);
  check_scan_code_gun(a1);
  (*(void (__fastcall **)(_DWORD, int))(a1 + 20))((unsigned __int8)gCode_gun_chain, 115200);
  flush_scanner_data();
  gScanCodeGun_data_ready = 0;
  while ( gScanCodeGun_data_ready != 3 )
  {
    v6[0] = 0;
    v5 = 0;
    if ( gScanCodeGun_data_ready == 1 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "SN code OK      ");
      lcd_show(2u, "Please Scan QR  ");
      lcd_show(3u, "code            ");
      puts("Please Scan QR code");
    }
    else if ( gScanCodeGun_data_ready == 2 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "QR code OK      ");
      lcd_show(2u, "Please Scan SN  ");
      lcd_show(3u, "code            ");
      puts("Please Scan SN code");
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Please Scan code");
      lcd_show(2u, "first");
    }
    scan_hashboard_info(gCode_gun_chain, &sn, qr_code, v6, &v5, 1000);
    if ( v6[0] )
    {
      gScanCodeGun_data_ready |= 1u;
      printf("Got SN code... gScanCodeGun_data_ready = %d", (unsigned __int8)gScanCodeGun_data_ready);
    }
    if ( v5 )
    {
      gScanCodeGun_data_ready |= 2u;
      printf("Got QR code... gScanCodeGun_data_ready = %d", (unsigned __int8)gScanCodeGun_data_ready);
    }
  }
  printf("SN data::[%s]\n", s);
  puts("QR code data::");
  printf("factory_job::[%s].\n", qr_code);
  printf("chip_die::[%s].\n", word_47BF14);
  printf("chip_marking::[%s].\n", dword_47BF24);
  printf("chip_bin::[%s].\n", byte_47BF34);
  printf("chip_ftversion::[%s].\n", src);
  printf("temp_sensor_type::[%s].\n", byte_47BF54);
  printf("hashboard_ctrl_code::[%s].\n", byte_47BF64);
  printf("hashboard_index::[%s].\n", byte_47BF74);
  if ( (unsigned __int8)check_sn_qr_code_legality((int)&sn, qr_code) == 1 )
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Got Scan code");
    lcd_show(2u, "wait for find");
    lcd_show(3u, "test standard");
    puts("got scan code");
    return 1;
  }
  gScanCodeGun_data_ready = 0;
  return 0;
}
