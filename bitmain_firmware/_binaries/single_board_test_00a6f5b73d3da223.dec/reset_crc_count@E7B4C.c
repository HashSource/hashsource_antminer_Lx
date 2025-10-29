int __fastcall reset_crc_count(char a1)
{
  if ( a1 )
    return fpga_write(0xF8u, 0x80000000);
  else
    return fpga_write(0xF8u, 0);
}
