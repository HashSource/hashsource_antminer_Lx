int sub_11918()
{
  int v0; // r3

  if ( pthread_once(&dword_33350, (void (*)(void))sub_11540) )
    sub_15154(
      "./../lib/isc/unix/net.c",
      317,
      "((pthread_once((&once_ipv6only), (try_ipv6only)) == 0) ? 0 : 34) == 0",
      v0);
  return dword_310E0;
}
