unsigned int __fastcall sub_41A3C(int a1, int a2)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  unsigned int result; // r0
  int v9; // r8
  unsigned int v10; // r9
  const char *v11; // r10
  const char *v12; // r0
  unsigned int v13; // [sp+34h] [bp-Ch] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_5F334(&v13);
    sub_2BB78((int)&dword_BBBEC, v13);
    v9 = dword_BBBEC;
    v10 = v13 / 0x15180;
    result = v13 % 0x15180;
    v13 %= 0x15180u;
    if ( dword_BBBEC )
    {
      v11 = (const char *)sub_63424(result);
      v12 = (const char *)sub_6BF44(a1);
      _fprintf_chk(v9, 1, "%lu %s %s %x %.9f %.9f %.9f %.9f\n", v10 + 15020, v11, v12, a2, v2, v3, v4, v5);
      return fflush((FILE *)dword_BBBEC);
    }
  }
  return result;
}
