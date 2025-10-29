int __fastcall fpga_read(unsigned int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(4 * (a1 >> 2) + dword_47B31C);
  return 0;
}
