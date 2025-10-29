int gpio_uninit()
{
  int result; // r0

  if ( dword_47B564 )
  {
    dword_47B568 = 0;
    pthread_join(dword_47B56C, 0);
    pthread_mutex_destroy(&stru_47B588);
    delete_c_map((void ***)dword_47B5A0);
    dword_47B564 = 0;
    return pthread_mutex_destroy(&stru_47B570);
  }
  return result;
}
