int __fastcall pic1704_get_PDCx(char a1, int *a2, int *a3, int *a4)
{
  unsigned __int8 v9; // [sp+14h] [bp-28h] BYREF
  __int64 v10; // [sp+15h] [bp-27h]
  int v11; // [sp+20h] [bp-1Ch] BYREF
  __int16 v12; // [sp+24h] [bp-18h]
  int v13; // [sp+28h] [bp-14h]
  int v14; // [sp+2Ch] [bp-10h]
  int v15; // [sp+30h] [bp-Ch]

  v11 = 0;
  v12 = 0;
  v10 = 0;
  v9 = -1;
  LOWORD(v13) = 43;
  v14 = 0;
  HIBYTE(v13) = a1;
  BYTE2(v13) = 9;
  if ( !(unsigned __int8)sub_95620(v13, 0, &v11, &v9) )
    return 0;
  *a2 = BYTE3(v10) | (BYTE2(v10) << 8);
  *a3 = BYTE5(v10) | (BYTE4(v10) << 8);
  v15 = BYTE6(v10) << 8;
  *a4 = HIBYTE(v10) | v15;
  return 1;
}
