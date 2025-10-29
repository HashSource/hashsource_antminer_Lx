int __fastcall get_mac(int a1)
{
  if ( a1 )
    return sub_B6DC4("eth0", a1);
  else
    return -1;
}
