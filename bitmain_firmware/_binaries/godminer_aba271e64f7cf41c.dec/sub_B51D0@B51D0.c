int __fastcall sub_B51D0(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r3
  int v8; // r0
  char v14[56]; // [sp+2Ch] [bp-1038h] BYREF
  _QWORD v15[2]; // [sp+102Ch] [bp-38h] BYREF
  _QWORD s[2]; // [sp+103Ch] [bp-28h] BYREF
  __int16 v17; // [sp+104Ch] [bp-18h]
  unsigned __int8 i; // [sp+104Fh] [bp-15h]
  int j; // [sp+1050h] [bp-14h]
  unsigned int v20; // [sp+1054h] [bp-10h]
  int v21; // [sp+1058h] [bp-Ch]
  _BYTE v22[3]; // [sp+105Dh] [bp-7h]

  v17 = 255;
  s[0] = 255;
  s[1] = 0;
  v22[2] = 0;
  v15[0] = 838904405;
  v15[1] = 0;
  j = 0;
  *(_WORD *)v22 = (unsigned __int8)(a5 + 6);
  v21 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  BYTE2(v15[0]) = a5 + 6;
  BYTE4(v15[0]) = 2 * a2;
  v20 = 6;
  BYTE5(v15[0]) = a3;
  for ( i = 0; a5 > i; ++i )
  {
    v5 = v20++;
    *((_BYTE *)v15 + v5) = *(_BYTE *)(a4 + i);
  }
  for ( j = 2; j < a5 + 6; ++j )
    *(_WORD *)&v22[1] += *((unsigned __int8 *)v15 + j);
  LOBYTE(v17) = v22[2];
  HIBYTE(v17) = v22[1];
  v6 = v20++;
  *((_BYTE *)v15 + v6) = v22[2];
  v7 = v20++;
  *((_BYTE *)v15 + v7) = HIBYTE(v17);
  v8 = sub_B5138(a1, (int)v15, v20);
  if ( v20 == v8 )
  {
    usleep((__useconds_t)sub_30D40);
    memset(s, 0, sizeof(s));
    if ( sub_B5184(a1, s, 5u) == 5 )
    {
      if ( BYTE1(s[0]) != 50 || BYTE2(s[0]) != 1 )
      {
        V_LOCK();
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
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
          "write_dc_dc",
          11,
          75,
          100,
          v14);
        v21 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
        175,
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
      175,
      "write_dc_dc",
      11,
      61,
      100,
      v14);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v21;
}
