int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned int a5)
{
  unsigned __int8 v8; // [sp+1Ah] [bp-181Ah] BYREF
  unsigned __int8 v9; // [sp+1Bh] [bp-1819h] BYREF
  unsigned int v10; // [sp+1Ch] [bp-1818h]
  char v11[16]; // [sp+24h] [bp-1810h] BYREF
  char v12[16]; // [sp+824h] [bp-1010h] BYREF
  int v13; // [sp+1824h] [bp-10h]
  int v14; // [sp+1828h] [bp-Ch]
  int v15; // [sp+182Ch] [bp-8h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v14 = 0;
  v13 = 0;
  if ( a1 <= 0xF )
  {
    v15 = sub_AB0EC(v10, v9);
    if ( v15 == -2147482112 )
    {
      v14 = tsensor_open(v10, (int)&v9, 1u);
      if ( v14 < 0 )
      {
        snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", v10, v9);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/tsensor/bitmain_tsensor.c",
          182,
          "tsensor_read",
          12,
          164,
          100,
          v12);
        return v14;
      }
      v15 = sub_AB0EC(v10, v9);
      if ( v15 == -2147482112 )
      {
        snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", v10, v9);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/tsensor/bitmain_tsensor.c",
          182,
          "tsensor_read",
          12,
          171,
          100,
          v12);
        return v14;
      }
    }
    v14 = iic_read_reg(*(_DWORD *)&byte_15FBAC[68 * v10 + 8 + 8 * v15], &v8, 2u, a4, a5);
    if ( a5 == v14 )
    {
      return v14;
    }
    else
    {
      snprintf(v11, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", v10, v9, v8);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/tsensor/bitmain_tsensor.c",
        182,
        "tsensor_read",
        12,
        196,
        100,
        v12);
      return -2147482112;
    }
  }
  else
  {
    snprintf(v11, 0x800u, " Bad T-sensor param, input chain is %d", v10);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/tsensor/bitmain_tsensor.c",
      182,
      "tsensor_read",
      12,
      155,
      100,
      v12);
    return -2147482111;
  }
}
