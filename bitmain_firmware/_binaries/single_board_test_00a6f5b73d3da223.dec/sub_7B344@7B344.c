int __fastcall sub_7B344(int a1, char a2, char a3)
{
  int v8; // [sp+10h] [bp+8h]
  int v9; // [sp+14h] [bp+Ch]
  int v10; // [sp+18h] [bp+10h]
  int v11; // [sp+1Ch] [bp+14h]
  _DWORD v12[2]; // [sp+20h] [bp+18h] BYREF
  unsigned __int8 v13; // [sp+2Bh] [bp+23h]
  unsigned int i; // [sp+2Ch] [bp+24h]
  _BYTE v15[4]; // [sp+30h] [bp+28h] BYREF

  v12[0] = 100991489;
  v12[1] = 235735561;
  v8 = 50462721;
  v9 = 117834757;
  v10 = 185206793;
  v11 = 252578829;
  v13 = 16;
  for ( i = 0; i <= 7; ++i )
  {
    if ( a3 == *((_BYTE *)v12 + i) )
    {
      v13 = v15[2 * i - 31];
      sub_78960(a1, a2, a3, 80, 0);
      usleep((__useconds_t)&stru_1869C.st_value);
      sub_78960(a1, a2, a3, 80, 0x10000);
      usleep((__useconds_t)&stru_1869C.st_value);
      sub_78960(a1, a2, v13, 80, 0);
      usleep((__useconds_t)&stru_1869C.st_value);
      sub_78960(a1, a2, v13, 80, 0x10000);
      usleep((__useconds_t)&stru_1869C.st_value);
      return v13;
    }
  }
  sub_78960(a1, a2, a3, 80, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_78960(a1, a2, a3, 80, 0x10000);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v13;
}
