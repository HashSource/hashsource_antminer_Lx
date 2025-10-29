int __fastcall sub_595A4(int a1, char a2, char a3, __int16 a4, int a5)
{
  _DWORD s[4]; // [sp+14h] [bp+14h] BYREF
  int v11; // [sp+24h] [bp+24h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  HIWORD(s[2]) = a4;
  LOBYTE(s[3]) = a3;
  s[0] = a5;
  v11 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, s);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v11;
}
