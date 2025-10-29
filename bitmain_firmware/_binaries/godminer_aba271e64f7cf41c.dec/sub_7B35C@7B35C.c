unsigned int *__fastcall sub_7B35C(unsigned int *result)
{
  float v1; // s0
  int v2; // r0
  int v3; // r0
  unsigned int *v4; // [sp+2Ch] [bp-1030h]
  char v5[40]; // [sp+34h] [bp-1028h] BYREF
  float v6; // [sp+1034h] [bp-28h]
  int v7; // [sp+1038h] [bp-24h]
  float v8; // [sp+103Ch] [bp-20h]
  float v9; // [sp+1040h] [bp-1Ch]
  signed int k; // [sp+1044h] [bp-18h]
  signed int j; // [sp+1048h] [bp-14h]
  int v12; // [sp+104Ch] [bp-10h]
  signed int i; // [sp+1050h] [bp-Ch]
  float v14; // [sp+1054h] [bp-8h]

  v4 = result;
  v9 = 0.0;
  v14 = 0.0;
  v12 = 32;
  j = 0;
  k = 0;
  *result = -1068236443;
  for ( i = 2; i > 0; --i )
  {
    for ( j = 0; j <= 7; ++j )
    {
      for ( k = j; k >= 0; --k )
      {
        v8 = (float)((float)((float)((float)((float)j * v1) * (float)k) * (float)i) / 25.0) * 100.0;
        if ( (int)v8 % 100 <= 50 )
          v12 = (int)v8 / 100;
        else
          v12 = (int)v8 / 100 + 1;
        v9 = (float)((float)v12 * 25.0) / (float)i;
        if ( v12 <= 250 && v12 > 15 && (i != 1 || v9 <= 3125.0) && v9 <= 3200.0 && v9 >= 2000.0 )
        {
          v7 = v9 > 2400.0;
          v2 = sub_CC518(25 * v12, i);
          v3 = sub_CC518(v2, j);
          result = (unsigned int *)sub_CC518(v3, k);
          v14 = (float)(int)result;
          *v4 = (v7 << 28)
              | (v12 << 16) & 0xFFF0000
              | ((_WORD)i << 8) & 0x3F00
              | (16 * (_BYTE)j) & 0x70
              | k & 7
              | 0xC0000000;
          v6 = fabsf(v14 - v1);
          if ( v6 < 3.0 )
          {
            V_LOCK();
            logfmt_raw(
              v5,
              0x1000u,
              0,
              "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
              v1,
              v14,
              v9,
              v12,
              i,
              j,
              k);
            V_UNLOCK();
            return (unsigned int *)zlog(
                                     g_zc,
                                     "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildr"
                                     "oot/tmp/release/build/godminer-origin_godminer-branch1/./backend/chip_setting.c",
                                     162,
                                     "inferred_plldivider_kas",
                                     23,
                                     630,
                                     20,
                                     v5);
          }
          v14 = 0.0;
        }
      }
    }
  }
  return result;
}
