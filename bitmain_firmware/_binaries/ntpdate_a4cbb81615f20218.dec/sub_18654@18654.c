int sub_18654()
{
  int result; // r0

  sub_10E04();
  result = pthread_once(&dword_333A8, (void (*)(void))sub_18534);
  if ( result )
    sub_15154("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
