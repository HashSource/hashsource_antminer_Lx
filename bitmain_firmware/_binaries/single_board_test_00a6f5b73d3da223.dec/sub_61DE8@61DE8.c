int __fastcall sub_61DE8(int a1, int a2)
{
  int v2; // r3
  int v4; // [sp+4h] [bp-44h]
  _BYTE v7[12]; // [sp+54h] [bp+Ch] BYREF
  int v8; // [sp+1054h] [bp+100Ch] BYREF
  _WORD v9[8]; // [sp+1058h] [bp+1010h] BYREF
  _DWORD v10[7]; // [sp+1068h] [bp+1020h] BYREF
  int v11; // [sp+1084h] [bp+103Ch]
  _DWORD v12[7]; // [sp+1088h] [bp+1040h] BYREF
  int v13; // [sp+10A4h] [bp+105Ch]
  const char *v14[8]; // [sp+10A8h] [bp+1060h] BYREF
  unsigned __int16 *v15; // [sp+10CCh] [bp+1084h]
  int v16; // [sp+10D0h] [bp+1088h]
  int j; // [sp+10D4h] [bp+108Ch]
  int i; // [sp+10D8h] [bp+1090h]
  int v19; // [sp+10DCh] [bp+1094h]

  v8 = 0;
  v19 = 0;
  v16 = 0;
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_CKB2", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_get_addr_CKB2",
    25,
    26,
    20,
    v7);
  memset(v9, 0, sizeof(v9));
  LOBYTE(v9[4]) = 1;
  v9[5] = 0;
  v15 = (unsigned __int16 *)malloc(12 * a2);
  memset(v15, 0, 12 * a2);
  (*(void (__fastcall **)(int, _WORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 176))(
    a1,
    v9,
    a2,
    v15,
    &v8,
    v4,
    3000,
    0);
  V_LOCK();
  sub_61B94((int)v10, *(int *)(a1 + 140));
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
    "%s detect %d chips",
    "ChipSetting_get_addr_CKB2",
    v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_get_addr_CKB2",
    25,
    36,
    60,
    v7);
  for ( i = 0; i < v8; ++i )
  {
    v16 = (unsigned __int8)BYTE1(*(_DWORD *)&v15[6 * i]) | (unsigned __int16)(v15[6 * i] << 8);
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
      v16,
      *(_DWORD *)(a1 + 192),
      i,
      v15[6 * i + 3],
      LOBYTE(v15[6 * i + 2]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_get_addr_CKB2",
      25,
      40,
      20,
      v7);
    if ( *(_DWORD *)(a1 + 192) == v16 )
      ++v19;
    for ( j = 0; *(_DWORD *)(a1 + 196) > j; ++j )
    {
      if ( LOBYTE(v15[6 * i + 2]) == *(unsigned __int8 *)(j + *(_DWORD *)(a1 + 296)) )
      {
        LOBYTE(v2) = j & 0x1F;
        if ( j <= 0 )
          v2 = -(-j & 0x1F);
        *(_DWORD *)(*(_DWORD *)(a1 + 300) + 4 * (j / 32)) = (1 << v2)
                                                          | *(_DWORD *)(4 * (j / 32) + *(_DWORD *)(a1 + 300));
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(4 * (j / 32) + *(_DWORD *)(a1 + 300)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
          72,
          "ChipSetting_get_addr_CKB2",
          25,
          47,
          20,
          v7);
        break;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 196) > v19 )
  {
    V_LOCK();
    sub_61B94((int)v12, *(int *)(a1 + 140));
    sub_61B70(v14, "asic num error");
    logfmt_raw(
      v7,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v14[7],
      "detected asic num less than design");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_get_addr_CKB2",
      25,
      54,
      100,
      v7);
  }
  free(v15);
  *(_DWORD *)(a1 + 236) = v19;
  return v8;
}
