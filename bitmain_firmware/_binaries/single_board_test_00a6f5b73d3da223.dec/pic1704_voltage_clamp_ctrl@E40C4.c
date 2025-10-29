int __fastcall pic1704_voltage_clamp_ctrl(char a1, char a2)
{
  _BYTE v3[2]; // [sp+6h] [bp+6h] BYREF
  __int16 v4; // [sp+8h] [bp+8h] BYREF
  _DWORD v5[2]; // [sp+Ch] [bp+Ch] BYREF
  int v6; // [sp+14h] [bp+14h]
  _BYTE *v7; // [sp+18h] [bp+18h]

  v3[1] = a1;
  v3[0] = a2;
  v5[0] = 0;
  *(_DWORD *)((char *)v5 + 3) = 0;
  v4 = 255;
  LOWORD(v6) = 305;
  v7 = v3;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  return (unsigned __int8)sub_E289C(v6, (int)v3, v5, (unsigned __int8 *)&v4);
}
