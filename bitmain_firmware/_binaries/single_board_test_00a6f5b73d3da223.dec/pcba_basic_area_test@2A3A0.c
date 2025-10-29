int pcba_basic_area_test()
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
    printf("check basic system up : count %d\n", v2);
    sleep(1u);
  }
  if ( (unsigned __int8)pcba_start_basic(dword_1F0C8C, dword_1F0C90) != 1 )
    return 6;
  pcba_set_address(dword_1F0C8C);
  return pcba_fpga_ip_test(dword_1F0C8C);
}
