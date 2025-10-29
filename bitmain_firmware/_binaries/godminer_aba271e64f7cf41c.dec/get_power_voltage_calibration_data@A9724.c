int get_power_voltage_calibration_data()
{
  double v0; // d0
  __int64 v2; // r0
  _DWORD v4[9]; // [sp+10h] [bp-18A4h] BYREF
  char v5[36]; // [sp+810h] [bp-10A4h] BYREF
  _DWORD v6[5]; // [sp+1810h] [bp-A4h] BYREF
  unsigned int v7; // [sp+1824h] [bp-90h]
  __int64 dest; // [sp+1828h] [bp-8Ch] BYREF
  uint8_t src[8]; // [sp+1844h] [bp-70h] BYREF
  unsigned int v10; // [sp+184Ch] [bp-68h]
  unsigned __int8 v11; // [sp+1850h] [bp-64h]
  unsigned __int8 v12; // [sp+1851h] [bp-63h]
  _BYTE v13[18]; // [sp+1852h] [bp-62h] BYREF
  double *v14; // [sp+1864h] [bp-50h]
  _BYTE *v15; // [sp+1868h] [bp-4Ch]
  unsigned int v16; // [sp+186Ch] [bp-48h]
  unsigned int v17; // [sp+1870h] [bp-44h]
  unsigned int v18; // [sp+1874h] [bp-40h]
  unsigned __int16 v19; // [sp+187Ah] [bp-3Ah]
  unsigned int v20; // [sp+187Ch] [bp-38h]
  __int64 v21; // [sp+1880h] [bp-34h]
  uint8_t v22; // [sp+188Fh] [bp-25h]
  uint16_t v23; // [sp+1890h] [bp-24h]
  unsigned __int16 v24; // [sp+1892h] [bp-22h]
  int i; // [sp+1894h] [bp-20h]
  int v26; // [sp+1898h] [bp-1Ch]
  unsigned int j; // [sp+189Ch] [bp-18h]
  unsigned int k; // [sp+18A0h] [bp-14h]
  unsigned __int8 v29; // [sp+18A7h] [bp-Dh]

  v29 = sub_A9658(dword_15FAD8);
  if ( v29 == 255 )
    return -1;
  if ( is_power_protocal_v2() )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s power protocal not support!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "get_power_voltage_calibration_data",
      34,
      1210,
      100,
      v5);
    return -1;
  }
  else if ( bitmain_power_read(v29, (int)src, 0x20u) )
  {
    return -1;
  }
  else
  {
    strcpy((char *)v4, "power calibration data:");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "get_power_voltage_calibration_data",
      34,
      1221,
      100,
      v5,
      v4[0],
      v4[1],
      v4[2],
      v4[3],
      v4[4],
      v4[5]);
    for ( i = 0; i <= 31; i += 4 )
    {
      snprintf((char *)v4, 0x800u, "%2X %2X %2X %2X  ", src[i], src[i + 1], src[i + 2], src[i + 3]);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "get_power_voltage_calibration_data",
        34,
        1223,
        100,
        v5);
    }
    v24 = (v13[16] << 8) + v13[17];
    v23 = CRC16(src, 0x1Eu);
    if ( v24 == v23 )
    {
      v22 = src[0];
      memcpy(&dest, src, sizeof(dest));
      v7 = v10;
      LODWORD(v2) = sub_A3FB0(dest, HIDWORD(dest));
      dest = v2;
      v7 = sub_A3F88(v7);
      v21 = dest & 0x1FFFFFFFFFFFFFFLL;
      v20 = v7;
      memset(v6, 0, 18);
      sub_A8B08((int)v6, 0xCu, dest & 0x1FFFFFFFFFFFFFFLL, 0x24u);
      sub_A8B08((int)&v6[2] + 3, 7u, v20, 0x24u);
      dword_15FAE8[0] = v6[0];
      dword_15FAE8[1] = v6[1];
      dword_15FAE8[2] = v6[2];
      dword_15FAE8[3] = v6[3];
      word_15FAF8 = v6[4];
      v19 = (v13[14] << 8) + v13[15];
      v18 = v19 / 0x174u;
      v17 = v19 / 0x1Fu % 0xC + 1;
      v16 = v19 % 0x1Fu + 1;
      dword_15FBA0 = 10000 * v18 + 100 * v17 + v16;
      v15 = v13;
      v26 = (__int16)((v11 << 8) + v12);
      for ( j = 0; j <= 0xD && (char)v15[j] != -128; ++j )
        ;
      v14 = (double *)dword_15FAE8;
      dword_15FAFC = j + 1;
      if ( (unsigned __int8)sub_A9034((int)&byte_15FB00, j + 1) != 1 )
      {
        return -1;
      }
      else
      {
        sub_A9108();
        v14[13] = v0 + (double)v26 / 1000.0;
        for ( k = 0; k < j; ++k )
        {
          v26 += (char)v15[k];
          sub_A9108();
          v14[k + 14] = v0 + (double)v26 / 1000.0;
        }
        return 0;
      }
    }
    else
    {
      strcpy((char *)v4, "calibration data crc err");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "get_power_voltage_calibration_data",
        34,
        1232,
        100,
        v5);
      return -1;
    }
  }
}
