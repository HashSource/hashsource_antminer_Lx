int __fastcall set_time_stamp(int a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF

  fpga_write(0x134u, a1);
  return fpga_read(0x134u, &v2);
}
