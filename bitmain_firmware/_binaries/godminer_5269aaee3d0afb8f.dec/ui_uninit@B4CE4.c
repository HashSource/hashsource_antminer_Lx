int ui_uninit()
{
  int v0; // r1
  int v1; // r1
  int result; // r0

  if ( dword_16C468 )
  {
    dword_16C434[0] = 0;
    pthread_join(dword_16C46C, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16C450);
    pthread_mutex_destroy(&stru_16C438);
    LOWORD(v0) = 18292;
    HIWORD(v0) = (unsigned int)&loc_B382C >> 16;
    gpio_unreg_callback(921, v0);
    LOWORD(v1) = 18292;
    HIWORD(v1) = (unsigned int)&loc_B382C >> 16;
    gpio_unreg_callback(943, v1);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_16C468 = 0;
  }
  return result;
}
