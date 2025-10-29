unsigned int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int result; // r0
  unsigned int *v4; // r2
  _BYTE v7[24]; // [sp+20h] [bp+10h] BYREF
  unsigned int v8; // [sp+1020h] [bp+1010h]
  int v9; // [sp+1024h] [bp+1014h]
  unsigned int v10; // [sp+1028h] [bp+1018h]
  int i; // [sp+102Ch] [bp+101Ch]
  unsigned int v12; // [sp+1030h] [bp+1020h]
  unsigned int v13; // [sp+1034h] [bp+1024h]

  if ( a2 > 1 )
  {
    v10 = 0x34 / a2 + 6;
    v12 = -1640531527 * v10;
    v13 = *a1;
    do
    {
      v9 = (v12 >> 2) & 3;
      for ( i = a2 - 1; i; --i )
      {
        v8 = a1[i - 1];
        v4 = &a1[i];
        *v4 -= ((v8 ^ *(_DWORD *)(a3 + 4 * (v9 ^ i & 3))) + (v12 ^ v13))
             ^ (((v8 >> 5) ^ (4 * v13)) + ((16 * v8) ^ (v13 >> 3)));
        v13 = *v4;
      }
      v8 = a1[a2 - 1];
      result = v12 ^ v13;
      *a1 -= ((v8 ^ *(_DWORD *)(a3 + 4 * v9)) + (v12 ^ v13)) ^ (((v8 >> 5) ^ (4 * v13)) + ((16 * v8) ^ (v13 >> 3)));
      v13 = *a1;
      v12 += 1640531527;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, " xxtea decode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/common/general/xxtea.c",
             72,
             "xxtea_decode",
             12,
             53,
             100,
             v7);
  }
  return result;
}
