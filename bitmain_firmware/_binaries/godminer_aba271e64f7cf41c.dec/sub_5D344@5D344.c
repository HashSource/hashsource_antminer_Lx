int __fastcall sub_5D344(int result, int a2, unsigned int a3)
{
  char v3; // r1
  int v6; // [sp+Ch] [bp-38h]
  int v7; // [sp+14h] [bp-30h]
  __int64 v8; // [sp+18h] [bp-2Ch]
  __int16 v9; // [sp+20h] [bp-24h]
  __int64 v10; // [sp+22h] [bp-22h]
  __int64 v11; // [sp+2Ah] [bp-1Ah]
  int v12; // [sp+34h] [bp-10h]
  int v13; // [sp+38h] [bp-Ch]
  int v14; // [sp+3Ch] [bp-8h]

  v6 = result;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  while ( a2 && v14 <= 29 )
  {
    sub_CC7AC(a2, a3);
    *((_BYTE *)&v7 + v14++) = v3 + 48;
    result = sub_CC518(a2, a3);
    a2 = result;
  }
  v13 = 0;
  v12 = v14 - 1;
  while ( v13 < v14 )
    *(_BYTE *)(v6 + v13++) = *((_BYTE *)&v7 + v12--);
  return result;
}
