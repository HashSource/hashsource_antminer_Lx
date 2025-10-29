int __fastcall sub_F7C84(unsigned __int8 a1, char a2, _WORD *a3)
{
  __int16 s; // [sp+1Ch] [bp+14h] BYREF

  memset(&s, 0, sizeof(s));
  sub_F7748(a1, a2, 33, (int)&s, 2);
  *a3 = (HIBYTE(s) << 8) | (unsigned __int8)s;
  return 1;
}
