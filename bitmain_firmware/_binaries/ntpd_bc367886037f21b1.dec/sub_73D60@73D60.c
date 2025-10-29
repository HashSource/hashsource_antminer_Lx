int sub_73D60()
{
  if ( pthread_once(&dword_106268, (void (*)(void))sub_73B20) )
    sub_6F24C(
      "./../lib/isc/unix/net.c",
      370,
      "((pthread_once((&once_ipv6pktinfo), (try_ipv6pktinfo)) == 0) ? 0 : 34) == 0");
  return dword_B6DE0;
}
