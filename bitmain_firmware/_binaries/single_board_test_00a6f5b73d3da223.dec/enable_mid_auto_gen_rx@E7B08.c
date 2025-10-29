int enable_mid_auto_gen_rx()
{
  return fpga_write(0xF8u, 196608);
}
