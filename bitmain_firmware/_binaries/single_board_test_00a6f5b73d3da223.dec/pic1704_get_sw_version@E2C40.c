int __fastcall pic1704_get_sw_version(char a1, _BYTE *a2)
{
  int v4; // [sp+Ch] [bp+Ch] BYREF
  char v5; // [sp+10h] [bp+10h]
  int v6; // [sp+14h] [bp+14h] BYREF
  __int16 v7; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]
  int v9; // [sp+20h] [bp+20h]
  unsigned __int8 v10; // [sp+27h] [bp+27h]

  v6 = 0;
  v7 = 0;
  v4 = 255;
  v5 = 0;
  *a2 = -1;
  LOWORD(v8) = 23;
  v9 = 0;
  HIBYTE(v8) = a1;
  BYTE2(v8) = 5;
  v10 = sub_E289C(v8, 0, &v6, (unsigned __int8 *)&v4);
  if ( v10 )
    *a2 = BYTE2(v4);
  return v10;
}
