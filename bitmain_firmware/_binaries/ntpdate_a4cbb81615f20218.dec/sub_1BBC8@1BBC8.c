int sub_1BBC8()
{
  int result; // r0

  result = pthread_once(dword_333BC, sub_1BB6C);
  if ( result )
    sub_15154("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
