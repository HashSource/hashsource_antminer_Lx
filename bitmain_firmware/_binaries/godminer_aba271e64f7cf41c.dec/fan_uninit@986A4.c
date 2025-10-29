int fan_uninit()
{
  dword_15F938 = 0;
  return pthread_join(dword_15F934, 0);
}
