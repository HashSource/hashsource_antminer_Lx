int get_job_length()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0x11Cu, &v1);
  return v1;
}
