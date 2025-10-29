int get_nonce2_and_job_id_store_address()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x110u, &v1);
  return v1;
}
