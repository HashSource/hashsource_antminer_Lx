int __fastcall set_time_out_control(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x88u, a1);
  return fpga_read(0x88u, &v2);
}
