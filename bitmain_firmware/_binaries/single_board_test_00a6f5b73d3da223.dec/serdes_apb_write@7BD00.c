int __fastcall serdes_apb_write(int a1, int a2, char a3, unsigned __int16 a4, int a5)
{
  sub_789C4(a1, a3, 144, a5);
  sub_789C4(a1, a3, 145, a4 | 0x80000000);
  return 0;
}
