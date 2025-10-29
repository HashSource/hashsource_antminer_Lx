int __fastcall prepare_eeprom_data(int a1)
{
  size_t v2; // r3
  unsigned __int8 v5[2]; // [sp+10h] [bp+8h] BYREF
  unsigned __int8 v6; // [sp+12h] [bp+Ah]
  unsigned __int8 v7; // [sp+13h] [bp+Bh]
  char v8; // [sp+17h] [bp+Fh]
  int v9; // [sp+18h] [bp+10h]
  int v10; // [sp+1Ch] [bp+14h]
  int v11; // [sp+20h] [bp+18h]
  size_t n; // [sp+24h] [bp+1Ch]

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 1;
  zhiju_eeprom_data = 17;
  byte_47BFC5 = 80;
  byte_47BFC6 = 3;
  n = strlen(s);
  if ( n > 0x11 )
  {
    dword_47BFC7 = *(_DWORD *)s;
    dword_47BFCB = dword_47BF89;
    dword_47BFCF = dword_47BF8D;
    dword_47BFD3 = dword_47BF91;
    byte_47BFD7 = byte_47BF95;
  }
  else
  {
    memcpy(&dword_47BFC7, s, n);
  }
  n = strlen(word_47BF14);
  if ( n > 2 )
    word_47BFD8 = *(_WORD *)word_47BF14;
  else
    memcpy(&word_47BFD8, word_47BF14, n);
  n = strlen(dword_47BF24);
  if ( n > 0xD )
  {
    dword_47BFDA = *(_DWORD *)dword_47BF24;
    dword_47BFDE = dword_47BF28;
    dword_47BFE2 = dword_47BF2C;
    byte_47BFE6 = byte_47BF30;
  }
  else
  {
    memcpy(&dword_47BFDA, dword_47BF24, n);
  }
  byte_47BFE7 = get_chip_bin((int)qr_code);
  if ( (strlen(src) == 9 || strlen(src) == 5) && get_chip_ft_program_version_ex((int)qr_code, (int)&dword_47BFE8) )
  {
    dword_47BFE8 = *(_DWORD *)src;
    dword_47BFEC = dword_47BF48;
    byte_47BFF0 = byte_47BF4C;
    byte_47BFF6 = 0;
    byte_47BFF1 = 0;
    get_hardware_infor(qr_code);
    get_chip_technology((hashboard_qr_code *)qr_code);
    byte_47BFFE = BYTE1(*((_DWORD *)&gHistory_Result + 66450 * a1 + 5));
    byte_47BFFF = *((_DWORD *)&gHistory_Result + 66450 * a1 + 5);
    byte_47C000 = BYTE1(*((_DWORD *)&gHistory_Result + 66450 * a1 + 7));
    byte_47C001 = *((_DWORD *)&gHistory_Result + 66450 * a1 + 7);
    byte_47C002 = (unsigned __int16)(unsigned int)(*((double *)&gHistory_Result + 33225 * a1 + 1) * 100.0) >> 8;
    byte_47C003 = (unsigned int)(*((double *)&gHistory_Result + 33225 * a1 + 1) * 100.0);
    memset(byte_47C008, 0, 8u);
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7 )
    {
      if ( !get_chip_ft_program_version(qr_code, v5) )
        return 0;
      printf("FT version : %d %02d %d %d\n", v5[0], v5[1], v6, v7);
      if ( v6 == 1 )
      {
        memcpy(byte_47C008, "D7", 2u);
      }
      else
      {
        if ( v6 != 2 && v6 != 3 )
        {
          printf("Wrong ft version. ft_version[2]: %d\n", v6);
          return 0;
        }
        memcpy(byte_47C008, "D7e", 3u);
      }
    }
    else
    {
      n = strlen((const char *)(MES2Local_Config_Information + 16));
      v2 = n;
      if ( n >= 8 )
        v2 = 8;
      memcpy(byte_47C008, (const void *)(MES2Local_Config_Information + 16), v2);
    }
    byte_47C006 = atoi((const char *)(MES2Local_Config_Information + 442));
    byte_47C007 = *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796);
    memset(eeprom_data_buf, 255, 0x60u);
    eeprom_data_buf[0] = zhiju_eeprom_data;
    byte_1ED19D = byte_47BFC5 + 2;
    memcpy(dword_1ED19E, &byte_47BFC6, (unsigned __int8)byte_47BFC5);
    byte_47C015 = CRC5_long((const uint8_t *)eeprom_data_buf, 8 * ((unsigned __int8)byte_1ED19D - 1));
    eeprom_data_buf[(unsigned __int8)byte_1ED19D - 1] = byte_47C015;
    print_eeprom_data();
    if ( data_enc(dword_1ED19E, 0x50u, 1u, 1u) )
    {
      puts("\nEEPROM data after encrypted:");
      print_eeprom_data_in_hex((int)eeprom_data_buf, 0x52u);
      return 1;
    }
    else
    {
      puts("EEPROM data encrypt fail");
      return 0;
    }
  }
  else
  {
    lcd_show_one(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "FT version");
    lcd_show(2u, "error");
    printf("FT version: %s. error\n", src);
    return 0;
  }
}
