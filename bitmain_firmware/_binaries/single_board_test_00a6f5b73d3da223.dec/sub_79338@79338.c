unsigned int __fastcall sub_79338(unsigned int a1)
{
  return HIBYTE(a1) | (a1 << 24) | ((a1 & 0xFF00) << 8) | ((a1 & 0xFF0000) >> 8);
}
