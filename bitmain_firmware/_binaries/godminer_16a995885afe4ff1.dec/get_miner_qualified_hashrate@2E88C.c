int get_miner_qualified_hashrate()
{
  if ( opt_algo == 6 )
    return sub_2DCC0();
  else
    return 0;
}
