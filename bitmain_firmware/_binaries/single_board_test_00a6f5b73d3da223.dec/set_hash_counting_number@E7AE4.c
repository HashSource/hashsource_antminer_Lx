int __fastcall set_hash_counting_number(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x90u, a1);
  return fpga_read(0x90u, &v2);
}
