int miner_6060info_errorcode_uninit()
{
  pthread_mutex_lock(&stru_152504);
  if ( byte_15251C == 1 )
  {
    byte_15251C = 0;
    usleep(0x3E8u);
    sub_6545C(dword_152500);
  }
  return pthread_mutex_unlock(&stru_152504);
}
