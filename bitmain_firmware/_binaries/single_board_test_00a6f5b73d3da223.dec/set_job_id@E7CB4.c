int __fastcall set_job_id(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x124u, a1);
  return fpga_read(0x124u, &v2);
}
