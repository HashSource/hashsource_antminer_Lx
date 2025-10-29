unsigned int __fastcall sub_42178(unsigned int result)
{
  const char *v1; // r5
  int v2; // r7
  unsigned int v3; // r8
  const char *v4; // r0
  unsigned int v5; // [sp+Ch] [bp-Ch] BYREF

  if ( stats_control )
  {
    v1 = (const char *)result;
    sub_5F334(&v5);
    sub_2BB78((int)&dword_BBC64, v5);
    v2 = dword_BBC64;
    v3 = v5 / 0x15180;
    result = v5 % 0x15180;
    v5 %= 0x15180u;
    if ( dword_BBC64 )
    {
      v4 = (const char *)sub_63424(result);
      _fprintf_chk(v2, 1, "%lu %s %s\n", v3 + 15020, v4, v1);
      return fflush((FILE *)dword_BBC64);
    }
  }
  return result;
}
