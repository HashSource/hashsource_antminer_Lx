int __fastcall fpga_write(int a1, int a2)
{
  unsigned int v2; // r2

  v2 = a1 & 0xFFFFFFFC;
  *(_DWORD *)(dword_16E0F0 + v2) = a2;
  return 0;
}
