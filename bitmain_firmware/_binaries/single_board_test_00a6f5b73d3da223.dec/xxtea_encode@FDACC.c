unsigned int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int result; // r0
  unsigned int *v4; // r2
  unsigned int *v5; // r2
  _BYTE v8[24]; // [sp+20h] [bp+10h] BYREF
  unsigned int v9; // [sp+1020h] [bp+1010h]
  int v10; // [sp+1024h] [bp+1014h]
  unsigned int v11; // [sp+1028h] [bp+1018h]
  unsigned int i; // [sp+102Ch] [bp+101Ch]
  unsigned int v13; // [sp+1030h] [bp+1020h]
  unsigned int v14; // [sp+1034h] [bp+1024h]

  if ( a2 > 1 )
  {
    v11 = 0x34 / a2 + 6;
    v13 = 0;
    v14 = a1[a2 - 1];
    do
    {
      v13 -= 1640531527;
      v10 = (v13 >> 2) & 3;
      for ( i = 0; a2 - 1 > i; ++i )
      {
        v9 = a1[i + 1];
        v4 = &a1[i];
        *v4 += ((v14 ^ *(_DWORD *)(a3 + 4 * (v10 ^ i & 3))) + (v13 ^ v9))
             ^ (((v14 >> 5) ^ (4 * v9)) + ((16 * v14) ^ (v9 >> 3)));
        v14 = *v4;
      }
      v9 = *a1;
      v5 = &a1[a2 - 1];
      result = ((v14 >> 5) ^ (4 * v9)) + ((16 * v14) ^ (v9 >> 3));
      *v5 += ((v14 ^ *(_DWORD *)(a3 + 4 * (v10 ^ i & 3))) + (v13 ^ v9)) ^ result;
      v14 = *v5;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, " xxtea encode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/common/general/xxtea.c",
             72,
             "xxtea_encode",
             12,
             24,
             100,
             v8);
  }
  return result;
}
