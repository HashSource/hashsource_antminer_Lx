void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_169600);
  *a1 = dword_169618;
  pthread_mutex_unlock(&stru_169600);
  return &unk_16961C;
}
