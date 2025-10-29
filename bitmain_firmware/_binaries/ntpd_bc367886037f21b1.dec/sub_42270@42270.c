int __fastcall sub_42270(int a1, const char *a2)
{
  int result; // r0
  int v5; // r8
  unsigned int v6; // r7
  unsigned int v7; // r7
  const char *v8; // r9
  const char *v9; // r0
  const char *v10; // r0
  unsigned int v11; // [sp+14h] [bp-10h] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_5F334(&v11);
    sub_2BB78((int)&dword_BBC7C, v11);
    v5 = dword_BBC7C;
    v6 = v11 / 0x15180;
    result = v11 - (_DWORD)&loc_15180 * (v11 / 0x15180);
    v11 = result;
    if ( dword_BBC7C )
    {
      v7 = v6 + 15020;
      if ( a1 )
      {
        v8 = (const char *)sub_63424(result);
        v9 = (const char *)sub_6BF44(a1);
        _fprintf_chk(v5, 1, "%lu %s %s %s\n", v7, v8, v9, a2);
      }
      else
      {
        v10 = (const char *)sub_63424(result);
        _fprintf_chk(v5, 1, "%lu %s 0.0.0.0 %s\n", v7, v10, a2);
      }
      return fflush((FILE *)dword_BBC7C);
    }
  }
  return result;
}
