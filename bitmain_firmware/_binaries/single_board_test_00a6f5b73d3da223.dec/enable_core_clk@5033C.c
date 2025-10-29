int __fastcall enable_core_clk(int a1)
{
  _DWORD s[4]; // [sp+8h] [bp+8h] BYREF

  memset(s, 0, sizeof(s));
  s[2] = 1441793;
  s[0] = -2147483647;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
}
