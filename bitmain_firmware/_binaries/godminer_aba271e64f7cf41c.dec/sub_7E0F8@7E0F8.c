int __fastcall sub_7E0F8(int a1)
{
  _DWORD s[4]; // [sp+Ch] [bp-18h] BYREF
  int v4; // [sp+1Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  s[2] = 3407873;
  s[0] = 0x80000000;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep((__useconds_t)"time");
  return v4;
}
