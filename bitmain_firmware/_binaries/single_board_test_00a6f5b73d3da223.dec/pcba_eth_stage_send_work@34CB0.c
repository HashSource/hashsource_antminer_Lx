int __fastcall pcba_eth_stage_send_work(int a1)
{
  pthread_mutex_lock(&stru_1F0D6C);
  dword_1F0D68 = a1;
  return pthread_mutex_unlock(&stru_1F0D6C);
}
