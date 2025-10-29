int __fastcall platform_check_repeat_nonce(int *a1, int a2, unsigned __int8 *a3)
{
  _BYTE v8[4080]; // [sp+48h] [bp+10h] BYREF
  _DWORD v9[7]; // [sp+1048h] [bp+1010h] BYREF
  int v10; // [sp+1064h] [bp+102Ch]
  char *v11; // [sp+106Ch] [bp+1034h]
  char *v12; // [sp+1070h] [bp+1038h]
  char *v13; // [sp+1074h] [bp+103Ch]
  size_t v14; // [sp+1078h] [bp+1040h]
  size_t v15; // [sp+107Ch] [bp+1044h]
  size_t v16; // [sp+1080h] [bp+1048h]
  size_t i; // [sp+1084h] [bp+104Ch]

  v16 = a1[159];
  v15 = 2 * v16 * a2;
  v14 = v16 + v15;
  if ( !memcmp((const void *)(a1[73] + v15), a3, v16) || !memcmp((const void *)(a1[73] + v14), a3, v16) )
  {
    v13 = (char *)calloc(2 * v16 + 1, 1u);
    v12 = (char *)calloc(2 * v16 + 1, 1u);
    v11 = (char *)calloc(2 * v16 + 1, 1u);
    if ( v13 && v12 && v11 )
    {
      for ( i = 0; i < v16; ++i )
      {
        sprintf(&v13[2 * i], "%02x", a3[i]);
        sprintf(&v12[2 * i], "%02x", *(unsigned __int8 *)(v15 + i + a1[73]));
        sprintf(&v11[2 * i], "%02x", *(unsigned __int8 *)(v14 + i + a1[73]));
      }
      V_LOCK();
      sub_4A094((int)v9, a1[35]);
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "asic %d repeat nonce %s %s %s",
        a2,
        v13,
        v12,
        v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_base.c",
        72,
        "platform_check_repeat_nonce",
        27,
        81,
        20,
        v8);
    }
    if ( v11 )
      free(v11);
    if ( v12 )
      free(v12);
    if ( v13 )
      free(v13);
    return 4;
  }
  else
  {
    memcpy((void *)(a1[73] + v14), (const void *)(v15 + a1[73]), v16);
    memcpy((void *)(a1[73] + v15), a3, v16);
    return 0;
  }
}
