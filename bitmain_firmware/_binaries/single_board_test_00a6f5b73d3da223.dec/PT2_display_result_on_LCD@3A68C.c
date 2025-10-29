int __fastcall PT2_display_result_on_LCD(int a1)
{
  int result; // r0
  int v2; // r3
  int v3; // r3
  int v5; // [sp+14h] [bp+Ch]
  int v6; // [sp+18h] [bp+10h]
  int v7; // [sp+1Ch] [bp+14h]
  int v8; // [sp+20h] [bp+18h]
  char s[16]; // [sp+24h] [bp+1Ch] BYREF
  int v10; // [sp+34h] [bp+2Ch]
  char v11; // [sp+3Bh] [bp+33h]
  unsigned __int8 v12; // [sp+3Ch] [bp+34h]
  unsigned __int8 i; // [sp+3Dh] [bp+35h]
  unsigned __int8 v14; // [sp+3Eh] [bp+36h]
  char v15; // [sp+3Fh] [bp+37h]
  _BYTE v16[4]; // [sp+40h] [bp+38h] BYREF

  v15 = 1;
  v14 = 0;
  i = 0;
  v12 = 0;
  v11 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  result = lcd_clear_result();
  if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796) )
  {
    if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 265796) == 1 )
    {
      lcd_show(1u, "Pattern: OK");
      for ( i = 0; (unsigned int)i < *(_DWORD *)(MES2Local_Config_Information + 64); ++i )
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + i + 265520) != 1 )
        {
          ++v14;
          if ( v12 <= 3u )
          {
            v2 = v12++;
            *(_DWORD *)&v16[4 * v2 - 44] = i;
          }
        }
      }
      if ( v14 )
      {
        memset(s, 0, sizeof(s));
        switch ( v14 )
        {
          case 1u:
            sprintf(s, "B_A: %d", v5);
            break;
          case 2u:
            sprintf(s, "B_A: %d %d", v5, v6);
            break;
          case 3u:
            sprintf(s, "B_A: %d %d %d", v5, v6, v7);
            break;
          default:
            sprintf(s, "B_A: %d %d %d %d", v5, v6, v7, v8);
            break;
        }
        lcd_show(3u, s);
      }
      if ( *(_BYTE *)(MES2Local_Config_Information + 88) )
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
        {
          result = lcd_show(2u, "EE: OK   P_S: OK");
        }
        else if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) != 1 )
        {
          result = lcd_show(2u, "EE: OK   P_S: NG");
          v15 = 0;
        }
        else if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) != 1 && *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
        {
          result = lcd_show(2u, "EE: NG   P_S: OK");
          v15 = 0;
        }
        else
        {
          result = lcd_show(2u, "EE: NG   P_S: NG");
          v15 = 0;
        }
      }
      else if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) )
      {
        result = lcd_show(2u, "EEPROM:  OK");
      }
      else
      {
        result = lcd_show(2u, "EEPROM:  NG");
        v15 = 0;
      }
      if ( v15 )
      {
        memset(s, 0, sizeof(s));
        sprintf(s, "Level:  %d", *((_DWORD *)&gHistory_Result + 66450 * a1 + 4) + 100);
        return lcd_show(0, s);
      }
    }
    else if ( *((unsigned __int8 *)&gHistory_Result + 265800 * a1 + 265796) == 240 )
    {
      if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) )
      {
        result = lcd_show(0, "EEPROM:  OK");
      }
      else
      {
        result = lcd_show(0, "EEPROM:  NG");
        v15 = 0;
      }
      if ( *(_BYTE *)(MES2Local_Config_Information + 88) && *(_BYTE *)(MES2Local_Config_Information + 89) != 1 )
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
        {
          result = lcd_show(1u, "PIC Sensor: OK");
        }
        else
        {
          result = lcd_show(1u, "PIC Sensor: NG");
          v15 = 0;
        }
      }
      if ( *(_BYTE *)(MES2Local_Config_Information + 88) != 1 && *(_BYTE *)(MES2Local_Config_Information + 89) )
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
        {
          result = lcd_show(1u, "ASIC Sensor:  OK");
        }
        else
        {
          result = lcd_show(1u, "ASIC Sensor:  NG");
          v15 = 0;
        }
      }
      if ( *(_BYTE *)(MES2Local_Config_Information + 88) && *(_BYTE *)(MES2Local_Config_Information + 89) )
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
        {
          result = lcd_show(1u, "P_S: OK  A_S: OK");
        }
        else if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
        {
          result = lcd_show(1u, "P_S: OK  A_S: NG");
          v15 = 0;
        }
        else
        {
          if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
            result = lcd_show(1u, "P_S: NG  A_S: OK");
          else
            result = lcd_show(1u, "P_S: NG  A_S: NG");
          v15 = 0;
        }
      }
      for ( i = 0; (unsigned int)i < *(_DWORD *)(MES2Local_Config_Information + 64); ++i )
      {
        result = a1;
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + i + 265520) != 1 )
        {
          ++v14;
          if ( v12 <= 3u )
          {
            v3 = v12++;
            *(_DWORD *)&v16[4 * v3 - 44] = i;
          }
        }
      }
      if ( v14 )
      {
        memset(s, 0, sizeof(s));
        sprintf(s, "B_A:  %d  pcs", v14);
        lcd_show(2u, s);
        memset(s, 0, sizeof(s));
        switch ( v14 )
        {
          case 1u:
            sprintf(s, "%d", v5);
            break;
          case 2u:
            sprintf(s, "%d  %d", v5, v6);
            break;
          case 3u:
            sprintf(s, "%d  %d  %d", v5, v6, v7);
            break;
          default:
            sprintf(s, "%d %d %d %d", v5, v6, v7, v8);
            break;
        }
        return lcd_show(3u, s);
      }
    }
    else if ( *((unsigned __int8 *)&gHistory_Result + 265800 * a1 + 265796) == 255 )
    {
      puts("Don't get result");
      return lcd_show(1u, "Don't get result");
    }
  }
  else
  {
    lcd_show(1u, "Pattern: OK");
    if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) )
    {
      result = lcd_show(2u, "EEPROM:  OK");
    }
    else
    {
      result = lcd_show(2u, "EEPROM:  NG");
      v15 = 0;
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 88) && *(_BYTE *)(MES2Local_Config_Information + 89) != 1 )
    {
      if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
      {
        result = lcd_show(3u, "PIC Sensor: OK");
      }
      else
      {
        result = lcd_show(3u, "PIC Sensor: NG");
        v15 = 0;
      }
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 88) != 1 && *(_BYTE *)(MES2Local_Config_Information + 89) )
    {
      if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
      {
        result = lcd_show(3u, "ASIC Sensor:  OK");
      }
      else
      {
        result = lcd_show(3u, "ASIC Sensor:  NG");
        v15 = 0;
      }
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 88) && *(_BYTE *)(MES2Local_Config_Information + 89) )
    {
      if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) && *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
      {
        result = lcd_show(3u, "P_S: OK  A_S: OK");
      }
      else if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 3) )
      {
        result = lcd_show(3u, "P_S: OK  A_S: NG");
        v15 = 0;
      }
      else
      {
        if ( *((_BYTE *)&gHistory_Result + 265800 * a1 + 4) )
          result = lcd_show(3u, "P_S: NG  A_S: OK");
        else
          result = lcd_show(3u, "P_S: NG  A_S: NG");
        v15 = 0;
      }
    }
    if ( v15 )
    {
      memset(s, 0, sizeof(s));
      sprintf(s, "Level:  %d", *((_DWORD *)&gHistory_Result + 66450 * a1 + 4));
      return lcd_show(0, s);
    }
  }
  return result;
}
