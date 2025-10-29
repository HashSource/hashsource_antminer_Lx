json_t *__fastcall sub_1DB28(json_t *a1, _DWORD *a2)
{
  json_t *result; // r0
  int v4; // [sp+Ch] [bp-20h] BYREF
  char v5; // [sp+12h] [bp-1Ah]
  _DWORD *v6; // [sp+20h] [bp-Ch]
  int v7; // [sp+24h] [bp-8h]

  v6 = a2;
  result = (json_t *)get_miner_working_status(&v4);
  v7 = 0;
  if ( a1 )
  {
    if ( v5 )
      v7 = -1;
    else
      v7 = 0;
    return sub_1D95C(a1, v6, v7);
  }
  return result;
}
