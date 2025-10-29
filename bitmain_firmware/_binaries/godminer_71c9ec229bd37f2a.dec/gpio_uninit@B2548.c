int gpio_uninit()
{
  int result; // r0

  if ( dword_16E0F8 )
  {
    dword_16E130 = 0;
    pthread_join(dword_16E134, 0);
    pthread_mutex_destroy(&stru_16E0FC);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16E114);
    dword_16E0F8 = 0;
    return pthread_mutex_destroy(&stru_16E118);
  }
  return result;
}
