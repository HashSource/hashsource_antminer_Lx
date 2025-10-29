void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_47B344 )
  {
    dword_47B348 = 0;
    pthread_join(dword_47B34C, 0);
    delete_c_map((void ***)dword_47B340);
    pthread_mutex_destroy(&stru_47B328);
    v0 = sub_E4DF4(0x100u);
    gpio_unreg_callback(v0, 937617);
    v1 = sub_E4DF4(0x101u);
    gpio_unreg_callback(v1, 937617);
    v2 = sub_E4DF4(1u);
    gpio_unexport(v2);
    v3 = sub_E4DF4(2u);
    gpio_unexport(v3);
    v4 = sub_E4DF4(0x100u);
    gpio_unexport(v4);
    v5 = sub_E4DF4(0x101u);
    gpio_unexport(v5);
    gpio_uninit();
    dword_47B344 = 0;
  }
}
