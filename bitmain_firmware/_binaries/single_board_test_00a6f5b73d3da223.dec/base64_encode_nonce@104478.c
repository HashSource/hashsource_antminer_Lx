int __fastcall base64_encode_nonce(unsigned __int64 a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  unsigned __int64 v12; // [sp+8h] [bp+8h]
  _BYTE v13[8]; // [sp+14h] [bp+14h] BYREF
  unsigned int v14; // [sp+1Ch] [bp+1Ch]
  int v15; // [sp+20h] [bp+20h]
  int v16; // [sp+24h] [bp+24h]
  int v17; // [sp+28h] [bp+28h]
  int v18; // [sp+2Ch] [bp+2Ch]
  int v19; // [sp+30h] [bp+30h]
  int i; // [sp+34h] [bp+34h]
  _BYTE vars0[8]; // [sp+38h] [bp+38h] BYREF

  v12 = a1;
  for ( i = 0; i <= 7; ++i )
  {
    LODWORD(a1) = (unsigned __int8)v12;
    v13[i] = v12;
    v12 >>= 8;
  }
  v19 = 0;
  v18 = 0;
  while ( v19 <= 7 )
  {
    v2 = v19++;
    v17 = (unsigned __int8)vars0[v2 - 36];
    if ( v19 > 7 )
    {
      v4 = 0;
    }
    else
    {
      v3 = v19++;
      v4 = (unsigned __int8)vars0[v3 - 36];
    }
    v16 = v4;
    if ( v19 > 7 )
    {
      v6 = 0;
    }
    else
    {
      v5 = v19++;
      v6 = (unsigned __int8)vars0[v5 - 36];
    }
    v15 = v6;
    v14 = v6 + (v17 << 16) + (v16 << 8);
    v7 = v18++;
    *(_BYTE *)(v7 + a2) = aAbcdefghijklmn[(v14 >> 18) & 0x3F];
    v8 = v18++;
    *(_BYTE *)(v8 + a2) = aAbcdefghijklmn[(v14 >> 12) & 0x3F];
    v9 = v18++;
    *(_BYTE *)(v9 + a2) = aAbcdefghijklmn[(v14 >> 6) & 0x3F];
    v10 = v18++;
    *(_BYTE *)(v10 + a2) = aAbcdefghijklmn[v14 & 0x3F];
  }
  *(_BYTE *)(a2 + 11) = 61;
  return a1;
}
