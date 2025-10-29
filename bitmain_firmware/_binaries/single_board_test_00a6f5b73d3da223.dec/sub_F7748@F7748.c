int __fastcall sub_F7748(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  _BYTE v13[16]; // [sp+28h] [bp+10h] BYREF
  int v14; // [sp+1028h] [bp+1010h] BYREF
  int v15; // [sp+102Ch] [bp+1014h]
  char v16; // [sp+1030h] [bp+1018h]
  _DWORD v17[4]; // [sp+1034h] [bp+101Ch] BYREF
  __int16 v18; // [sp+1044h] [bp+102Ch]
  unsigned int v19; // [sp+1048h] [bp+1030h]
  unsigned __int8 v20; // [sp+104Fh] [bp+1037h]
  int v21; // [sp+1050h] [bp+1038h]
  unsigned __int8 i; // [sp+1055h] [bp+103Dh]
  __int16 v23; // [sp+1056h] [bp+103Eh]
  _BYTE v24[4]; // [sp+1058h] [bp+1040h] BYREF

  v20 = 7;
  v18 = 255;
  memset(&v17[1], 0, 12);
  v17[0] = 255;
  v23 = 0;
  v14 = 839363157;
  v16 = 0;
  v21 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  v15 = (unsigned __int8)(2 * a2) | 1;
  BYTE1(v15) = a3;
  v19 = 7;
  BYTE2(v15) = a5;
  for ( i = 2; i < (unsigned int)v20; ++i )
    v23 += (unsigned __int8)v24[i - 48];
  LOBYTE(v18) = HIBYTE(v23);
  HIBYTE(v18) = v23;
  v5 = v19++;
  v24[v5 - 48] = HIBYTE(v23);
  v6 = v19++;
  v24[v6 - 48] = HIBYTE(v18);
  v7 = sub_F71A4(a1, (int)&v14, v19);
  if ( v7 == v19 )
  {
    usleep(0x30D40u);
    memset(v17, 0, sizeof(v17));
    if ( sub_F71D4(a1, (int)v17, 5u) == 5 )
    {
      if ( BYTE1(v17[0]) == 50 && BYTE2(v17[0]) == 1 )
      {
        for ( i = 0; i < a5; ++i )
          *(_BYTE *)(a4 + i) = v24[i - 33];
        v21 = 1;
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          v13,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "read_dc_dc",
          LOBYTE(v17[0]),
          BYTE1(v17[0]),
          BYTE2(v17[0]),
          HIBYTE(v17[0]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
          87,
          "read_dc_dc",
          10,
          125,
          100,
          v13);
        v21 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s read iic err", "read_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
        87,
        "read_dc_dc",
        10,
        118,
        100,
        v13);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s write iic err", "read_dc_dc");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
      87,
      "read_dc_dc",
      10,
      110,
      100,
      v13);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v21;
}
