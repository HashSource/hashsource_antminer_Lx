int __fastcall set_nonce2_and_job_id_store_address(int a1)
{
  int v3; // [sp+Ch] [bp+Ch] BYREF

  fpga_read(0x110u, &v3);
  fpga_write(0x110u, a1);
  return fpga_read(0x110u, &v3);
}
