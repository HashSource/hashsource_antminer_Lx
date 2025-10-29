int __fastcall sub_69B18(int a1, __int16 a2, __int16 a3, void *a4)
{
  int v5; // [sp+4h] [bp-34h]
  char v8; // [sp+42h] [bp+Ah]
  int v10; // [sp+4Ch] [bp+14h] BYREF
  int v11; // [sp+104Ch] [bp+1014h] BYREF
  _WORD v12[8]; // [sp+1050h] [bp+1018h] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp+1028h] BYREF
  int v14; // [sp+107Ch] [bp+1044h]
  unsigned __int8 *v15; // [sp+1084h] [bp+104Ch]
  int i; // [sp+1088h] [bp+1050h]
  int v17; // [sp+108Ch] [bp+1054h]

  v8 = a2;
  v11 = 0;
  v17 = *(_DWORD *)(a1 + 236);
  if ( a2 == 255 )
    v17 = 5 * *(_DWORD *)(a1 + 236);
  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_VBK", v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_get_core_status_VBK",
    31,
    844,
    20,
    &v10);
  memset(v12, 0, sizeof(v12));
  v12[4] = 1;
  v15 = (unsigned __int8 *)malloc(12 * v17);
  v12[5] = a3;
  LOBYTE(v12[6]) = v8;
  memset(v15, 0, 12 * v17);
  (*(void (__fastcall **)(int, _WORD *, int, unsigned __int8 *, int *, int, int, _DWORD))(a1 + 184))(
    a1,
    v12,
    v17,
    v15,
    &v11,
    v5,
    2000,
    0);
  for ( i = 0; i < v11; ++i )
  {
    V_LOCK();
    sub_6688C((int)v13, *(int *)(a1 + 140));
    logfmt_raw(
      &v10,
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
      "[Core State] asic %02x core %02x reg %04x state %08x",
      v15[12 * i + 4],
      v15[12 * i + 8],
      *(unsigned __int16 *)&v15[12 * i + 6],
      *(_DWORD *)&v15[12 * i]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_get_core_status_VBK",
      31,
      856,
      20,
      &v10);
  }
  if ( a4 )
    memcpy(a4, v15, 12 * v17);
  free(v15);
  return v11;
}
