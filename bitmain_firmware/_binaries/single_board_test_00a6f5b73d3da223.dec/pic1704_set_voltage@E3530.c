int __fastcall pic1704_set_voltage(char a1, unsigned __int8 a2)
{
  __int16 v3; // [sp+8h] [bp+8h] BYREF
  char v4; // [sp+Ah] [bp+Ah]
  __int16 v5; // [sp+Ch] [bp+Ch] BYREF
  _DWORD v6[2]; // [sp+10h] [bp+10h] BYREF
  char v7; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]
  __int16 *v9; // [sp+20h] [bp+20h]

  v6[0] = 0;
  v6[1] = 0;
  v7 = 0;
  v5 = 255;
  v4 = 0;
  v3 = a2;
  LOWORD(v8) = 784;
  v9 = &v3;
  HIBYTE(v8) = a1;
  BYTE2(v8) = 2;
  return (unsigned __int8)sub_E289C(v8, (int)&v3, v6, (unsigned __int8 *)&v5);
}
