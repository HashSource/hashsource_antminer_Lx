int sub_113F8()
{
  int result; // r0

  result = pthread_once(&dword_3334C, (void (*)(void))sub_11390);
  if ( result )
    sub_15154(
      "./../lib/isc/unix/net.c",
      221,
      "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0",
      _stack_chk_guard);
  return result;
}
