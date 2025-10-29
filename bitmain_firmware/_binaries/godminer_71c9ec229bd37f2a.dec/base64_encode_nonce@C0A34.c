int __fastcall base64_encode_nonce(unsigned __int64 a1, int a2)
{
  _BYTE *v2; // r3
  int v3; // r4
  unsigned __int8 *v4; // r5
  int v5; // lr
  int v6; // r1
  bool v7; // zf
  int v8; // r3
  int v9; // r12
  _BYTE *v10; // r7
  _BYTE *v11; // r6
  int v12; // r0
  unsigned int v13; // r3
  int v14; // r1
  unsigned __int8 v15; // r1
  int result; // r0
  unsigned __int8 v17; // r3
  _BYTE v18[7]; // [sp+0h] [bp-Ch] BYREF
  _BYTE v19[5]; // [sp+7h] [bp-5h] BYREF

  v2 = &v18[-1];
  do
  {
    *++v2 = a1;
    a1 >>= 8;
  }
  while ( v19 != v2 );
  LOWORD(v4) = 12476;
  v3 = a2;
  HIWORD(v4) = (unsigned int)"r_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_iic.c" >> 16;
  v5 = 0;
  do
  {
    v6 = v5 + 1;
    v7 = v5 == 7;
    v8 = (unsigned __int8)v18[v5];
    v9 = v5 + 2;
    v10 = &v19[v5 + 2];
    v11 = &v19[v5 + 3];
    v5 += 3;
    LOBYTE(v12) = 65;
    if ( v7 )
      v5 = v6;
    v13 = v8 << 16;
    if ( !v7 )
    {
      if ( v9 == 8 )
      {
        v5 = 8;
        v12 = *v4;
      }
      else
      {
        v12 = (unsigned __int8)*(v11 - 8);
      }
      v14 = (unsigned __int8)*(v10 - 8) << 8;
      if ( v9 == 8 )
        v13 += v14;
      else
        v13 += v12 + v14;
      if ( v9 != 8 )
        LOBYTE(v12) = v4[v13 & 0x3F];
    }
    *(_BYTE *)(v3 + 3) = v12;
    v15 = v4[(v13 >> 6) & 0x3F];
    result = v4[(v13 >> 12) & 0x3F];
    v17 = v4[v13 >> 18];
    v3 += 4;
    *(_BYTE *)(v3 - 2) = v15;
    *(_BYTE *)(v3 - 3) = result;
    *(_BYTE *)(v3 - 4) = v17;
  }
  while ( v5 != 8 );
  *(_BYTE *)(a2 + 11) = 61;
  return result;
}
