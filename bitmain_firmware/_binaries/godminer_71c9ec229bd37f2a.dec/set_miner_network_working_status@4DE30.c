char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_1682C4 )
  {
    byte_1682C8 = 0;
    byte_1682C9 = 0;
    byte_1682CA = 0;
    byte_1682CB = 0;
    byte_1682CC = 0;
    byte_1682CD = 0;
    byte_1682CF = 0;
    byte_1682D0 = 0;
    byte_1682C4 = 1;
  }
  byte_1682CE = result;
  return result;
}
