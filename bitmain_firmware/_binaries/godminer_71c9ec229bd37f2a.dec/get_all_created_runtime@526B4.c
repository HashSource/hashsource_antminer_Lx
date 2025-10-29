void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_16C728);
  *a1 = dword_16C740;
  pthread_mutex_unlock(&stru_16C728);
  return &unk_16C744;
}
