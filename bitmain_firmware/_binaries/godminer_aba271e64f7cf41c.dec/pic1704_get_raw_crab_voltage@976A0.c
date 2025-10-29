int __fastcall pic1704_get_raw_crab_voltage(char a1, int *a2, int *a3, int *a4, int *a5)
{
  _BYTE v10[13]; // [sp+10h] [bp-2Ch] BYREF
  int v11; // [sp+20h] [bp-1Ch] BYREF
  __int16 v12; // [sp+24h] [bp-18h]
  int v13; // [sp+28h] [bp-14h]
  int v14; // [sp+2Ch] [bp-10h]
  int v15; // [sp+30h] [bp-Ch]

  v11 = 0;
  v12 = 0;
  *(_QWORD *)v10 = 255;
  *(_QWORD *)&v10[5] = 0;
  LOWORD(v13) = 40;
  v14 = 0;
  HIBYTE(v13) = a1;
  BYTE2(v13) = 13;
  if ( !(unsigned __int8)sub_95620(v13, 0, &v11, v10) )
    return 0;
  *a2 = (v10[3] << 8) | v10[4];
  *a3 = (v10[5] << 8) | v10[6];
  *a4 = (v10[7] << 8) | v10[8];
  v15 = (v10[9] << 8) | v10[10];
  *a5 = v15;
  return 1;
}
