int sub_74FD8()
{
  int result; // r0

  sub_70014();
  result = pthread_once(&dword_10628C, (void (*)(void))sub_74EB8);
  if ( result )
    sub_6F24C("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
