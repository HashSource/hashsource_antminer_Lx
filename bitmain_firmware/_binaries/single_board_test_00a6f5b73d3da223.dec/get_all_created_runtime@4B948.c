_DWORD *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_47A2B0);
  *a1 = dword_47A2AC;
  pthread_mutex_unlock(&stru_47A2B0);
  return dword_479EAC;
}
