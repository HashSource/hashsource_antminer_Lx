int __fastcall sub_7EE74(int a1, char a2, char a3, __int16 a4, int a5)
{
  _DWORD s[4]; // [sp+14h] [bp-18h] BYREF
  int v11; // [sp+24h] [bp-8h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  HIWORD(s[2]) = a4;
  LOBYTE(s[3]) = a3;
  s[0] = a5;
  v11 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  usleep((__useconds_t)&stru_13878.st_size);
  return v11;
}
