void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_15F9C8 )
  {
    dword_15F9CC = 0;
    pthread_join(dword_15F9D0, 0);
    delete_c_map((void ***)dword_15F9C4);
    pthread_mutex_destroy(&stru_15F9AC);
    v0 = sub_9A5FC(0x100u);
    gpio_unreg_callback(v0, 632872);
    v1 = sub_9A5FC(0x101u);
    gpio_unreg_callback(v1, 632872);
    v2 = sub_9A5FC(1u);
    gpio_unexport(v2);
    v3 = sub_9A5FC(2u);
    gpio_unexport(v3);
    v4 = sub_9A5FC(0x100u);
    gpio_unexport(v4);
    v5 = sub_9A5FC(0x101u);
    gpio_unexport(v5);
    dword_15F9C8 = 0;
  }
}
