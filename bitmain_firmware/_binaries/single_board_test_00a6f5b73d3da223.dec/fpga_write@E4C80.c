int __fastcall fpga_write(unsigned int a1, int a2)
{
  *(_DWORD *)(4 * (a1 >> 2) + dword_47B31C) = a2;
  return 0;
}
