int __fastcall sub_7EB10(int a1, char a2, __int16 a3, int a4)
{
  _DWORD v5[2]; // [sp+10h] [bp-14h] BYREF
  __int64 v6; // [sp+18h] [bp-Ch]

  v5[1] = 0;
  v6 = 0;
  BYTE1(v6) = a2;
  WORD1(v6) = a3;
  v5[0] = a4;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, v5);
}
