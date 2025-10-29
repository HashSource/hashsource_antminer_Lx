int __fastcall serdes_apb_write_1_chip(int a1, char a2, char a3, unsigned __int16 a4, int a5)
{
  sub_78960(a1, a2, a3, 144, a5);
  sub_78960(a1, a2, a3, 145, a4 | 0x80000000);
  return 0;
}
