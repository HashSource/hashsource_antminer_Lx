_DWORD *__fastcall sub_FC64C(_DWORD *result, unsigned int a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // r2
  _DWORD *v8; // r3
  int v9; // [sp+4h] [bp+4h]
  _DWORD *v11; // [sp+Ch] [bp+Ch]
  int v12; // [sp+10h] [bp+10h]
  int v13; // [sp+14h] [bp+14h]

  v11 = result;
  v9 = result[11] + a3;
  if ( *(_DWORD *)(4 * (a2 ^ 1) + result[17]) != result[13] && *(_DWORD *)(4 * (v9 ^ 1) + result[17]) != result[13] )
  {
    *(_DWORD *)(172 * result[14] + result[18] + 4) = result[16] >> 1;
    result = sub_FC50C(result, 1, a2, v9);
  }
  v3 = v11[16];
  v11[16] = v3 + 1;
  v13 = v3;
  v4 = v11[16];
  v11[16] = v4 + 1;
  v12 = v4;
  *(_DWORD *)(8 * v13 + v11[19]) = *(_DWORD *)(4 * a2 + v11[17]);
  *(_DWORD *)(8 * v4 + v11[19]) = *(_DWORD *)(4 * v9 + v11[17]);
  v5 = v11[19];
  v6 = (_DWORD *)(4 * a2 + v11[17]);
  *v6 = v13;
  *(_DWORD *)(8 * *v6 + v5 + 4) = a2;
  v7 = v11[19];
  v8 = (_DWORD *)(4 * v9 + v11[17]);
  *v8 = v12;
  *(_DWORD *)(8 * *v8 + v7 + 4) = v9;
  return result;
}
