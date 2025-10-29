int __fastcall sub_57A10(int a1)
{
  int v2; // [sp+4h] [bp-34h]
  int v4; // [sp+44h] [bp+Ch] BYREF
  int v5; // [sp+1044h] [bp+100Ch] BYREF
  _WORD v6[8]; // [sp+1048h] [bp+1010h] BYREF
  _DWORD v7[7]; // [sp+1058h] [bp+1020h] BYREF
  int v8; // [sp+1074h] [bp+103Ch]
  unsigned __int8 *v9; // [sp+107Ch] [bp+1044h]
  int j; // [sp+1080h] [bp+1048h]
  int i; // [sp+1084h] [bp+104Ch]

  V_LOCK();
  logfmt_raw(
    &v4,
    0x1000u,
    0,
    "get start nonce offset %s chip_no %d",
    "ChipSetting_start_nonce_offset_DASH",
    *(_DWORD *)(a1 + 196));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_start_nonce_offset_DASH",
    35,
    352,
    20,
    &v4);
  memset(v6, 0, sizeof(v6));
  LOBYTE(v6[4]) = 1;
  v9 = (unsigned __int8 *)malloc(12 * *(_DWORD *)(a1 + 196));
  for ( i = 0; i <= 1; ++i )
  {
    v6[5] = 8 * (i + 2);
    memset(v9, 0, 12 * *(_DWORD *)(a1 + 196));
    (*(void (__fastcall **)(int, _WORD *, _DWORD, unsigned __int8 *, int *, int, int, _DWORD))(a1 + 176))(
      a1,
      v6,
      *(_DWORD *)(a1 + 196),
      v9,
      &v5,
      v2,
      2000,
      0);
    for ( j = 0; j < v5; ++j )
    {
      V_LOCK();
      sub_563D4((int)v7, *(int *)(a1 + 140));
      logfmt_raw(
        &v4,
        0x1000u,
        0,
        v8,
        v7[0],
        v7[1],
        v7[2],
        v7[3],
        v7[4],
        v7[5],
        v7[6],
        v8,
        "%s asic %d, reg %02x SNO %08x",
        "ChipSetting_start_nonce_offset_DASH",
        v9[12 * j + 4],
        *(unsigned __int16 *)&v9[12 * j + 6],
        *(_DWORD *)&v9[12 * j]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
        72,
        "ChipSetting_start_nonce_offset_DASH",
        35,
        365,
        60,
        &v4);
    }
  }
  free(v9);
  return v5;
}
