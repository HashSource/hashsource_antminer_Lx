int __fastcall pic1704_get_single_voltage(char a1, int *a2)
{
  char v5[28]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v6[28]; // [sp+81Ch] [bp+80Ch] BYREF
  _BYTE v7[7]; // [sp+181Ch] [bp+180Ch] BYREF
  int v8; // [sp+1824h] [bp+1814h] BYREF
  __int16 v9; // [sp+1828h] [bp+1818h]
  int v10; // [sp+182Ch] [bp+181Ch]
  int v11; // [sp+1830h] [bp+1820h]

  v8 = 0;
  v9 = 0;
  *(_DWORD *)&v7[3] = 0;
  *(_DWORD *)v7 = 255;
  LOWORD(v10) = 58;
  v11 = 0;
  HIBYTE(v10) = a1;
  BYTE2(v10) = 7;
  if ( !(unsigned __int8)sub_E289C(v10, 0, &v8, v7) )
    return 0;
  if ( v7[2] == 1 && sub_E35A0(v7) )
  {
    *a2 = (v7[3] << 8) | v7[4];
    snprintf(v5, 0x800u, "Received one voltage response: vol = %d.", *a2);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
      87,
      "pic1704_get_single_voltage",
      26,
      484,
      20,
      v6);
    return 1;
  }
  else
  {
    snprintf(v5, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v7[0], v7[1], v7[2]);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
      87,
      "pic1704_get_single_voltage",
      26,
      480,
      20,
      v6);
    return 1;
  }
}
