void miner_monitor_deinit()
{
  int (**v0)(); // r0
  int v1; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  destroy_task_timer((_BYTE *)dword_153C00);
  destroy_task_timer((_BYTE *)dword_153C04);
  destroy_observable_subject((void *)dword_153C08);
  destroy_observable_subject((void *)dword_153C0C);
  destroy_observable_subject((void *)dword_153C10);
  destroy_observable_subject((void *)dword_153C14);
  v0 = dev_ctrl();
  v1 = (*v0)();
  for ( i = 0; i < v1; ++i )
  {
    free((void *)dword_152900[56 * i + 19]);
    free((void *)dword_152900[56 * i + 26]);
    free((void *)dword_152900[56 * i]);
    free((void *)dword_152900[56 * i + 2]);
    free((void *)dword_152900[56 * i + 1]);
    free((void *)dword_152900[56 * i + 4]);
    free((void *)dword_152900[56 * i + 3]);
  }
}
