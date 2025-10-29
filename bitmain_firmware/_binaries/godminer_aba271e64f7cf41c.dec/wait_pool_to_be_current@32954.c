int __fastcall wait_pool_to_be_current(int a1)
{
  pthread_mutex_lock(&stru_1518A8);
  while ( a1 != dword_1518A4 )
    pthread_cond_wait(&stru_1518C0, &stru_1518A8);
  return pthread_mutex_unlock(&stru_1518A8);
}
