int __fastcall sub_4EE4C(int a1, __int16 a2, int a3)
{
  _DWORD s[4]; // [sp+14h] [bp+14h] BYREF
  int v8; // [sp+24h] [bp+24h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = a2;
  LOBYTE(s[3]) = -1;
  s[0] = a3;
  v8 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, s);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v8;
}
