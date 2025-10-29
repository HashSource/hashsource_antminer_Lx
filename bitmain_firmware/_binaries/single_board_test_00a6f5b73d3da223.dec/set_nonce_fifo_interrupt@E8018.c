int __fastcall set_nonce_fifo_interrupt(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x1Cu, a1);
  return fpga_read(0x1Cu, &v2);
}
