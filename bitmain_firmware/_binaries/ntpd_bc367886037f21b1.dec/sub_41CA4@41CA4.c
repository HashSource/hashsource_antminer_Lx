unsigned int __fastcall sub_41CA4(int a1, const char *a2)
{
  unsigned int result; // r0
  int v5; // r8
  unsigned int v6; // r9
  const char *v7; // r10
  const char *v8; // r0
  unsigned int v9; // [sp+14h] [bp-Ch] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_5F334(&v9);
    sub_2BB78((int)&dword_BBC1C, v9);
    v5 = dword_BBC1C;
    v6 = v9 / 0x15180;
    result = v9 % 0x15180;
    v9 %= 0x15180u;
    if ( dword_BBC1C )
    {
      v7 = (const char *)sub_63424(result);
      v8 = (const char *)sub_6BF44(a1);
      _fprintf_chk(v5, 1, "%lu %s %s %s\n", v6 + 15020, v7, v8, a2);
      return fflush((FILE *)dword_BBC1C);
    }
  }
  return result;
}
