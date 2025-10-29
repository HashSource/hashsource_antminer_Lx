int __fastcall sub_F7204(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r3
  int v8; // r0
  _BYTE v14[20]; // [sp+2Ch] [bp+14h] BYREF
  int v15; // [sp+102Ch] [bp+1014h] BYREF
  int v16; // [sp+1030h] [bp+1018h]
  int v17; // [sp+1034h] [bp+101Ch]
  int v18; // [sp+1038h] [bp+1020h]
  _DWORD v19[4]; // [sp+103Ch] [bp+1024h] BYREF
  __int16 v20; // [sp+104Ch] [bp+1034h]
  char v21; // [sp+104Fh] [bp+1037h]
  int v22; // [sp+1050h] [bp+1038h]
  unsigned int v23; // [sp+1054h] [bp+103Ch]
  int j; // [sp+1058h] [bp+1040h]
  unsigned __int8 i; // [sp+105Dh] [bp+1045h]
  __int16 v26; // [sp+105Eh] [bp+1046h]
  _BYTE v27[4]; // [sp+1060h] [bp+1048h] BYREF

  v20 = 255;
  memset(&v19[1], 0, 12);
  v19[0] = 255;
  v26 = 0;
  v15 = 838904405;
  v17 = 0;
  v18 = 0;
  j = 0;
  v21 = a5 + 6;
  v22 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  BYTE2(v15) = a5 + 6;
  v16 = (unsigned __int8)(2 * a2);
  v23 = 6;
  BYTE1(v16) = a3;
  for ( i = 0; i < a5; ++i )
  {
    v5 = v23++;
    *((_BYTE *)&v15 + v5) = *(_BYTE *)(a4 + i);
  }
  for ( j = 2; a5 + 6 > j; ++j )
    v26 += *((unsigned __int8 *)&v15 + j);
  LOBYTE(v20) = HIBYTE(v26);
  HIBYTE(v20) = v26;
  v6 = v23++;
  v27[v6 - 52] = HIBYTE(v26);
  v7 = v23++;
  v27[v7 - 52] = HIBYTE(v20);
  v8 = sub_F71A4(a1, (int)&v15, v23);
  if ( v8 == v23 )
  {
    usleep(0x30D40u);
    memset(v19, 0, sizeof(v19));
    if ( sub_F71D4(a1, (int)v19, 5u) == 5 )
    {
      if ( BYTE1(v19[0]) != 50 || BYTE2(v19[0]) != 1 )
      {
        V_LOCK();
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
          LOBYTE(v19[0]),
          BYTE1(v19[0]),
          BYTE2(v19[0]),
          HIBYTE(v19[0]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
          87,
          "write_dc_dc",
          11,
          75,
          100,
          v14);
        v22 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
        87,
        "write_dc_dc",
        11,
        68,
        100,
        v14);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s write iic err", "write_dc_dc");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
      87,
      "write_dc_dc",
      11,
      61,
      100,
      v14);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v22;
}
