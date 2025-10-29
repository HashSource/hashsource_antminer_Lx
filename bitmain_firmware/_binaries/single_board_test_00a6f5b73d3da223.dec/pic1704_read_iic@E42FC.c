int __fastcall pic1704_read_iic(char a1, char a2, _BYTE *a3)
{
  _BYTE v6[4]; // [sp+8h] [bp+8h] BYREF
  _BYTE v7[7]; // [sp+Ch] [bp+Ch] BYREF
  _DWORD v8[2]; // [sp+14h] [bp+14h] BYREF
  int v9; // [sp+1Ch] [bp+1Ch]
  _BYTE *v10; // [sp+20h] [bp+20h]
  int i; // [sp+28h] [bp+28h]
  __int16 v13; // [sp+2Eh] [bp+2Eh]
  _BYTE vars0[8]; // [sp+30h] [bp+30h] BYREF

  v8[0] = 0;
  *(_DWORD *)((char *)v8 + 3) = 0;
  *(_DWORD *)v7 = 255;
  *(_DWORD *)&v7[3] = 0;
  v6[0] = a2;
  v6[1] = 2;
  LOWORD(v9) = 572;
  v10 = v6;
  HIBYTE(v9) = a1;
  BYTE2(v9) = 7;
  if ( !(unsigned __int8)sub_E289C(v9, (int)v6, v8, v7) )
    return 0;
  v13 = 0;
  for ( i = 0; BYTE2(v9) - 2 > i; ++i )
    v13 += (unsigned __int8)v7[i];
  if ( HIBYTE(v13) != (unsigned __int8)vars0[BYTE2(v9) - 38]
    || (unsigned __int8)v13 != (unsigned __int8)vars0[BYTE2(v9) - 37] )
  {
    return 0;
  }
  if ( v7[2] != 1 )
    return 0;
  *a3 = v7[3];
  return 1;
}
