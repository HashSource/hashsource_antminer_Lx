int miner_monitor_init()
{
  int (**v0)(); // r0
  int v2; // [sp+4h] [bp-10h]
  int j; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v0 = dev_ctrl();
  v2 = (*v0)();
  for ( i = 0; i < v2; ++i )
  {
    dword_152900[56 * i + 19] = calloc(0x100u, 1u);
    *(_BYTE *)dword_152900[56 * i + 19] = 63;
    dword_152900[56 * i + 26] = calloc(0x10u, 4u);
    dword_152900[56 * i + 27] = calloc(0x10u, 4u);
    dword_152900[56 * i + 2] = calloc(0x10u, 4u);
    dword_152900[56 * i + 1] = calloc(0x10u, 4u);
    dword_152900[56 * i] = calloc(0x10u, 4u);
    dword_152900[56 * i + 4] = calloc(0x10u, 4u);
    dword_152900[56 * i + 3] = calloc(0x10u, 4u);
    dword_152900[56 * i + 52] = 0;
    *(_QWORD *)&dword_152900[56 * i + 54] = 0;
    for ( j = 0; j <= 15; ++j )
    {
      *(_DWORD *)(dword_152900[56 * i + 2] + 4 * j) = -64;
      *(_DWORD *)(dword_152900[56 * i + 1] + 4 * j) = -64;
      *(_DWORD *)(dword_152900[56 * i] + 4 * j) = -64;
    }
    init_temp_senor_info((int)&dword_152900[56 * i]);
  }
  dword_153C08 = (int)new_observable_subject();
  dword_153C0C = (int)new_observable_subject();
  dword_153C10 = (int)new_observable_subject();
  dword_153C14 = (int)new_observable_subject();
  dword_153C04 = (int)new_task_timer();
  add_new_task(dword_153C04, 426412, 1000);
  add_new_task(dword_153C04, 427124, 120000);
  add_new_task(dword_153C04, 427836, 60000);
  if ( is_test_pool != 1 )
  {
    add_new_task(dword_153C04, (int)update_droa_log, 180000);
    add_new_task(dword_153C04, (int)update_timestamp_file, 180000);
  }
  dword_153C00 = (int)new_task_timer();
  add_new_task(dword_153C00, 426768, 5000);
  add_new_task(dword_153C00, 427480, 1000);
  return add_new_task(dword_153C00, (int)task_check_miner_status, 1000);
}
