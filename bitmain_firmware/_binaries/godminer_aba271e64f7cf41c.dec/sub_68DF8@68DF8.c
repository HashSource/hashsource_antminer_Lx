_DWORD *sub_68DF8()
{
  _DWORD *result; // r0
  _BYTE v1[44]; // [sp+8h] [bp-104h] BYREF
  float v2; // [sp+34h] [bp-D8h]
  double v3; // [sp+40h] [bp-CCh]
  int v4; // [sp+E8h] [bp-24h] BYREF
  char v5; // [sp+F0h] [bp-1Ch]
  int v6; // [sp+FCh] [bp-10h] BYREF
  _DWORD *all_created_runtime; // [sp+100h] [bp-Ch]
  int i; // [sp+104h] [bp-8h]

  v6 = 0;
  all_created_runtime = get_all_created_runtime(&v6);
  result = get_miner_working_status(&v4);
  if ( v5 != 1 )
  {
    for ( i = 0; i < v6; ++i )
    {
      result = v1;
      read_status_from_monitor(v1, all_created_runtime[i]);
      if ( v2 < v3 * 0.8 )
      {
        result = (_DWORD *)strcmp((const char *)(all_created_runtime[i] + 320), "ltc");
        if ( !result )
          result = (_DWORD *)(*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 24))(all_created_runtime[i]);
      }
    }
  }
  return result;
}
