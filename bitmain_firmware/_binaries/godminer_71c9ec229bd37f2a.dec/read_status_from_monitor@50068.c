void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &dword_168310[52 * *(_DWORD *)(a2 + 144) + 80], 0xD0u);
  return a1;
}
