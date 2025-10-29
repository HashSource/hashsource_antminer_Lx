int __fastcall sub_5F70C(int a1)
{
  _DWORD s[4]; // [sp+Ch] [bp+Ch] BYREF
  int v4; // [sp+1Ch] [bp+1Ch]

  memset(s, 0, sizeof(s));
  s[2] = 3407873;
  s[0] = 0x80000000;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, s);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v4;
}
