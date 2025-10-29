int __fastcall sub_57410(int a1, int a2)
{
  int v2; // r3
  __int64 v4; // [sp+Ch] [bp-50h]
  int v5; // [sp+14h] [bp-48h]
  __int64 v6; // [sp+18h] [bp-44h]
  __int64 v7; // [sp+20h] [bp-3Ch]
  _DWORD v8[7]; // [sp+28h] [bp-34h]
  int v9; // [sp+44h] [bp-18h]
  int v10; // [sp+48h] [bp-14h]
  int i; // [sp+4Ch] [bp-10h]
  int v12; // [sp+50h] [bp-Ch]
  int v13; // [sp+54h] [bp-8h]

  v8[0] = 17;
  v8[1] = 12;
  v8[2] = 7;
  v8[3] = -3;
  v8[4] = -8;
  v8[5] = -13;
  v8[6] = -18;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v13 = 0;
  v10 = a2 - *(_DWORD *)(a1 + 96);
  v12 = 0;
  v9 = 7;
  if ( a2 >= dword_14E900 )
    v12 = 3;
  if ( a2 == dword_14E900 )
    return dword_1523F8;
  for ( i = 0; i < v9 - 1; ++i )
  {
    if ( v10 > v8[i + 1] + v12 && v10 <= v8[i] + v12 )
    {
      v13 = *((_DWORD *)&v4 + i);
      break;
    }
  }
  if ( v10 > v8[0] + v12 )
    v13 = 0;
  if ( v10 <= v8[v9 - 1] + v12 )
    v13 = *((_DWORD *)&v4 + v9 - 1);
  if ( v13 < dword_1523F8 && a2 <= dword_14E900 )
    v13 = dword_1523F8;
  if ( v13 > dword_1523F8 && a2 >= dword_14E900 )
    v13 = dword_1523F8;
  if ( a2 != dword_14E900 )
    dword_14E900 = a2;
  if ( v13 != dword_1523F8 )
    dword_1523F8 = v13;
  if ( v13 <= 0 )
    return 0;
  v2 = v13;
  if ( v13 >= 120 )
    return 120;
  return v2;
}
