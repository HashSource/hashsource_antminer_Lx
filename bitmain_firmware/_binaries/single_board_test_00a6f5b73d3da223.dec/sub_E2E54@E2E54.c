int __fastcall sub_E2E54(char a1, int a2)
{
  __int16 v3; // [sp+8h] [bp+8h] BYREF
  _BYTE v4[20]; // [sp+Ch] [bp+Ch] BYREF
  __int16 v5; // [sp+20h] [bp+20h]
  int v6; // [sp+24h] [bp+24h]
  int v7; // [sp+28h] [bp+28h]

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  v3 = 255;
  LOWORD(v6) = 4098;
  v7 = a2;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  return (unsigned __int8)sub_E289C(v6, a2, v4, (unsigned __int8 *)&v3);
}
