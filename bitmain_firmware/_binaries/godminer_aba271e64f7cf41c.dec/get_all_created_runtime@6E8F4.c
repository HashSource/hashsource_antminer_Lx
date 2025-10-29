_DWORD *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_15F79C);
  *a1 = dword_15F798;
  pthread_mutex_unlock(&stru_15F79C);
  return dword_15F698;
}
