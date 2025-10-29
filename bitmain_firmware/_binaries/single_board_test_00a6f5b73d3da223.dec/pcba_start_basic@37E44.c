int __fastcall pcba_start_basic(int a1, int a2)
{
  _DWORD *v5; // [sp+8h] [bp+8h]
  int nmemb; // [sp+Ch] [bp+Ch]
  int i; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]

  nmemb = *(_DWORD *)(a1 + 196);
  v5 = calloc(nmemb, 8u);
  sub_35BB8(a1, 0xFCu, -1425866752);
  usleep(0x30D40u);
  (*(void (__fastcall **)(int))(a2 + 16))(115200);
  while ( 1 )
  {
    while ( 1 )
    {
      sleep(1u);
      if ( sub_35C00(a1, 0xFCu, nmemb, (int)v5) >= nmemb )
        break;
      printf("%s[%d] is waiting\n", "pcba_start_basic", 1003);
    }
    v8 = 0;
    for ( i = 0; i < nmemb; ++i )
    {
      printf("%s %02x reg_data %08x\n", "pcba_start_basic", LOBYTE(v5[2 * i]), v5[2 * i + 1]);
      if ( sub_37DB0(v5[2 * i + 1]) == 3 )
        ++v8;
    }
    if ( v8 == nmemb )
      break;
    printf("%s[%d] starting %d\n", "pcba_start_basic", 1019, v8);
  }
  printf("%s[%d] success\n", "pcba_start_basic", 1015);
  return 1;
}
