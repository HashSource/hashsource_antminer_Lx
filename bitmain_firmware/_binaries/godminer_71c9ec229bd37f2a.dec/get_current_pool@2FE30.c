int get_current_pool()
{
  int v0; // r4

  pthread_mutex_lock(&mutex);
  v0 = dword_16731C;
  pthread_mutex_unlock(&mutex);
  return v0;
}
