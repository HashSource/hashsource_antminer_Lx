int __fastcall base64_encode(int result, int a2, int a3)
{
  int v3; // lr
  unsigned __int8 *v4; // r4
  int v5; // r12
  int v6; // r3
  int v7; // r5
  bool v8; // cc
  int v9; // r7
  int v10; // r6
  unsigned int v11; // r3
  int v12; // r5
  int v13; // r5
  unsigned __int8 v14; // r5
  unsigned __int8 v15; // r6
  unsigned __int8 v16; // r3
  int v17; // r2
  int v18; // r3

  if ( a3 > 0 )
  {
    LOWORD(v4) = 12476;
    v3 = result;
    HIWORD(v4) = (unsigned int)"r_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_iic.c" >> 16;
    v5 = 0;
    do
    {
      v6 = *(unsigned __int8 *)(a2 + v5);
      v7 = v5 + 1;
      v8 = a3 <= v5 + 1;
      v9 = v5 + 2;
      LOBYTE(v10) = 65;
      v5 += 3;
      if ( v8 )
        v5 = v7;
      v11 = v6 << 16;
      if ( !v8 )
      {
        v12 = *(unsigned __int8 *)(a2 + v7);
        if ( a3 <= v9 )
        {
          v5 = v9;
          v10 = *v4;
        }
        else
        {
          v10 = *(unsigned __int8 *)(a2 + v9);
        }
        v13 = v12 << 8;
        v11 += a3 <= v9 ? v13 : v10 + v13;
        if ( a3 > v9 )
          LOBYTE(v10) = v4[v11 & 0x3F];
      }
      *(_BYTE *)(v3 + 3) = v10;
      v14 = v4[(v11 >> 6) & 0x3F];
      v15 = v4[(v11 >> 12) & 0x3F];
      v16 = v4[v11 >> 18];
      v3 += 4;
      *(_BYTE *)(v3 - 2) = v14;
      *(_BYTE *)(v3 - 3) = v15;
      *(_BYTE *)(v3 - 4) = v16;
    }
    while ( v5 < a3 );
  }
  v17 = 8 * a3;
  v18 = v17 / 6;
  if ( v17 != 6 * (v17 / 6) )
    ++v18;
  *(_BYTE *)(result + v18) = 61;
  return result;
}
