int __fastcall base64_encode(int result, int a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  unsigned int v9; // [sp+14h] [bp+14h]
  int v10; // [sp+1Ch] [bp+1Ch]
  int v11; // [sp+20h] [bp+20h]
  int v12; // [sp+24h] [bp+24h]
  int v13; // [sp+28h] [bp+28h]
  int v14; // [sp+2Ch] [bp+2Ch]

  v14 = 0;
  v13 = 0;
  while ( v14 < a3 )
  {
    v3 = v14++;
    v11 = *(unsigned __int8 *)(a2 + v3);
    if ( v14 >= a3 )
    {
      v5 = 0;
    }
    else
    {
      v4 = v14++;
      v5 = *(unsigned __int8 *)(a2 + v4);
    }
    v10 = v5;
    if ( v14 >= a3 )
    {
      v7 = 0;
    }
    else
    {
      v6 = v14++;
      v7 = *(unsigned __int8 *)(a2 + v6);
    }
    v9 = v7 + (v11 << 16) + (v10 << 8);
    *(_BYTE *)(v13 + result) = aAbcdefghijklmn[(v9 >> 18) & 0x3F];
    *(_BYTE *)(v13 + 1 + result) = aAbcdefghijklmn[(v9 >> 12) & 0x3F];
    *(_BYTE *)(v13 + 2 + result) = aAbcdefghijklmn[(v9 >> 6) & 0x3F];
    v8 = v13 + 3;
    v13 += 4;
    *(_BYTE *)(v8 + result) = aAbcdefghijklmn[v9 & 0x3F];
  }
  v12 = 8 * a3 / 6;
  if ( 8 * a3 % 6 )
    ++v12;
  *(_BYTE *)(v12 + result) = 61;
  return result;
}
