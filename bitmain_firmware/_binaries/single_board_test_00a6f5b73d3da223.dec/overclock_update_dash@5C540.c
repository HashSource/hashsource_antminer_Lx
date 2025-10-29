int __fastcall overclock_update_dash(int a1, unsigned int a2)
{
  _BYTE v5[8]; // [sp+38h] [bp+8h] BYREF
  _DWORD v6[7]; // [sp+1038h] [bp+1008h] BYREF
  int v7; // [sp+1054h] [bp+1024h]
  _DWORD v8[7]; // [sp+1058h] [bp+1028h] BYREF
  int v9; // [sp+1074h] [bp+1044h]
  unsigned int i; // [sp+1078h] [bp+1048h]
  char v11; // [sp+107Fh] [bp+104Fh]

  v11 = 0;
  if ( *(_BYTE *)(a1 + 144) != 1 )
  {
    for ( i = 0; i <= 1; ++i )
    {
      if ( dword_1B80C4[2 * i] == a2 )
      {
        *(_DWORD *)(a1 + 772) = (int)*(float *)(a1 + 760) * (*(_DWORD *)(a1 + 772) / a2);
        *(float *)(a1 + 760) = (float)(int)a2;
        *(_DWORD *)(a1 + 764) = dword_1B80C4[2 * i + 1];
        v11 = 1;
        break;
      }
    }
    V_LOCK();
    if ( v11 )
    {
      sub_563D4((int)v6, *(int *)(a1 + 140));
      logfmt_raw(
        v5,
        0x1000u,
        0,
        v7,
        v6[0],
        v6[1],
        v6[2],
        v6[3],
        v6[4],
        v6[5],
        v6[6],
        v7,
        "overclock freq %d voltage %d",
        (int)*(float *)(a1 + 760),
        *(_DWORD *)(a1 + 764));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "overclock_update_dash",
        21,
        846,
        60,
        v5);
    }
    else
    {
      sub_563D4((int)v8, *(int *)(a1 + 140));
      logfmt_raw(
        v5,
        0x1000u,
        0,
        v9,
        v8[0],
        v8[1],
        v8[2],
        v8[3],
        v8[4],
        v8[5],
        v8[6],
        v9,
        "cannot overclock with freq %d",
        a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
        85,
        "overclock_update_dash",
        21,
        848,
        60,
        v5);
    }
  }
  return 0;
}
