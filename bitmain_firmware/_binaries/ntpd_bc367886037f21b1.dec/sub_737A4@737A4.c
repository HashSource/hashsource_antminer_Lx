int sub_737A4()
{
  int result; // r0

  result = pthread_once(&dword_106260, (void (*)(void))sub_7373C);
  if ( result )
    sub_6F24C("./../lib/isc/unix/net.c", 221, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
