int get_job_id()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x124u, &v1);
  return v1;
}
