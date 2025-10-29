int ui_uninit()
{
  int result; // r0

  if ( dword_16E494 )
  {
    dword_16E460[0] = 0;
    pthread_join(dword_16E498, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16E47C);
    pthread_mutex_destroy(&stru_16E464);
    gpio_unreg_callback(921, 745132);
    gpio_unreg_callback(943, 745132);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_16E494 = 0;
  }
  return result;
}
