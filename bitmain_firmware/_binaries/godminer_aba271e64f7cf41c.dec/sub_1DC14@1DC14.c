json_t *__fastcall sub_1DC14(json_t *a1, _DWORD *a2)
{
  json_t *result; // r0
  int v4; // [sp+Ch] [bp-20h] BYREF
  _DWORD *v5; // [sp+20h] [bp-Ch]
  int v6; // [sp+24h] [bp-8h]

  v5 = a2;
  result = (json_t *)get_miner_working_status(&v4);
  v6 = 0;
  if ( a1 )
  {
    if ( (_BYTE)v4 )
      v6 = -1;
    if ( BYTE2(v4) )
      v6 = -2;
    return sub_1D95C(a1, v5, v6);
  }
  return result;
}
