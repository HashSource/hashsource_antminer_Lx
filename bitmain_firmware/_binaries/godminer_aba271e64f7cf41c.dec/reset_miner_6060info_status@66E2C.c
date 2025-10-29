int reset_miner_6060info_status()
{
  pthread_mutex_lock(&miner_6060info_lock);
  memset(byte_152520, 0, 0x3E0u);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
