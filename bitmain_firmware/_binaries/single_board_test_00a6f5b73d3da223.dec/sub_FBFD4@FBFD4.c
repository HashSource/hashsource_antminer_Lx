_DWORD *__fastcall sub_FBFD4(_DWORD *result, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // [sp+4h] [bp+4h]
  int v8; // [sp+8h] [bp+8h]
  _DWORD *v9; // [sp+Ch] [bp+Ch]
  int v10; // [sp+10h] [bp+10h]

  v9 = result;
  v8 = a2;
  v7 = result[11] + a3;
  if ( a4 )
  {
    v7 = a2;
    v8 = result[11] + a3;
  }
  if ( *(_DWORD *)(4 * v7 + result[17]) != result[13] )
  {
    *(_DWORD *)(172 * result[14] + result[18] + 4) = result[16];
    result = sub_FBEA4(result, 1, v7, v8);
  }
  v4 = v9[16];
  v9[16] = v4 + 1;
  v10 = v4;
  *(_DWORD *)(8 * v4 + v9[19]) = *(_DWORD *)(4 * v8 + v9[17]);
  v5 = v9[19];
  v6 = (_DWORD *)(4 * v8 + v9[17]);
  *v6 = v10;
  *(_DWORD *)(8 * *v6 + v5 + 4) = v7;
  return result;
}
