void __fastcall sub_CAE8C(int a1)
{
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 36));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 60));
  pthread_cond_destroy((pthread_cond_t *)(a1 + 88));
  pthread_cond_destroy((pthread_cond_t *)(a1 + 136));
  free(*(void **)(a1 + 12));
  free((void *)a1);
}
