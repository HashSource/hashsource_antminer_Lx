int gpio_uninit()
{
  int result; // r0

  if ( dword_16051C )
  {
    dword_160520 = 0;
    pthread_join(dword_160524, 0);
    pthread_mutex_destroy(&stru_160540);
    delete_c_map((void ***)dword_160558);
    dword_16051C = 0;
    return pthread_mutex_destroy(&stru_160528);
  }
  return result;
}
