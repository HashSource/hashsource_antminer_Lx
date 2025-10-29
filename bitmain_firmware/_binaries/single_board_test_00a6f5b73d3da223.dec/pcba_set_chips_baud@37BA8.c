int __fastcall pcba_set_chips_baud(int a1, int a2, char *a3)
{
  unsigned int v7; // [sp+14h] [bp+14h]

  v7 = sub_37AE8(a3);
  sub_35BB8(a1, 0x1Cu, v7);
  usleep(0xF4240u);
  (*(void (__fastcall **)(char *))(a2 + 16))(a3);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 1;
}
