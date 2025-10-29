int __fastcall sub_54638(int a1, char a2, __int16 a3, __int16 a4, void *a5)
{
  int v6; // [sp+4h] [bp-34h]
  char v8; // [sp+40h] [bp+8h]
  int v11; // [sp+4Ch] [bp+14h] BYREF
  int v12; // [sp+104Ch] [bp+1014h] BYREF
  _WORD v13[8]; // [sp+1050h] [bp+1018h] BYREF
  _DWORD v14[7]; // [sp+1060h] [bp+1028h] BYREF
  int v15; // [sp+107Ch] [bp+1044h]
  unsigned __int8 *v16; // [sp+1084h] [bp+104Ch]
  int i; // [sp+1088h] [bp+1050h]
  int v18; // [sp+108Ch] [bp+1054h]

  v8 = a3;
  v12 = 0;
  v18 = 1;
  if ( a3 == 255 )
    v18 = 20;
  V_LOCK();
  logfmt_raw(&v11, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_CKB", v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_get_single_chip_core_status_CKB",
    43,
    873,
    20,
    &v11);
  memset(v13, 0, sizeof(v13));
  LOBYTE(v13[4]) = 0;
  HIBYTE(v13[4]) = a2;
  v16 = (unsigned __int8 *)malloc(12 * v18);
  v13[5] = a4;
  LOBYTE(v13[6]) = v8;
  memset(v16, 0, 12 * v18);
  (*(void (__fastcall **)(int, _WORD *, int, unsigned __int8 *, int *, int, int, _DWORD))(a1 + 184))(
    a1,
    v13,
    v18,
    v16,
    &v12,
    v6,
    2000,
    0);
  for ( i = 0; i < v12; ++i )
  {
    V_LOCK();
    sub_51024((int)v14, *(int *)(a1 + 140));
    logfmt_raw(
      &v11,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "[Core State] asic %02x core %02x reg %04x state %08x",
      v16[12 * i + 4],
      v16[12 * i + 8],
      *(unsigned __int16 *)&v16[12 * i + 6],
      *(_DWORD *)&v16[12 * i]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_get_single_chip_core_status_CKB",
      43,
      885,
      20,
      &v11);
  }
  if ( a5 )
    memcpy(a5, v16, 12 * v18);
  free(v16);
  return v12;
}
