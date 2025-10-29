int __fastcall sub_73824(int a1, char a2, __int16 a3, int a4)
{
  _DWORD s[4]; // [sp+14h] [bp+14h] BYREF
  int v10; // [sp+24h] [bp+24h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  HIWORD(s[2]) = a3;
  LOBYTE(s[3]) = -1;
  s[0] = a4;
  v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, s);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v10;
}
