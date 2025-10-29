char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_16629C )
  {
    byte_1662A0 = 0;
    byte_1662A1 = 0;
    byte_1662A2 = 0;
    byte_1662A3 = 0;
    byte_1662A4 = 0;
    byte_1662A5 = 0;
    byte_1662A7 = 0;
    byte_1662A8 = 0;
    byte_16629C = 1;
  }
  byte_1662A6 = result;
  return result;
}
