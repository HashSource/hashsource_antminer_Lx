int __fastcall get_chip_bin(int a1)
{
  switch ( *(_BYTE *)(a1 + 67) )
  {
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
  }
  printf("Can't get chip bin number. chip_bin: %s\n", (const char *)(a1 + 64));
  return 255;
}
