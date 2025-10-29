int __fastcall sub_37DB0(unsigned int a1)
{
  unsigned int v3; // [sp+Ch] [bp+Ch]

  v3 = (((a1 << 24) | HIBYTE(a1) | ((a1 & 0xFF0000) >> 8) | ((a1 & 0xFF00) << 8)) >> 24) & 0x7F;
  switch ( v3 )
  {
    case 0x7Fu:
      return 3;
    case 2u:
      return 2;
    case 1u:
      return 1;
    case 0u:
      return 0;
  }
  printf("%s unknow program type\n", "pcba_program_type_check");
  return -1;
}
