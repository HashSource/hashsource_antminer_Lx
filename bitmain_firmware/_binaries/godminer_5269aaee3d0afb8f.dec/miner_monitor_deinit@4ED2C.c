void miner_monitor_deinit()
{
  int *v0; // r4
  void *v1; // r0

  v0 = (int *)&unk_166428;
  destroy_task_timer((_DWORD *)dword_166780);
  destroy_task_timer((_DWORD *)dword_16677C);
  destroy_observable_subject((void *)dword_166778);
  destroy_observable_subject((void *)dword_16676C);
  destroy_observable_subject((void *)dword_166774);
  destroy_observable_subject((void *)dword_166770);
  destroy_observable_subject((void *)dword_166768);
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
  while ( v0 != &dword_166768 );
}
