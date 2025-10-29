void *__fastcall sub_104824(int a1)
{
  void *result; // r0
  _DWORD *v2; // r2
  int v3; // r0
  __int64 v4; // kr10_8
  __int64 v5; // kr20_8
  int v6; // r2
  __int64 v7; // r10
  int v8; // r2
  __int64 v9; // r8
  __int64 v10; // kr50_8
  int v11; // r4
  int v12; // r2
  __int64 v13; // [sp+0h] [bp+0h]
  _QWORD s[5]; // [sp+18h] [bp+18h] BYREF
  int v15; // [sp+44h] [bp+44h]
  int k; // [sp+48h] [bp+48h]
  int j; // [sp+4Ch] [bp+4Ch]
  int i; // [sp+50h] [bp+50h]
  unsigned __int8 v19; // [sp+56h] [bp+56h]
  unsigned __int8 v20; // [sp+57h] [bp+57h]
  __int64 v21; // [sp+58h] [bp+58h]
  _BYTE v22[4]; // [sp+60h] [bp+60h] BYREF

  v15 = a1;
  result = memset(s, 0, sizeof(s));
  v21 = 0;
  for ( i = 0; i <= 23; ++i )
  {
    v20 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      v2 = &v22[8 * v20 - 72];
      *v2 = 0;
      v2[1] = 0;
      v19 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        *(_QWORD *)&v22[8 * v20 - 72] ^= *(_QWORD *)(8 * (v19 + v20) + v15);
        v19 += 5;
      }
      ++v20;
    }
    v20 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      v19 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        v3 = v15 + 8 * (v20 + v19);
        v4 = *(_QWORD *)v3;
        v13 = *(_QWORD *)&v22[8 * ((v20 + 4) % 5) - 72];
        v5 = *(_QWORD *)&v22[8 * ((v20 + 1) % 5) - 72];
        *(_DWORD *)v3 ^= ((2 * v5) | (HIDWORD(v5) >> 31)) ^ (unsigned int)v13;
        *(_DWORD *)(v3 + 4) = (v5 >> 31) ^ HIDWORD(v13) ^ HIDWORD(v4);
        v19 += 5;
      }
      ++v20;
    }
    v21 = *(_QWORD *)(v15 + 8);
    v20 = 0;
    for ( j = 0; j <= 23; ++j )
    {
      s[0] = *(_QWORD *)(8 * byte_1D4008[v20] + v15);
      v6 = byte_1D3FF0[v20];
      v7 = v21 << v6;
      v8 = -v6 & 0x3F;
      LODWORD(v9) = ((unsigned int)v21 >> v8) | (HIDWORD(v21) << (32 - v8)) | (HIDWORD(v21) >> (v8 - 32)) | v7;
      HIDWORD(v9) = (HIDWORD(v21) >> v8) | HIDWORD(v7);
      *(_QWORD *)(v15 + 8 * byte_1D4008[v20]) = v9;
      v21 = s[0];
      ++v20;
    }
    v19 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      v20 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        *(_QWORD *)&v22[8 * v20 - 72] = *(_QWORD *)(8 * (v20 + v19) + v15);
        ++v20;
      }
      v20 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        *(_QWORD *)(v15 + 8 * (v20 + v19)) = ~*(_QWORD *)&v22[8 * ((v20 + 1) % 5) - 72]
                                           & *(_QWORD *)&v22[8 * ((v20 + 2) % 5) - 72]
                                           ^ *(_QWORD *)&v22[8 * v20 - 72];
        ++v20;
      }
      v19 += 5;
    }
    result = (void *)(8 * i);
    v10 = qword_1D4020[i];
    v11 = HIDWORD(v10) ^ *(_DWORD *)(v15 + 4);
    v12 = v15;
    *(_DWORD *)v15 ^= v10;
    *(_DWORD *)(v12 + 4) = v11;
  }
  return result;
}
