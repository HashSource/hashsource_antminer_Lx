void miner_monitor_deinit()
{
  int *v0; // r4
  void *v1; // r0

  v0 = (int *)&unk_168450;
  destroy_task_timer((_DWORD *)dword_1687A8);
  destroy_task_timer((_DWORD *)dword_1687A4);
  destroy_observable_subject((void *)dword_1687A0);
  destroy_observable_subject((void *)dword_168794);
  destroy_observable_subject((void *)dword_16879C);
  destroy_observable_subject((void *)dword_168798);
  destroy_observable_subject((void *)dword_168790);
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
  while ( v0 != &dword_168790 );
}
