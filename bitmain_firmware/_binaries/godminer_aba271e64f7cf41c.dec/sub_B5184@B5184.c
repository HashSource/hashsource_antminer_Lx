int __fastcall sub_B5184(unsigned __int8 a1, void *a2, size_t a3)
{
  return iic_read(g_bitmain_pic_state[2 * a1], a2, a3);
}
