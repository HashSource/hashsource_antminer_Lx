int __fastcall pic1704_get_all_voltage(char a1, int *a2, int *a3, int *a4)
{
  char v9[28]; // [sp+24h] [bp+14h] BYREF
  _BYTE v10[28]; // [sp+824h] [bp+814h] BYREF
  int v11; // [sp+1824h] [bp+1814h] BYREF
  unsigned __int8 v12[8]; // [sp+1828h] [bp+1818h]
  int v13; // [sp+1830h] [bp+1820h] BYREF
  int v14; // [sp+1834h] [bp+1824h]
  int v15; // [sp+1838h] [bp+1828h]

  v13 = 0;
  *(_DWORD *)v12 = 0;
  *(_DWORD *)&v12[3] = 0;
  v11 = 255;
  LOWORD(v14) = 55;
  v15 = 0;
  HIBYTE(v14) = a1;
  BYTE2(v14) = 11;
  if ( !(unsigned __int8)sub_E289C(v14, 0, &v13, (unsigned __int8 *)&v11) )
    return 0;
  *a2 = (HIBYTE(v11) << 8) | v12[0];
  *a3 = (v12[1] << 8) | v12[2];
  *a4 = (v12[3] << 8) | v12[4];
  snprintf(v9, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, *a4);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
    87,
    "pic1704_get_all_voltage",
    23,
    511,
    20,
    v10);
  return 1;
}
