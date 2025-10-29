int __fastcall sub_7BB48(_DWORD *a1, signed int a2)
{
  _BYTE v6[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE *v7; // [sp+101Ch] [bp+100Ch]
  char v8; // [sp+1022h] [bp+1012h]
  char v9; // [sp+1023h] [bp+1013h]
  signed int i; // [sp+1024h] [bp+1014h]

  v9 = 0;
  v8 = 0;
  v7 = calloc(a2, 8u);
  if ( v7 )
  {
    for ( i = 0; i < a2; ++i )
    {
      if ( BYTE1(a1[2 * i]) == i )
      {
        v7[8 * i + 1] = i;
        *(_DWORD *)&v7[8 * i + 4] = a1[2 * i + 1];
      }
    }
    memcpy(a1, v7, 8 * a2);
    free(v7);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s calloc failed!", "sort_resp_data_by_core_id");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "sort_resp_data_by_core_id",
      25,
      786,
      100,
      v6);
    return -1;
  }
}
