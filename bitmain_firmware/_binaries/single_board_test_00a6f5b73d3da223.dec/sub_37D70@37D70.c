bool __fastcall sub_37D70(unsigned int a1)
{
  return (((a1 << 24) | HIBYTE(a1) | ((a1 & 0xFF0000) >> 8) | ((a1 & 0xFF00) << 8)) & 0x80000000) == 0;
}
