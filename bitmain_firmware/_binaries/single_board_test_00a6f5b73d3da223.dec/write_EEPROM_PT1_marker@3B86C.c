int write_EEPROM_PT1_marker()
{
  unsigned __int8 v1; // [sp+5h] [bp+5h] BYREF
  char v2; // [sp+6h] [bp+6h] BYREF
  char v3; // [sp+7h] [bp+7h]

  v2 = 90;
  v1 = 0;
  v3 = 1;
  if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
  {
    if ( eeprom_write(gChain, 255, (int)&v2, 1u) )
    {
      puts("Write marker into EEPROM fail");
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 0;
      return 0;
    }
    else if ( eeprom_read(gChain, 255, (int)&v1, 1u) )
    {
      puts("Read marker from EEPROM fail");
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 0;
      return 0;
    }
    else if ( v1 == 90 )
    {
      puts("check marker saved in EEPROM success");
      return 1;
    }
    else
    {
      printf("check EEPROM marker fail. read bak is: 0x%02x\n", v1);
      *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 0;
      return 0;
    }
  }
  else
  {
    printf("gEEPROM_OK is %s, so no need write eeprom PT1 marker\n", "false");
    return 0;
  }
}
