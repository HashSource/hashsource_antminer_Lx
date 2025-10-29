int get_current_pool()
{
  int v1; // [sp+4h] [bp-8h]

  pthread_mutex_lock(&stru_1518A8);
  v1 = dword_1518A4;
  pthread_mutex_unlock(&stru_1518A8);
  return v1;
}
