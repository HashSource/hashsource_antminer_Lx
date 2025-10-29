int __fastcall sub_7EAA0(int a1, __int16 a2, int a3)
{
  _DWORD v4[2]; // [sp+10h] [bp-14h] BYREF
  __int64 v5; // [sp+18h] [bp-Ch]

  v4[1] = 0;
  v5 = 1;
  WORD1(v5) = a2;
  v4[0] = a3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, v4);
}
