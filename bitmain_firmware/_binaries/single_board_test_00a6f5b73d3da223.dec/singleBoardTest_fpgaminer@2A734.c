int singleBoardTest_fpgaminer()
{
  int device_num; // [sp+0h] [bp+0h]
  int v2; // [sp+4h] [bp+4h]

  printf("%s begin\n", "singleBoardTest_fpgaminer");
  memset(&g_pcba_info, 0, 0x78u);
  memset(&ret_str, 0, 0x40u);
  (*(void (__fastcall **)(_DWORD))(dword_1F0C90 + 8))(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
  device_num = query_device_num();
  if ( device_num == 1 )
  {
    dword_1F0C8C = (int)runtime_ctrl(*(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4));
    *(_DWORD *)(dword_1F0C8C + 136) = 0;
    (*(void (__fastcall **)(int))dword_1F0C8C)(dword_1F0C8C);
    sub_2874C(0);
    g_pcba_info = 1;
    pthread_create(&dword_47BE40, 0, (void *(*)(void *))sub_29190, (void *)dword_1F0C8C);
    pthread_create(&dword_47BE3C, 0, (void *(*)(void *))sub_2925C, 0);
    v2 = pcba_boot_area_test();
    if ( v2 )
    {
      dword_47BEA0 = v2;
    }
    else
    {
      v2 = pcba_basic_area_test();
      if ( v2 )
      {
        dword_47BEA0 = v2;
      }
      else
      {
        v2 = pcba_miner_area_test();
        if ( v2 )
          dword_47BEA0 = v2;
        else
          puts("Test Pass");
      }
    }
  }
  else
  {
    g_lcd_result_with_data = 4;
    printf("check chain failed. query_device_num error code %d and then exit\n", device_num);
  }
  g_pcba_info = 0;
  sleep(2u);
  pthread_cancel(dword_47BE40);
  pthread_join(dword_47BE40, 0);
  pthread_cancel(dword_47BE3C);
  pthread_join(dword_47BE3C, 0);
  if ( v2 )
  {
    g_lcd_result_with_data = 18;
    pcba_fill_lcd_result((const char *)&ret_str);
  }
  else if ( !dword_47BE64 )
  {
    sub_28CE8();
  }
  pcba_display_result_on_lcd();
  if ( dword_1F0C8C )
  {
    if ( *(_BYTE *)(dword_1F0C8C + 144) )
      (*(void (__fastcall **)(int))(dword_1F0C8C + 16))(dword_1F0C8C);
    free((void *)dword_1F0C8C);
  }
  (*(void (**)(void))(dword_1F0C90 + 80))();
  printf("Test finished error_type = %d\n", v2);
  return 1;
}
