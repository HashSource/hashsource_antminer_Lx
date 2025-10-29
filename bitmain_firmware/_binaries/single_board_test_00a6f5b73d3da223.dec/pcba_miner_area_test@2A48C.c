int pcba_miner_area_test()
{
  int v0; // r3
  int v2; // r3
  int v4; // [sp+4h] [bp+4h]
  int v5; // [sp+4h] [bp+4h]

  v4 = 0;
  while ( (unsigned __int8)pcba_match_fpga_baud(dword_1F0C8C, dword_1F0C90) != 1 )
  {
    v0 = v4;
    v5 = v4 + 1;
    if ( v0 > 10 )
    {
      memset(&ret_str, 0, 0x40u);
      strcpy((char *)&ret_str, "serial:match baud failed\n");
      return 9;
    }
    v2 = v5;
    v4 = v5 + 1;
    printf("check miner system up : count %d\n", v2);
    sleep(1u);
  }
  if ( (unsigned __int8)pcba_start_fpgaminer(dword_1F0C8C, dword_1F0C90) != 1 )
    return 7;
  pcba_set_chips_baud(dword_1F0C8C, dword_1F0C90, byte_2FAF08);
  (*(void (__fastcall **)(int))(dword_1F0C8C + 4))(dword_1F0C8C);
  if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 4) != 1 )
    {
      printf("%s unknow algo\n", "pcba_miner_area_test");
      exit(1);
    }
    *(_DWORD *)(dword_1F0C8C + 304) = 0;
    pcba_set_ticket_mask(dword_1F0C8C, 32);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  else
  {
    *(_DWORD *)(dword_1F0C8C + 304) = 1;
  }
  pthread_create(&newthread, 0, (void *(*)(void *))sub_293BC, (void *)dword_1F0C8C);
  usleep(0x30D40u);
  pthread_create(&dword_47BE38, 0, (void *(*)(void *))sub_29414, (void *)dword_1F0C8C);
  pthread_create(&dword_47BE30, 0, (void *(*)(void *))sub_2A080, (void *)dword_1F0C8C);
  sleep(2u);
  pthread_cancel(newthread);
  pthread_join(newthread, 0);
  pthread_cancel(dword_47BE38);
  pthread_join(dword_47BE38, 0);
  pthread_cancel(dword_47BE30);
  pthread_join(dword_47BE30, 0);
  if ( *(_BYTE *)(dword_1F0C8C + 146) )
  {
    printf("%s stop mining\n", "pcba_miner_area_test");
    (*(void (__fastcall **)(int))(dword_1F0C8C + 8))(dword_1F0C8C);
  }
  return 0;
}
