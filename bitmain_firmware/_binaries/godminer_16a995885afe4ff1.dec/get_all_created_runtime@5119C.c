void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_16A700);
  *a1 = dword_16A718;
  pthread_mutex_unlock(&stru_16A700);
  return &unk_16A71C;
}
