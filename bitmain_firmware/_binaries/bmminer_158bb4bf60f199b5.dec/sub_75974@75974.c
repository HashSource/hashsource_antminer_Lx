int __fastcall sub_75974(unsigned int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  return sub_748C4(a1, 0, a2, 0x1Cu, (a5 | (a4 << 8)) & 0x3900FFFF | 0x10000 | (a3 >> 1 << 17) & 0x39FFFFFF | 0x1000000);
}
