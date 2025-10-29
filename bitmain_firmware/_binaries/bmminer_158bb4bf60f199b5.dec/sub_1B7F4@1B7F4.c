const char *__fastcall sub_1B7F4(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r12
  int v5; // r4
  unsigned __int8 *v6; // lr
  int v7; // t1
  int v8; // r3
  double v10; // [sp+0h] [bp-2Ch] BYREF
  char v11[32]; // [sp+8h] [bp-24h] BYREF

  v2 = 0;
  v3 = sub_30578();
  v4 = dword_A0D68;
  v5 = dword_A0D68 + 64;
  v6 = (unsigned __int8 *)(dword_A0D68 + 12918);
  v10 = (double)v3;
  strcpy(v11, "total_freqavg");
  do
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      if ( v7 == 1 )
        break;
      ++v6;
      if ( v4 == v5 )
        goto LABEL_7;
    }
    v8 = *v6++;
    if ( v8 )
      v2 += v8;
  }
  while ( v4 != v5 );
LABEL_7:
  v10 = (double)(int)((double)v3 / (double)v2 * 100.0) / 100.0;
  return sub_43F2C(a1, v11, (const char *)&v10, 1);
}
