int *__fastcall sub_1031C8(int *result, _DWORD *a2)
{
  unsigned int i; // [sp+Ch] [bp+Ch]
  int v3; // [sp+10h] [bp+10h]
  int v4; // [sp+10h] [bp+10h]
  int v5; // [sp+14h] [bp+14h]
  int v6; // [sp+14h] [bp+14h]
  int v7; // [sp+18h] [bp+18h]
  int v8; // [sp+18h] [bp+18h]
  int v9; // [sp+1Ch] [bp+1Ch]
  int v10; // [sp+1Ch] [bp+1Ch]
  int v11; // [sp+20h] [bp+20h]
  int v12; // [sp+20h] [bp+20h]
  int v13; // [sp+24h] [bp+24h]
  int v14; // [sp+24h] [bp+24h]
  int v15; // [sp+28h] [bp+28h]
  int v16; // [sp+28h] [bp+28h]
  int v17; // [sp+2Ch] [bp+2Ch]
  int v18; // [sp+2Ch] [bp+2Ch]
  int v19; // [sp+30h] [bp+30h]
  int v20; // [sp+30h] [bp+30h]
  int v21; // [sp+34h] [bp+34h]
  int v22; // [sp+34h] [bp+34h]
  int v23; // [sp+38h] [bp+38h]
  int v24; // [sp+38h] [bp+38h]
  int v25; // [sp+3Ch] [bp+3Ch]
  int v26; // [sp+3Ch] [bp+3Ch]
  int v27; // [sp+40h] [bp+40h]
  int v28; // [sp+40h] [bp+40h]
  int v29; // [sp+44h] [bp+44h]
  int v30; // [sp+44h] [bp+44h]
  int v31; // [sp+48h] [bp+48h]
  int v32; // [sp+48h] [bp+48h]
  int v33; // [sp+4Ch] [bp+4Ch]
  int v34; // [sp+4Ch] [bp+4Ch]

  *result ^= *a2;
  v33 = *result;
  result[1] ^= a2[1];
  v31 = result[1];
  result[2] ^= a2[2];
  v29 = result[2];
  result[3] ^= a2[3];
  v27 = result[3];
  result[4] ^= a2[4];
  v25 = result[4];
  result[5] ^= a2[5];
  v23 = result[5];
  result[6] ^= a2[6];
  v21 = result[6];
  result[7] ^= a2[7];
  v19 = result[7];
  result[8] ^= a2[8];
  v17 = result[8];
  result[9] ^= a2[9];
  v15 = result[9];
  result[10] ^= a2[10];
  v13 = result[10];
  result[11] ^= a2[11];
  v11 = result[11];
  result[12] ^= a2[12];
  v9 = result[12];
  result[13] ^= a2[13];
  v7 = result[13];
  result[14] ^= a2[14];
  v5 = result[14];
  result[15] ^= a2[15];
  v3 = result[15];
  for ( i = 0; i <= 7; i += 2 )
  {
    v26 = __ROR4__(v9 + v33, 25) ^ v25;
    v16 = __ROR4__(v31 + v23, 25) ^ v15;
    v6 = __ROR4__(v21 + v13, 25) ^ v5;
    v28 = __ROR4__(v11 + v3, 25) ^ v27;
    v18 = __ROR4__(v33 + v26, 23) ^ v17;
    v8 = __ROR4__(v23 + v16, 23) ^ v7;
    v30 = __ROR4__(v13 + v6, 23) ^ v29;
    v20 = __ROR4__(v3 + v28, 23) ^ v19;
    v10 = __ROR4__(v26 + v18, 19) ^ v9;
    v32 = __ROR4__(v16 + v8, 19) ^ v31;
    v22 = __ROR4__(v6 + v30, 19) ^ v21;
    v12 = __ROR4__(v28 + v20, 19) ^ v11;
    v34 = __ROR4__(v18 + v10, 14) ^ v33;
    v24 = __ROR4__(v8 + v32, 14) ^ v23;
    v14 = __ROR4__(v30 + v22, 14) ^ v13;
    v4 = __ROR4__(v20 + v12, 14) ^ v3;
    v31 = __ROR4__(v28 + v34, 25) ^ v32;
    v21 = __ROR4__(v26 + v24, 25) ^ v22;
    v11 = __ROR4__(v16 + v14, 25) ^ v12;
    v9 = __ROR4__(v6 + v4, 25) ^ v10;
    v29 = __ROR4__(v34 + v31, 23) ^ v30;
    v19 = __ROR4__(v24 + v21, 23) ^ v20;
    v17 = __ROR4__(v14 + v11, 23) ^ v18;
    v7 = __ROR4__(v4 + v9, 23) ^ v8;
    v27 = __ROR4__(v31 + v29, 19) ^ v28;
    v25 = __ROR4__(v21 + v19, 19) ^ v26;
    v15 = __ROR4__(v11 + v17, 19) ^ v16;
    v5 = __ROR4__(v9 + v7, 19) ^ v6;
    v33 = __ROR4__(v29 + v27, 14) ^ v34;
    v23 = __ROR4__(v19 + v25, 14) ^ v24;
    v13 = __ROR4__(v17 + v15, 14) ^ v14;
    v3 = __ROR4__(v7 + v5, 14) ^ v4;
  }
  *result += v33;
  result[1] += v31;
  result[2] += v29;
  result[3] += v27;
  result[4] += v25;
  result[5] += v23;
  result[6] += v21;
  result[7] += v19;
  result[8] += v17;
  result[9] += v15;
  result[10] += v13;
  result[11] += v11;
  result[12] += v9;
  result[13] += v7;
  result[14] += v5;
  result[15] += v3;
  return result;
}
