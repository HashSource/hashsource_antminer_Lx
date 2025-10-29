int __fastcall sub_5FD64(int a1, __int16 a2, int a3)
{
  _DWORD v4[2]; // [sp+10h] [bp+10h] BYREF
  __int16 v5; // [sp+18h] [bp+18h]
  __int16 v6; // [sp+1Ah] [bp+1Ah]
  int v7; // [sp+1Ch] [bp+1Ch]

  v4[1] = 0;
  v5 = 1;
  v7 = 0;
  v6 = a2;
  v4[0] = a3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
