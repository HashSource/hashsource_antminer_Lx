int __fastcall get_pcba_test_level_ckb(_DWORD *a1, _DWORD *a2)
{
  _UNKNOWN **v2; // r0
  _BYTE v7[16]; // [sp+50h] [bp+8h] BYREF
  int v8; // [sp+1050h] [bp+1008h] BYREF
  __int16 v9; // [sp+1054h] [bp+100Ch]
  _DWORD v10[7]; // [sp+1058h] [bp+1010h] BYREF
  int v11; // [sp+1074h] [bp+102Ch]
  const char *v12[8]; // [sp+1078h] [bp+1030h] BYREF
  _DWORD v13[7]; // [sp+1098h] [bp+1050h] BYREF
  int v14; // [sp+10B4h] [bp+106Ch]
  unsigned int j; // [sp+10B8h] [bp+1070h]
  unsigned int i; // [sp+10BCh] [bp+1074h]

  v8 = 0;
  v9 = 0;
  if ( a1[192] )
  {
LABEL_19:
    *a2 = a1[192];
    return 0;
  }
  v2 = dev_ctrl();
  if ( ((int (__fastcall *)(_DWORD, int, int, int *))v2[19])(a1[34], 52, 393216, &v8) )
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( __PAIR64__(HIWORD(v8), (unsigned __int16)v8) == __PAIR64__(
                                                             *((unsigned __int16 *)&unk_1B725C + 5 * i + 3),
                                                             *((unsigned __int16 *)&unk_1B725C + 5 * i + 2))
        && __PAIR64__(HIBYTE(v9), (unsigned __int8)v9) == __PAIR64__(
                                                            *((unsigned __int8 *)&unk_1B725C + 10 * i + 9),
                                                            *((unsigned __int8 *)&unk_1B725C + 10 * i + 8)) )
      {
        a1[192] = *(_DWORD *)((char *)&unk_1B725C + 10 * i);
        break;
      }
    }
    if ( !a1[192] )
    {
      for ( j = 0; j <= 4; ++j )
      {
        if ( __PAIR64__(HIWORD(v8), (unsigned __int16)v8) == __PAIR64__(
                                                               *((unsigned __int16 *)&unk_1B725C + 5 * j + 3),
                                                               *((unsigned __int16 *)&unk_1B725C + 5 * j + 2)) )
        {
          a1[192] = *(_DWORD *)((char *)&unk_1B725C + 10 * j);
          break;
        }
      }
    }
    if ( !a1[192] )
      a1[192] = 5;
    V_LOCK();
    sub_51024((int)v13, (int)a1[35]);
    logfmt_raw(
      v7,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v8,
      HIWORD(v8),
      *((unsigned __int8 *)&unk_1B725C + 10 * a1[192] - 2),
      *((unsigned __int8 *)&unk_1B725C + 10 * a1[192] - 1));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
      83,
      "get_pcba_test_level_ckb",
      23,
      520,
      60,
      v7);
    goto LABEL_19;
  }
  *a2 = -1;
  V_LOCK();
  sub_51024((int)v10, (int)a1[35]);
  sub_51000(v12, "pic info error");
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v12[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
    83,
    "get_pcba_test_level_ckb",
    23,
    498,
    120,
    v7);
  return 6;
}
