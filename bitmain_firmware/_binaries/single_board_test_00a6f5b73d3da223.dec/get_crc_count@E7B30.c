int get_crc_count()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  fpga_read(0xF8u, &v1);
  return (unsigned __int16)v1;
}
