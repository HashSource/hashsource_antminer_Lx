int __fastcall check_eeprom(unsigned int a1)
{
  char v3; // [sp+8h] [bp-600h] BYREF
  char v4; // [sp+208h] [bp-400h] BYREF
  char v5; // [sp+408h] [bp-200h] BYREF
  _DWORD v6[9]; // [sp+600h] [bp-8h] BYREF
  unsigned int v7; // [sp+624h] [bp+1Ch]
  char v8; // [sp+62Bh] [bp+23h]
  char *v9; // [sp+62Ch] [bp+24h]
  int v10; // [sp+630h] [bp+28h]
  char *v11; // [sp+634h] [bp+2Ch]
  int v12; // [sp+638h] [bp+30h]
  char *v13; // [sp+63Ch] [bp+34h]
  int v14; // [sp+640h] [bp+38h]
  int v15; // [sp+644h] [bp+3Ch]
  int v16; // [sp+648h] [bp+40h]
  unsigned int i; // [sp+64Ch] [bp+44h]

  v7 = a1;
  v6[8] = v6;
  i = 0;
  v16 = 512;
  v15 = 0;
  v14 = 511;
  v6[7] = 0;
  v6[6] = 4096;
  v6[5] = 0;
  v6[4] = 4096;
  v13 = &v5;
  v12 = 511;
  v6[3] = 0;
  v6[2] = 4096;
  v11 = &v4;
  v10 = 511;
  v9 = &v3;
  v8 = 0;
  *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 0;
  if ( eeprom_open(gChain) < 0 )
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(2u, "EEPROM init fail");
    printf("EEPROM init fail!!!");
    return 0;
  }
  for ( i = 0; i < v7; ++i )
  {
    v13[i] = i;
    v11[i] = -1;
  }
  if ( *(_BYTE *)(MES2Local_Config_Information + 468) )
  {
    puts("Check EEPROM with clear data");
    if ( eeprom_write(gChain, 0, (int)v13, v7) )
      goto LABEL_23;
    if ( eeprom_read(gChain, 0, (int)v11, v7) )
    {
LABEL_25:
      puts("Read EEPROM fail");
      return 0;
    }
    for ( i = 0; i < v7; ++i )
    {
      if ( v13[i] != v11[i] )
        goto LABEL_13;
    }
    for ( i = 0; i < v7; ++i )
      v13[i] = -1;
    if ( !eeprom_write(gChain, 0, (int)v13, v7) )
    {
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 1;
      return 1;
    }
LABEL_23:
    puts("Write EEPROM fail");
    return 0;
  }
  puts("Check EEPROM without clear data");
  if ( eeprom_read(gChain, 0, (int)v9, v7) )
    goto LABEL_25;
  if ( eeprom_write(gChain, 0, (int)v13, v7) )
    goto LABEL_23;
  if ( eeprom_read(gChain, 0, (int)v11, v7) )
    goto LABEL_25;
  for ( i = 0; i < v7; ++i )
  {
    if ( v13[i] != v11[i] )
    {
LABEL_13:
      printf(
        "EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n",
        i,
        (unsigned __int8)v13[i],
        i,
        (unsigned __int8)v11[i]);
      return 0;
    }
  }
  if ( eeprom_write(gChain, 0, (int)v9, v7) )
  {
    puts("Backup write EEPROM fail");
    return 0;
  }
  else
  {
    *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 1;
    return 1;
  }
}
