int __fastcall sub_F71A4(unsigned __int8 a1, int a2, unsigned int a3)
{
  return iic_write(g_bitmain_pic_state[2 * a1], a2, a3);
}
