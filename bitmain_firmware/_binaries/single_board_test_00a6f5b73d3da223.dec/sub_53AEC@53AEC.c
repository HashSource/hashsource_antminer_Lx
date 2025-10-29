int __fastcall sub_53AEC(int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // r2
  _BYTE v8[28]; // [sp+44h] [bp+14h] BYREF
  int v9; // [sp+1044h] [bp+1014h] BYREF
  _WORD v10[8]; // [sp+1048h] [bp+1018h] BYREF
  _DWORD v11[7]; // [sp+1058h] [bp+1028h] BYREF
  int v12; // [sp+1074h] [bp+1044h]
  unsigned __int8 *v13; // [sp+1078h] [bp+1048h]
  int i; // [sp+107Ch] [bp+104Ch]

  v9 = 0;
  memset(v10, 0, sizeof(v10));
  v10[4] = 1;
  v10[5] = 52;
  v13 = (unsigned __int8 *)malloc(12 * *(_DWORD *)(a1 + 236));
  memset(v13, 0, 12 * *(_DWORD *)(a1 + 236));
  (*(void (__fastcall **)(int, _WORD *, _DWORD, unsigned __int8 *, int *))(a1 + 176))(
    a1,
    v10,
    *(_DWORD *)(a1 + 236),
    v13,
    &v9);
  for ( i = 0; i < v9; ++i )
  {
    if ( *(_WORD *)&v13[12 * i + 6] == 52 )
    {
      V_LOCK();
      sub_51024((int)v11, *(int *)(a1 + 140));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "[Chip status] asic %02x, reg %02x state %08x",
        v13[12 * i + 4],
        *(unsigned __int16 *)&v13[12 * i + 6],
        *(_DWORD *)&v13[12 * i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
        72,
        "ChipSetting_get_crc_status_CKB",
        30,
        705,
        60,
        v8);
    }
  }
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 236);
    if ( v3 >= a3 )
      v3 = a3;
    memcpy(a2, v13, 12 * v3);
  }
  free(v13);
  return v9;
}
