int __fastcall sub_B5BBC(unsigned __int8 a1, char a2, _WORD *a3)
{
  __int16 s; // [sp+1Ch] [bp-8h] BYREF

  memset(&s, 0, sizeof(s));
  sub_B56B8(a1, a2, 33, (int)&s, 2);
  *a3 = (unsigned __int8)s | (HIBYTE(s) << 8);
  return 1;
}
