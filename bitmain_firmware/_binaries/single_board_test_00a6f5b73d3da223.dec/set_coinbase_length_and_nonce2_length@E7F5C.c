int __fastcall set_coinbase_length_and_nonce2_length(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x104u, a1);
  return fpga_read(0x104u, &v2);
}
