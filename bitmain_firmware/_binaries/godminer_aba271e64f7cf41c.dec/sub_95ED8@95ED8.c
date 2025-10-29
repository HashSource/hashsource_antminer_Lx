int __fastcall sub_95ED8(char a1, int a2)
{
  __int16 v3; // [sp+8h] [bp-2Ch] BYREF
  _QWORD v4[3]; // [sp+Ch] [bp-28h] BYREF
  int v5; // [sp+24h] [bp-10h]
  int v6; // [sp+28h] [bp-Ch]

  memset(v4, 0, 22);
  v3 = 255;
  LOWORD(v5) = 4098;
  v6 = a2;
  HIBYTE(v5) = a1;
  BYTE2(v5) = 2;
  return (unsigned __int8)sub_95620(v5, a2, v4, (unsigned __int8 *)&v3);
}
