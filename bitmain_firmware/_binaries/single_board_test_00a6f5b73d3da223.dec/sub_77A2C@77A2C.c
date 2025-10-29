int __fastcall sub_77A2C(int a1, char a2, char a3, int a4)
{
  _DWORD v5[2]; // [sp+10h] [bp+10h] BYREF
  char v6; // [sp+18h] [bp+18h]
  char v7; // [sp+19h] [bp+19h]
  __int16 v8; // [sp+1Ah] [bp+1Ah]
  int v9; // [sp+1Ch] [bp+1Ch]

  v5[1] = 0;
  v9 = 0;
  v6 = a2;
  v7 = a3;
  v8 = 56;
  v5[0] = a4;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v5);
}
