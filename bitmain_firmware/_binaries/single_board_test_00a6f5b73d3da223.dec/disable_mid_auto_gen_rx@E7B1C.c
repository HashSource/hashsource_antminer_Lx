int disable_mid_auto_gen_rx()
{
  return fpga_write(0xF8u, 0x10000);
}
