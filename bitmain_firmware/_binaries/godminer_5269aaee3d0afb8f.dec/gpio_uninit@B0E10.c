int gpio_uninit()
{
  int result; // r0

  if ( dword_16C0CC )
  {
    dword_16C104 = 0;
    pthread_join(dword_16C108, 0);
    pthread_mutex_destroy(&stru_16C0D0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16C0E8);
    dword_16C0CC = 0;
    return pthread_mutex_destroy(&stru_16C0EC);
  }
  return result;
}
