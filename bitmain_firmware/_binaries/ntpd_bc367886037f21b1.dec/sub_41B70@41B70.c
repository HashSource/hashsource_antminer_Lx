unsigned int __fastcall sub_41B70(unsigned int result)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  unsigned int v5; // r5
  int v6; // r7
  unsigned int v7; // r8
  const char *v8; // r0
  unsigned int v9; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    v5 = result;
    sub_5F334(&v9);
    sub_2BB78((int)&dword_BBC04, v9);
    v6 = dword_BBC04;
    v7 = v9 / 0x15180;
    result = v9 % 0x15180;
    v9 %= 0x15180u;
    if ( dword_BBC04 )
    {
      v8 = (const char *)sub_63424(result);
      _fprintf_chk(v6, 1, "%lu %s %.9f %.3f %.9f %.6f %d\n", v7 + 15020, v8, v1, v2 * 1000000.0, v3, v4 * 1000000.0, v5);
      return fflush((FILE *)dword_BBC04);
    }
  }
  return result;
}
