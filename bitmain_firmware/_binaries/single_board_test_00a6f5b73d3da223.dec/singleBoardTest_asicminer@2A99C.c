int __fastcall singleBoardTest_asicminer(int a1)
{
  unsigned int v1; // r0
  const char *v3; // r3
  const char *v4; // r3
  const char *v5; // r2
  const char *v6; // r1
  const char *v7; // r3
  int v8; // r2
  const char *v9; // r2
  const char *v10; // r3
  const char *v11; // r2
  const char *v12; // r3
  const char *v13; // r2
  const char *v14; // r3
  int j; // [sp+14h] [bp+Ch]
  char *s; // [sp+18h] [bp+10h]
  int v19; // [sp+1Ch] [bp+14h]
  int i; // [sp+20h] [bp+18h]
  int v21; // [sp+24h] [bp+1Ch]

  v21 = 0;
  if ( !dword_1F0C94 )
  {
    lcd_clear_result_pcba();
    lcd_show(1u, "Start test...");
    pcba_total_device_no = query_device_num();
    if ( pcba_total_device_no != 1 )
    {
      printf("power on check chain failed. query_device_num error code %d\n", pcba_total_device_no);
      g_lcd_result_with_data = 4;
      pcba_display_result_on_lcd();
      v1 = sleep(3u);
      (*(void (__fastcall **)(unsigned int))(dword_1F0C90 + 80))(v1);
      return -1;
    }
    v21 = (*(int (__fastcall **)(_DWORD))(dword_1F0C90 + 92))(0);
    dword_1F0C8C = (int)runtime_ctrl(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
    *(_DWORD *)(dword_1F0C8C + 136) = 0;
    (*(void (__fastcall **)(int))dword_1F0C8C)(dword_1F0C8C);
    gChain = (*(int (__fastcall **)(int))(dword_1F0C90 + 4))(pcba_total_device_no - 1);
    dword_1F0C94 = 1;
    pcba_set_fan_pwm(*(_DWORD *)(g_config_info + 100));
  }
  for ( i = 0; ; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 28) <= i )
      goto LABEL_67;
    pcba_set_fan_pwm(*(_DWORD *)(g_config_info + 100));
    printf("%s Begin Level %d\n", "singleBoardTest_asicminer", i + 1);
    memset(&g_lcd_result_with_data, 0, 0x48u);
    sub_2874C(i);
    if ( v21 < 0 )
    {
      *((_BYTE *)&gHistory_Result + 265800 * i + 6) = 0;
      lcd_show_one(1u, "Pic ERROR");
      sleep(2u);
      return -1;
    }
    lcd_show_one(1u, "Check EEPROM...");
    if ( *(_DWORD *)(g_config_info + 112) )
    {
      if ( a1 == 2 && (unsigned __int8)check_PT1_EEPROM_marker() != 1 )
        return -1;
      if ( (unsigned __int8)check_eeprom(0xFFu) != 1 )
      {
        g_lcd_result_with_data = 25;
        puts("Check EEPROM fail");
        *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) = 0;
        goto LABEL_67;
      }
    }
    lcd_show_one(1u, "set vol and freq");
    pcba_power_on(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4), *(_DWORD *)(4 * i + *(_DWORD *)(g_config_info + 48)));
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(dword_1F0C90 + 24))(
      *(_DWORD *)(dword_1F0C8C + 136),
      *(_DWORD *)(4 * i + *(_DWORD *)(g_config_info + 48)),
      *(_DWORD *)(dword_1F0C8C + 776));
    if ( pthread_create(&dword_47BE40, 0, (void *(*)(void *))sub_29190, (void *)dword_1F0C8C) )
    {
      g_lcd_result_with_data = 7;
      dword_47BEA0 = 14;
      goto LABEL_43;
    }
    pcba_set_baud(dword_1F0C8C, dword_1F0C90, 115200);
    pcba_set_baud(dword_1F0C8C, dword_1F0C90, *(_DWORD *)(g_config_info + 96));
    *(_DWORD *)(dword_1F0C8C + 304) = 1;
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6 )
      *(float *)(dword_1F0C8C + 760) = (float)(*(_DWORD *)(4 * i + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 24)) + 50);
    else
      *(float *)(dword_1F0C8C + 760) = (float)*(int *)(4 * i + *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 24));
    lcd_show_one(1u, "Find ASIC...");
    if ( a1 == 2 )
      printf("Set freq to %.2f\n", *(float *)(dword_1F0C8C + 760));
    (*(void (__fastcall **)(int))(dword_1F0C8C + 4))(dword_1F0C8C);
    printf("Find %d ASIC\n", *(_DWORD *)(dword_1F0C8C + 236));
    if ( *(_DWORD *)(dword_1F0C8C + 236) != *(_DWORD *)(g_config_info + 40) )
    {
      g_lcd_result_with_data = 10;
      sprintf(dest, "       %03d     ", *(_DWORD *)(dword_1F0C8C + 236));
      dword_47BEA0 = 8;
      goto LABEL_43;
    }
    if ( a1 != 1 )
      break;
    g_lcd_result_with_data = 2;
    lcd_show_one(1u, "Check sensor...");
    sub_2A240(dword_1F0C8C);
    if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
      v3 = "OK";
    else
      v3 = "NG";
    sprintf(&byte_47BEB9[17], "EEPROM:   %s    ", v3);
    if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
      v4 = "OK";
    else
      v4 = "NG";
    sprintf(dword_47BEDB, "Sensor:   %s    ", v4);
    if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2)
      && *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
    {
      write_EEPROM_PT1_marker();
    }
LABEL_56:
    g_pcba_info = 0;
    sleep(2u);
    if ( *(_BYTE *)(dword_1F0C8C + 146) )
      (*(void (__fastcall **)(int))(dword_1F0C8C + 8))(dword_1F0C8C);
    v19 = 0;
    do
    {
      sleep(1u);
      printf("delay power down seconds......%d\n", *(_DWORD *)(g_config_info + 104) - v19);
      v8 = v19++;
    }
    while ( v8 < *(_DWORD *)(g_config_info + 104) );
    (*(void (__fastcall **)(_DWORD))(dword_1F0C90 + 28))(*(_DWORD *)(dword_1F0C8C + 136));
    pcba_power_off(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
    if ( dword_47BEA0 || a1 != 2 )
      goto LABEL_67;
    if ( byte_47BE80 || i + 1 == *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 28) )
    {
      do_PT2_summary_work(dword_47BE7C);
LABEL_67:
      puts("Test finished");
      if ( a1 == 2 )
      {
        strcpy(dest, "Test done       ");
        sprintf(&byte_47BEB9[17], "Nonce: %.2f%", flt_47BE70);
        if ( *((unsigned __int8 *)&gHistory_Result + 265800 * dword_47BE7C + 265796) > 1u )
        {
          strcpy(dest, "Test all fail   ");
          if ( *((int *)&gHistory_Result + 66450 * dword_47BE7C + 65803) <= 0 )
          {
            if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
              v13 = "OK";
            else
              v13 = "NG";
            if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
              v14 = "OK";
            else
              v14 = "NG";
            sprintf(dword_47BEDB, "P:NG E:%s S:%s", v13, v14);
          }
          else
          {
            if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
              v11 = "OK";
            else
              v11 = "NG";
            if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
              v12 = "OK";
            else
              v12 = "NG";
            sprintf(&byte_47BEB9[17], "P:NG E:%s S:%s", v11, v12);
            sprintf(dword_47BEDB, "B:%02d:", *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803));
            s = (char *)&dword_47BEDF + 1;
            for ( j = 0; *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + 65803) > j; ++j )
            {
              sprintf(s, "%d ", *((_DWORD *)&gHistory_Result + 66450 * dword_47BE7C + j + 65804) + 1);
              if ( *((int *)&gHistory_Result + 66450 * dword_47BE7C + j + 65804) > 8 )
              {
                if ( *((int *)&gHistory_Result + 66450 * dword_47BE7C + j + 65804) > 98 )
                  s += 4;
                else
                  s += 3;
              }
              else
              {
                s += 2;
              }
            }
          }
        }
        else
        {
          if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
            v9 = "OK";
          else
            v9 = "NG";
          if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
            v10 = "OK";
          else
            v10 = "NG";
          sprintf(dword_47BEDB, "P:OK E:%s S:%s", v9, v10);
        }
LABEL_100:
        pcba_display_result_on_lcd();
      }
      else if ( a1 == 1 )
      {
        goto LABEL_100;
      }
      pcba_set_fan_pwm(30);
      return 0;
    }
    puts("goto next level");
  }
  pcba_set_working_voltage(
    *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4),
    *(_DWORD *)(4 * i + *(_DWORD *)(g_config_info + 48)));
  if ( pthread_create(&dword_47BE3C, 0, (void *(*)(void *))sub_2925C, 0) )
  {
    g_lcd_result_with_data = 14;
    dword_47BEA0 = 14;
  }
  else if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_293BC, (void *)dword_1F0C8C) )
  {
    g_lcd_result_with_data = 9;
    dword_47BEA0 = 14;
  }
  else
  {
    usleep(0x30D40u);
    if ( pthread_create(&dword_47BE38, 0, (void *(*)(void *))sub_29414, (void *)dword_1F0C8C) )
    {
      g_lcd_result_with_data = 15;
      dword_47BEA0 = 14;
    }
    else if ( pthread_create(&dword_47BE30, 0, (void *(*)(void *))sub_2A080, (void *)dword_1F0C8C) )
    {
      g_lcd_result_with_data = 16;
      dword_47BEA0 = 14;
    }
    else
    {
      while ( g_pcba_info )
        sleep(1u);
    }
  }
LABEL_43:
  pcba_display_result_on_lcd();
  if ( a1 != 2
    || *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) == 1
    && *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) == 1 )
  {
    goto LABEL_56;
  }
  sprintf(&byte_47BEB9[17], "Nonce: %.2f%", flt_47BE70);
  if ( *((unsigned __int8 *)&gHistory_Result + 265800 * dword_47BE7C + 265796) > 1u )
    v5 = "NG";
  else
    v5 = "OK";
  if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 2) )
    v6 = "OK";
  else
    v6 = "NG";
  if ( *((_BYTE *)&gHistory_Result + 265800 * dword_47BE7C + 4) )
    v7 = "OK";
  else
    v7 = "NG";
  sprintf(dword_47BEDB, "P:%s E:%s S:%s", v5, v6, v7);
  g_lcd_result_with_data = 20;
  pcba_display_result_on_lcd();
  sleep(3u);
  (*(void (__fastcall **)(_DWORD))(dword_1F0C90 + 28))(*(_DWORD *)(dword_1F0C8C + 136));
  pcba_power_off(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
  return -1;
}
