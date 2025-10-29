int __fastcall stop_mining_eth(int a1)
{
  _UNKNOWN **v1; // r0

  (*(void (__fastcall **)(int))(a1 + 48))(a1);
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[9])(*(_DWORD *)(a1 + 136));
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  set_ticketmask(a1, 63);
  sub_78860(a1, 82, 9);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_788A8(a1, 12, 2);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
