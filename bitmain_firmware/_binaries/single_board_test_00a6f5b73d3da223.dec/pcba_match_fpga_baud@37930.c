int __fastcall pcba_match_fpga_baud(int a1, int a2)
{
  int v2; // r2
  char *v7; // [sp+8h] [bp+8h]
  int v8; // [sp+Ch] [bp+Ch]
  int v9; // [sp+10h] [bp+10h]
  int v10; // [sp+14h] [bp+14h]
  signed int v11; // [sp+18h] [bp+18h]
  unsigned int i; // [sp+1Ch] [bp+1Ch]
  _BYTE v13[4]; // [sp+20h] [bp+20h] BYREF

  v7 = "stem_Config_File_Information";
  v8 = 460800;
  v9 = 921600;
  v10 = 3125000;
  v11 = *(_DWORD *)(a1 + 196);
  for ( i = 0; i <= 3; ++i )
  {
    (*(void (__fastcall **)(_DWORD))(a2 + 16))(*(_DWORD *)&v13[4 * i - 24]);
    usleep(0x7A120u);
    v2 = sub_35C00(a1, 0, v11, 0);
    if ( v2 == v11 )
    {
      printf("current baudrate %d bps\n", *(_DWORD *)&v13[4 * i - 24]);
      return 1;
    }
  }
  printf("%s not match baudrate\n", "pcba_match_fpga_baud");
  return 0;
}
