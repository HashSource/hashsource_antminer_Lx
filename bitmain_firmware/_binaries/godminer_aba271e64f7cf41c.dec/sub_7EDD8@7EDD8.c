int __fastcall sub_7EDD8(int a1, char a2, __int16 a3, int a4)
{
  _DWORD s[4]; // [sp+14h] [bp-18h] BYREF
  int v10; // [sp+24h] [bp-8h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  HIWORD(s[2]) = a3;
  LOBYTE(s[3]) = -1;
  s[0] = a4;
  v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  usleep((__useconds_t)&stru_13878.st_size);
  return v10;
}
