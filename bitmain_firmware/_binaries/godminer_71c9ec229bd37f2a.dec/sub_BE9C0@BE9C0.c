int __fastcall sub_BE9C0(unsigned __int8 a1, char a2, _WORD *a3)
{
  __int16 v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  sub_BE76C(a1, a2, &v5);
  *a3 = (unsigned __int8)v5 | (HIBYTE(v5) << 8);
  return 1;
}
