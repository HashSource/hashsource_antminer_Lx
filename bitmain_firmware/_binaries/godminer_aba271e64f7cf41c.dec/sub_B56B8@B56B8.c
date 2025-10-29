int __fastcall sub_B56B8(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  char v13[48]; // [sp+2Ch] [bp-1030h] BYREF
  char v14; // [sp+102Ch] [bp-30h] BYREF
  __int64 v15; // [sp+102Dh] [bp-2Fh]
  _QWORD s[2]; // [sp+1038h] [bp-24h] BYREF
  __int16 v17; // [sp+1048h] [bp-14h]
  unsigned __int8 i; // [sp+104Bh] [bp-11h]
  int v19; // [sp+104Ch] [bp-10h]
  unsigned __int8 v20; // [sp+1051h] [bp-Bh]
  __int16 v21; // [sp+1052h] [bp-Ah]
  unsigned int v22; // [sp+1054h] [bp-8h]

  v20 = 7;
  v17 = 255;
  s[0] = 255;
  s[1] = 0;
  v21 = 0;
  v15 = 3278762;
  v19 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  v14 = 85;
  BYTE3(v15) = (2 * a2) | 1;
  BYTE4(v15) = a3;
  v22 = 7;
  BYTE5(v15) = a5;
  for ( i = 2; i < (unsigned int)v20; ++i )
    v21 += (unsigned __int8)*(&v14 + i);
  LOBYTE(v17) = HIBYTE(v21);
  HIBYTE(v17) = v21;
  v5 = v22++;
  *(&v14 + v5) = HIBYTE(v21);
  v6 = v22++;
  *(&v14 + v6) = HIBYTE(v17);
  v7 = sub_B5138(a1, (int)&v14, v22);
  if ( v22 == v7 )
  {
    usleep((__useconds_t)sub_30D40);
    memset(s, 0, sizeof(s));
    if ( sub_B5184(a1, s, 5u) == 5 )
    {
      if ( BYTE1(s[0]) == 50 && BYTE2(s[0]) == 1 )
      {
        for ( i = 0; a5 > i; ++i )
          *(_BYTE *)(a4 + i) = *((_BYTE *)s + i + 3);
        v19 = 1;
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
          LOBYTE(s[0]),
          BYTE1(s[0]),
          BYTE2(s[0]),
          BYTE3(s[0]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
          175,
          "read_dc_dc",
          10,
          125,
          100,
          v13);
        v19 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s read iic err", "read_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
        175,
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
      175,
      "read_dc_dc",
      10,
      110,
      100,
      v13);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v19;
}
