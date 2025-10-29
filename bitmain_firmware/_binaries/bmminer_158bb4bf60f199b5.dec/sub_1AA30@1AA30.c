void __fastcall sub_1AA30(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r8
  int v6; // r5
  int v7; // r6
  int v8; // r4
  int v9; // r4
  unsigned int v10; // r4
  int v11; // r2
  int v12; // r4
  int v13; // r3
  float v14; // s21
  float v15; // s22
  float v16; // s20
  float v17; // s23
  unsigned int v18; // [sp+34h] [bp-810h]
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  v3 = 0;
  v5 = a3;
  v6 = a2;
  v7 = 0;
  do
  {
    v8 = *(unsigned __int8 *)(dword_A0D68 + 12954);
    pthread_mutex_lock(&stru_A0DB0);
    v9 = v3 * v8;
    v3 += 6;
    v18 = sub_2EC38(180, v9, a1);
    v10 = sub_2EC38(184, v9, a1);
    pthread_mutex_unlock(&stru_A0DB0);
    v11 = v10 & 0xFFF;
    v12 = HIWORD(v10) & 0xFFF;
    v13 = HIWORD(v18) & 0xFFF;
    v14 = (double)(v11 - v13) * 1.5 * 0.000244140625;
    v15 = (double)(int)(v13 - (v18 & 0xFFF)) * 1.5 * 0.000244140625;
    v16 = (double)(v12 - v11) * 1.5 * 0.000244140625;
    v17 = (double)(v18 & 0xFFF) * 1.5 * 0.000244140625;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(
        s,
        0x800u,
        "chain %d domain %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f\n",
        a1,
        v7,
        v17,
        v15,
        v14,
        v16,
        (double)v12 * 1.5 * 0.000244140625);
      sub_47EC8(3, s, 0);
    }
    ++v7;
    v6 += 16;
    v5 += 4;
    if ( a2 )
    {
      *(float *)(v6 - 12) = v15;
      *(float *)(v6 - 8) = v14;
      *(float *)(v6 - 4) = v16;
      *(float *)(v6 - 16) = v17;
    }
    if ( a3 )
      *(float *)(v5 - 4) = (float)((float)(v17 + v15) + v14) + v16;
  }
  while ( v7 != 13 );
}
