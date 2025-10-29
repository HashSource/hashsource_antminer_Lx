int gpio_uninit()
{
  int result; // r0

  if ( dword_16AFCC )
  {
    dword_16B004 = 0;
    pthread_join(dword_16B008, 0);
    pthread_mutex_destroy(&stru_16AFD0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16AFE8);
    dword_16AFCC = 0;
    return pthread_mutex_destroy(&stru_16AFEC);
  }
  return result;
}
