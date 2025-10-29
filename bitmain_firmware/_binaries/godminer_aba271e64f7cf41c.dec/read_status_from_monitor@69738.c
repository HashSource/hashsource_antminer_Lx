void __fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &dword_152900[56 * *(_DWORD *)(a2 + 248)], 0xE0u);
}
