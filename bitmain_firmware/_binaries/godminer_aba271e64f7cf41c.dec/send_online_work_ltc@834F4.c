int __fastcall send_online_work_ltc(int a1)
{
  int (**v1)(); // r0
  _BYTE dest[88]; // [sp+8h] [bp-64h] BYREF
  int v6; // [sp+60h] [bp-Ch]
  int v7; // [sp+64h] [bp-8h]

  v7 = 10;
  memcpy(dest, &unk_1242BC, 0x56u);
  v6 = 86;
  puts("send online pattern");
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1072));
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _BYTE *, int))v1[13])(*(_DWORD *)(a1 + 248), dest, v6);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1072));
  while ( v7-- )
    usleep(0x2710u);
  return 0;
}
