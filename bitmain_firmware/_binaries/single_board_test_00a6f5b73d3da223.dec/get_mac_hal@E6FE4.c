int __fastcall get_mac_hal(int a1)
{
  if ( a1 )
    return sub_1A4070("eth0", a1);
  else
    return -1;
}
