int __fastcall set_QN_write_data_command(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x80u, a1);
  return fpga_read(0x80u, &v2);
}
