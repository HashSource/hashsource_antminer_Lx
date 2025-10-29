int __fastcall set_current_pool(int a1)
{
  pthread_mutex_lock(&stru_1518A8);
  dword_1518A4 = a1;
  pthread_cond_broadcast(&stru_1518C0);
  return pthread_mutex_unlock(&stru_1518A8);
}
