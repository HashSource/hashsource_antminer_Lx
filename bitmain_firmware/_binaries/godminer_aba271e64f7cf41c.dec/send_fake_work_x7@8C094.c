int __fastcall send_fake_work_x7(int a1)
{
  int (**v1)(); // r0
  unsigned int v2; // r0
  int (**v3)(); // r0
  _BYTE dest[92]; // [sp+Ch] [bp-68h] BYREF
  unsigned int v8; // [sp+68h] [bp-Ch]
  int v9; // [sp+6Ch] [bp-8h]

  v9 = 3;
  memcpy(dest, &unk_12DDA8, sizeof(dest));
  v8 = 92;
  printf("send %d triger work\n", 3);
  while ( v9-- )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 1072));
    do
    {
      v1 = dev_ctrl();
      v2 = ((int (__fastcall *)(_DWORD))v1[17])(*(_DWORD *)(a1 + 248));
    }
    while ( v8 > v2 );
    v3 = dev_ctrl();
    ((void (__fastcall *)(_DWORD, _BYTE *, unsigned int))v3[13])(*(_DWORD *)(a1 + 248), dest, v8);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1072));
    usleep(0x2710u);
  }
  return 0;
}
