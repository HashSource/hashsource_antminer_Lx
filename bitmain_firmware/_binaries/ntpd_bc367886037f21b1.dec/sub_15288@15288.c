__int16 *__fastcall sub_15288(unsigned int a1, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_637E4(0, 12, 0, 0);
  v4[1] = a1;
  v4[2] = a2;
  *v4 = fd_list;
  fd_list = (int)v4;
  return sub_150DC(a1, 0);
}
