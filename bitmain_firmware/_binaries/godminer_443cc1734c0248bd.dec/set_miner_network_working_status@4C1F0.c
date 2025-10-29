char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_165284 )
  {
    byte_165288 = 0;
    byte_165289 = 0;
    byte_16528A = 0;
    byte_16528B = 0;
    byte_16528C = 0;
    byte_16528D = 0;
    byte_16528F = 0;
    byte_165290 = 0;
    byte_165284 = 1;
  }
  byte_16528E = result;
  return result;
}
