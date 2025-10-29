int __fastcall pcba_set_baud(int a1, int a2, int a3)
{
  (*(void (__fastcall **)(int, int))(a1 + 76))(a1, a3);
  usleep(0x2710u);
  return (*(int (__fastcall **)(int))(a2 + 16))(a3);
}
