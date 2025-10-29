bool __fastcall sub_6300C(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // r4
  int v9; // r3
  unsigned int v10; // r0
  int v11; // r6
  int i; // r11
  int v13; // r0
  int v14; // r2
  unsigned int v15; // r0
  int v16; // r3
  _BYTE *v17; // r3
  _BOOL4 result; // r0
  int v19; // r2
  int v20; // r3
  _DWORD v21[2]; // [sp+10h] [bp-44h] BYREF
  _DWORD v22[2]; // [sp+18h] [bp-3Ch] BYREF
  _DWORD v23[5]; // [sp+20h] [bp-34h] BYREF
  _DWORD v24[3]; // [sp+34h] [bp-20h]
  unsigned int v25; // [sp+40h] [bp-14h]
  unsigned int v26; // [sp+44h] [bp-10h]
  unsigned int v27; // [sp+48h] [bp-Ch]
  _BYTE v28[4]; // [sp+50h] [bp-4h] BYREF

  v8 = a4 + 60 * (a3 + 60 * (a2 + a5 + 24 * (a1 - 1)));
  if ( !*a7 )
    goto LABEL_5;
  v9 = *a7 + v8;
  v10 = v9 - a6;
  if ( v9 - a6 < 0 )
    v10 = a6 - v9;
  v24[0] = *a7 + v8;
  v25 = v10;
  if ( v10 <= 0xEFF0FF )
  {
    *a8 = v9;
    return v10 < 0x3840;
  }
  else
  {
LABEL_5:
    sub_654FC((int)v21, a6 - v8, 0);
    v22[0] = v21[0];
    v22[1] = v21[1];
    sub_655B4(v23, v22);
    sub_65664(v23, v23[0] + 693595, 0);
    v11 = v23[0] - 1;
    for ( i = 0; i != 3; ++i )
    {
      v13 = (_DWORD)&loc_15180 * (sub_65D1C(v11 + i) - 693595);
      v24[i] = v8 + v13;
      v14 = v8 + v13 - a6;
      if ( v14 < 0 )
        v14 = a6 - (v8 + v13);
      v23[i + 2] = v13;
      *(&v25 + i) = v14;
    }
    v15 = v26;
    v16 = v25;
    if ( v25 >= v26 )
      v16 = 1;
    else
      v15 = v25;
    if ( v25 < v26 )
      v16 = 0;
    if ( v27 < v15 )
    {
      v15 = v27;
      v16 = 2;
    }
    v17 = &v28[4 * v16];
    result = v15 < 0x3840;
    v19 = *((_DWORD *)v17 - 7);
    v20 = *((_DWORD *)v17 - 10);
    *a8 = v19;
    *a7 = v20;
  }
  return result;
}
