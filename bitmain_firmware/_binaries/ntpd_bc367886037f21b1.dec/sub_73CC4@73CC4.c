int sub_73CC4()
{
  if ( pthread_once(&dword_106264, (void (*)(void))sub_738EC) )
    sub_6F24C("./../lib/isc/unix/net.c", 317, "((pthread_once((&once_ipv6only), (try_ipv6only)) == 0) ? 0 : 34) == 0");
  return dword_B6DDC;
}
