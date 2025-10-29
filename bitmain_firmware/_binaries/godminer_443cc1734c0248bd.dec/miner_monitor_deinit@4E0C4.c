void miner_monitor_deinit()
{
  int *v0; // r4
  void *v1; // r0

  v0 = (int *)&unk_165410;
  destroy_task_timer((_DWORD *)dword_165768);
  destroy_task_timer((_DWORD *)dword_165764);
  destroy_observable_subject((void *)dword_165760);
  destroy_observable_subject((void *)dword_165754);
  destroy_observable_subject((void *)dword_16575C);
  destroy_observable_subject((void *)dword_165758);
  destroy_observable_subject((void *)dword_165750);
  do
  {
    v1 = (void *)v0[15];
    v0 += 52;
    free(v1);
    free((void *)*(v0 - 30));
    free((void *)*(v0 - 51));
    free((void *)*(v0 - 52));
    free((void *)*(v0 - 49));
    free((void *)*(v0 - 50));
  }
  while ( v0 != &dword_165750 );
}
