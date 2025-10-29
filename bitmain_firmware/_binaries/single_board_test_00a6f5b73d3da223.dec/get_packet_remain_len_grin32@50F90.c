int __fastcall get_packet_remain_len_grin32(unsigned __int8 a1)
{
  int v1; // r3

  if ( a1 == 33 )
    return 176;
  if ( !a1 )
    return 7;
  v1 = a1;
  if ( a1 == 1 )
    return 9;
  return v1;
}
