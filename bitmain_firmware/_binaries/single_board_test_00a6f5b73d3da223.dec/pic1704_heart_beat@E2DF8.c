int __fastcall pic1704_heart_beat(char a1)
{
  int v2; // [sp+Ch] [bp+Ch] BYREF
  __int16 v3; // [sp+10h] [bp+10h]
  int v4; // [sp+14h] [bp+14h] BYREF
  __int16 v5; // [sp+18h] [bp+18h]
  int v6; // [sp+1Ch] [bp+1Ch]
  int v7; // [sp+20h] [bp+20h]

  v4 = 0;
  v5 = 0;
  v2 = 255;
  v3 = 0;
  LOWORD(v6) = 22;
  v7 = 0;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 6;
  return (unsigned __int8)sub_E289C(v6, 0, &v4, (unsigned __int8 *)&v2);
}
