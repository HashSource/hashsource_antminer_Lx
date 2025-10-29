int __fastcall set_job_length(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x11Cu, a1);
  return fpga_read(0x11Cu, &v2);
}
