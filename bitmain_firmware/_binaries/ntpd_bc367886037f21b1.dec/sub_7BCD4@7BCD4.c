int sub_7BCD4()
{
  int result; // r0

  result = pthread_once(&dword_1062BC, sub_7BC78);
  if ( result )
    sub_6F24C("./../lib/isc/random.c", 60, "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
  return result;
}
