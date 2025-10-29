int __fastcall set_job_start_address(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x118u, a1);
  return fpga_read(0x118u, &v2);
}
