int __fastcall main(int argc, const char **argv, const char **envp)
{
  _UNKNOWN **v3; // r0
  int v4; // r1
  const char *v6; // r4
  int v7; // r0
  const char *v8; // r4
  int v9; // r0
  _BYTE s[64]; // [sp+8h] [bp+8h] BYREF
  char v12; // [sp+4Bh] [bp+4Bh] BYREF
  pthread_t newthread; // [sp+4Ch] [bp+4Ch] BYREF
  char *v14; // [sp+50h] [bp+50h]
  int v15; // [sp+54h] [bp+54h]

  putenv("HAL_CONFIG_PATH=/mnt/card");
  v14 = getenv("HAL_CONFIG_PATH");
  if ( v14 )
    printf("HAL_CONFIG_PATH=%s\n", v14);
  if ( log_init() )
    puts("log init error!");
  set_flag_to_bad_asic_cfg_freq(4u);
  v3 = dev_ctrl();
  dword_1F0C90 = (int)v3;
  while ( 1 )
  {
    (*(void (__fastcall **)(_UNKNOWN **, int))(dword_1F0C90 + 12))(v3, v4);
    pcba_total_device_no = query_device_num();
    if ( pcba_total_device_no != 1 && pcba_total_device_no != 2 )
    {
      g_lcd_result_with_data = 5;
      pcba_display_result_on_lcd();
      puts("Can't find device, please check hashboard!");
    }
    pcba_set_fan_pwm(30);
    lcd_clear_result();
    lcd_show(1u, "Init...         ");
    if ( !app_config_init() )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6 || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7 )
    {
      v6 = *(const char **)(g_config_info + 20);
      v7 = strcmp(v6, "PT2");
      printf("%s test %d  pcba_total_device_no %d\n", v6, v7, pcba_total_device_no);
      if ( strcmp(*(const char **)(g_config_info + 20), "PT1")
        || (*(_DWORD *)(g_config_info + 36) = 1,
            *(_DWORD *)(g_config_info + 32) = 0,
            *(_DWORD *)(g_config_info + 108) = 0,
            pcba_total_device_no == 1) )
      {
        if ( *(_DWORD *)(g_config_info + 36) || pcba_total_device_no == 2 )
          goto LABEL_23;
        goto LABEL_18;
      }
      lcd_show(1u, "Chain ERROR");
      printf("PT1 test chain error, find %d chain\n", pcba_total_device_no);
      v3 = (_UNKNOWN **)sleep(5u);
    }
    else
    {
      if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) != 5 )
        goto LABEL_24;
      v8 = *(const char **)(g_config_info + 20);
      v9 = strcmp(v8, "PT2");
      printf("%s test %d  pcba_total_device_no %d\n", v8, v9, pcba_total_device_no);
      *(_DWORD *)(g_config_info + 108) = 1;
      if ( *(_DWORD *)(g_config_info + 36) || pcba_total_device_no == 2 )
      {
LABEL_23:
        prepare_mes_config_test_process(g_config_info);
LABEL_24:
        load_patterns(g_config_info);
        sub_28DAC();
        pthread_create(&newthread, 0, (void *(*)(void *))restart_single_board_test, 0);
        while ( 1 )
        {
          v15 = 0;
          memset(s, 0, sizeof(s));
          if ( (*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6
             || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7
             || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 5)
            && !*(_DWORD *)(g_config_info + 36) )
          {
            if ( *(_DWORD *)(g_config_info + 32) )
            {
              if ( gFind_test_standard != 1 )
              {
                v15 = scan_code_from_hashboard(dword_1F0C90);
                if ( !v15 )
                  continue;
                if ( (unsigned __int8)prepare_test_standard(g_config_info) != 1 )
                {
                  gScanCodeGun_data_ready = 0;
                  continue;
                }
              }
            }
            else if ( gFind_test_standard != 1 )
            {
              v15 = scan_code_from_hashboard(dword_1F0C90);
              if ( !v15 )
                continue;
              gFind_test_standard = 1;
              lcd_clear_result_pcba();
              lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
              lcd_show(1u, "Find test");
              lcd_show(2u, "standard");
              lcd_show(3u, "Press Start Key");
              puts("find test standard from local Config.ini, Press Start Key to Begin Test");
            }
          }
          if ( !strcmp(*(const char **)(g_config_info + 116), "keyboard") )
          {
            v15 = _isoc99_fscanf(stdin, "%s", s);
          }
          else
          {
            if ( strcmp(*(const char **)(g_config_info + 116), "button") )
            {
              puts("please assign ctrl type: keyboard or button");
              app_config_exit();
              return 0;
            }
            v12 = 1;
            v15 = gpio_read(943, &v12);
            s[0] = v12 + 48;
          }
          if ( v15 >= 0 && s[0] == 48 )
          {
            gScanCodeGun_data_ready = 0;
            gFind_test_standard = 0;
            if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 2
              || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 6
              || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 7
              || *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) == 5 )
            {
              if ( !strcmp(*(const char **)(g_config_info + 20), "PT1") )
              {
                singleBoardTest_asicminer(1);
              }
              else if ( !strcmp(*(const char **)(g_config_info + 20), "PT2") )
              {
                singleBoardTest_asicminer(2);
              }
              byte_47BE81 = 1;
              byte_47BE82 = 0;
              while ( byte_47BE81 )
              {
                check_whether_board_changed((int)&g_pcba_info);
                if ( byte_47BE82 )
                  byte_47BE81 = 0;
              }
            }
            else
            {
              singleBoardTest_fpgaminer();
            }
            sub_28DAC();
          }
          usleep(0x30D40u);
        }
      }
LABEL_18:
      lcd_show(1u, "Chain ERROR");
      printf("Chain error, now only find %d chain\n", pcba_total_device_no);
      v3 = (_UNKNOWN **)sleep(5u);
    }
  }
  puts("app_config_init failed");
  return -1;
}
