int __fastcall pcba_setup_all_chip_dash(int a1)
{
  char v1; // r4
  char v2; // r0
  char *ptr; // [sp+8h] [bp+8h]

  *(_DWORD *)(a1 + 240) = makeup_chip_addr_dash(*(_DWORD *)(a1 + 296), 0x46u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 70);
  sub_24620(a1, 70);
  sub_254F8(a1);
  usleep(0x61A8u);
  set_ticket_mask_dash(a1, 0xFFu);
  ptr = (char *)calloc(1u, 0xB0u);
  v1 = *(_DWORD *)(a1 + 136);
  v2 = rand();
  memset(ptr + 40, (unsigned __int8)(v2 + v1), 0x50u);
  push_work_base(a1, (int)ptr);
  free(ptr);
  sub_24620(a1, 70);
  if ( *(_BYTE *)(a1 + 268) != 1 )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return 0;
}
