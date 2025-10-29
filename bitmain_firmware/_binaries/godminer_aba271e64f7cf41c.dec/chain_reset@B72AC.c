int __fastcall chain_reset(int a1)
{
  chain_reset_low(a1);
  usleep((__useconds_t)"time");
  return chain_reset_high(a1);
}
