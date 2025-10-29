int __fastcall sub_4EDA4(int a1, int a2)
{
  int v2; // r3
  int v4; // [sp+0h] [bp-64h]
  _DWORD v5[9]; // [sp+8h] [bp-5Ch]
  _DWORD v6[9]; // [sp+2Ch] [bp-38h]
  int v7; // [sp+50h] [bp-14h]
  int v8; // [sp+54h] [bp-10h]
  int i; // [sp+58h] [bp-Ch]
  int v10; // [sp+5Ch] [bp-8h]

  v4 = a2;
  v10 = 0;
  v6[0] = *(_DWORD *)"<";
  v6[1] = *(_DWORD *)"2";
  v6[2] = *(_DWORD *)"%";
  v6[3] = *(_DWORD *)" ";
  v6[4] = 17;
  v6[5] = 8;
  v6[6] = 0;
  v6[7] = -6;
  v6[8] = -19;
  v5[0] = -10;
  v5[1] = 0;
  v5[2] = 10;
  v5[3] = 20;
  v5[4] = 30;
  v5[5] = 40;
  v5[6] = 50;
  v5[7] = 60;
  v5[8] = 70;
  v8 = 9;
  if ( a2 >= dword_14E3A4 )
  {
    if ( a2 > dword_14E3A4 )
      v4 = a2 - 1;
  }
  else
  {
    v4 = a2 + 1;
  }
  v7 = v4 - *(_DWORD *)(a1 + 96);
  dword_14E3A4 = v4;
  for ( i = 0; i < v8 - 1; ++i )
  {
    if ( v7 > v6[i + 1] && v7 <= v6[i] )
    {
      v10 = v5[i];
      break;
    }
  }
  if ( v7 > v6[0] )
    v10 = v5[0];
  if ( v7 <= v6[v8 - 1] )
    v10 = v5[v8 - 1];
  v2 = v10;
  if ( v10 >= 100 )
    v2 = 100;
  if ( v5[0] >= v2 )
    return v5[0];
  return v2;
}
