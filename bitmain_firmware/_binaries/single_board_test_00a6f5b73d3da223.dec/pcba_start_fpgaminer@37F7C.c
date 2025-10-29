int __fastcall pcba_start_fpgaminer(int a1, int a2)
{
  _DWORD *v5; // [sp+8h] [bp+8h]
  int nmemb; // [sp+Ch] [bp+Ch]
  int i; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]

  nmemb = *(_DWORD *)(a1 + 196);
  v5 = calloc(nmemb, 8u);
  sub_35BB8(a1, 0xFCu, -1425997824);
  usleep(0x30D40u);
  (*(void (__fastcall **)(int))(a2 + 16))(115200);
  while ( 1 )
  {
    while ( 1 )
    {
      sleep(1u);
      if ( sub_35C00(a1, 0xFCu, nmemb, (int)v5) >= nmemb )
        break;
      printf("%s[%d] is waiting\n", "pcba_start_fpgaminer", 1042);
    }
    v8 = 0;
    for ( i = 0; i < nmemb; ++i )
    {
      printf("%s chip%d reg_data %08x\n", "pcba_start_fpgaminer", i, v5[2 * i + 1]);
      fpga_type[i] = sub_37D70(v5[2 * i + 1]);
      if ( sub_37DB0(v5[2 * i + 1]) > 0 && sub_37DB0(v5[2 * i + 1]) <= 2 )
        ++v8;
    }
    if ( v8 == nmemb )
      break;
    printf("%s[%d] starting %d\n", "pcba_start_fpgaminer", 1065, v8);
  }
  printf("%s[%d] success\n", "pcba_start_fpgaminer", 1059);
  return 1;
}
