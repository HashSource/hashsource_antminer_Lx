bool __fastcall sub_35D38(unsigned int a1)
{
  return ((HIBYTE(a1) | ((a1 & 0xFF0000) >> 8)) & 1) != 0;
}
