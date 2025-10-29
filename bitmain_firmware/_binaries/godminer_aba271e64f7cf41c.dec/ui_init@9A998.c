int ui_init()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int i; // [sp+4h] [bp-8h]

  if ( !dword_15F9C8 )
  {
    v0 = sub_9A5FC(1u);
    gpio_export(v0);
    v1 = sub_9A5FC(1u);
    gpio_direction(v1, 1);
    v2 = sub_9A5FC(2u);
    gpio_export(v2);
    v3 = sub_9A5FC(2u);
    gpio_direction(v3, 1);
    v4 = sub_9A5FC(0x100u);
    gpio_export(v4);
    v5 = sub_9A5FC(0x101u);
    gpio_export(v5);
    v6 = sub_9A5FC(0x100u);
    gpio_reg_callback(v6, 632872);
    v7 = sub_9A5FC(0x101u);
    gpio_reg_callback(v7, 632872);
    pthread_mutex_init(&stru_15F9AC, 0);
    for ( i = 0; i <= 4; ++i )
      dword_15F9D4[i] = 0;
    dword_15F9C4 = (int)new_c_map(632260, 0, 0);
    dword_15F9CC = 1;
    pthread_create((pthread_t *)&dword_15F9D0, 0, (void *(*)(void *))sub_9A3EC, 0);
    dword_15F9C8 = 1;
  }
  return 0;
}
