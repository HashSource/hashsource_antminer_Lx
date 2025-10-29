int ui_uninit()
{
  int result; // r0

  if ( dword_16B368 )
  {
    dword_16B334[0] = 0;
    pthread_join(dword_16B36C, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16B350);
    pthread_mutex_destroy(&stru_16B338);
    gpio_unreg_callback(921, (int)sub_B382C);
    gpio_unreg_callback(943, (int)sub_B382C);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_16B368 = 0;
  }
  return result;
}
