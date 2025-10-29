int __fastcall bitmain_power_read(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v4; // r3
  char v8[2048]; // [sp+1Ch] [bp-1850h] BYREF
  char v9[16]; // [sp+81Ch] [bp-1050h] BYREF
  unsigned __int8 v10[40]; // [sp+181Ch] [bp-50h] BYREF
  __int16 v11; // [sp+1844h] [bp-28h]
  __int64 v12; // [sp+1846h] [bp-26h]
  int v13; // [sp+1850h] [bp-1Ch] BYREF
  unsigned __int8 v14; // [sp+1854h] [bp-18h]
  unsigned __int8 v15; // [sp+1855h] [bp-17h]
  _BYTE v16[6]; // [sp+1856h] [bp-16h]
  char v17; // [sp+185Eh] [bp-Eh]
  char v18; // [sp+185Fh] [bp-Dh]
  int v19; // [sp+1860h] [bp-Ch]
  __int16 v20; // [sp+1864h] [bp-8h]
  unsigned __int8 i; // [sp+1867h] [bp-5h]

  *(_WORD *)&v16[4] = 0;
  v17 = 6;
  v18 = 6;
  v13 = 101100117;
  memset(v10, 0, sizeof(v10));
  v11 = 0;
  v12 = 0;
  v19 = 5;
  v20 = a1 + 12 + a3;
  v14 = a1;
  v15 = a3;
  *(_DWORD *)v16 = (unsigned __int8)(a1 + 12 + a3);
  i = 8;
  v16[1] = HIBYTE(v20);
  if ( dword_15FAD4 || (*(_DWORD *)&v16[2] = bitmain_power_open(), *(int *)&v16[2] >= 0) )
  {
    if ( dword_15FAD0 == 255 )
    {
      if ( sub_A4484((unsigned __int8 *)&v13, 8u, v10, 0x32u) )
      {
        strcpy(v8, "get power version failed");
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
          183,
          "bitmain_power_read",
          18,
          980,
          100,
          v9);
        return -2147482880;
      }
    }
    else if ( sub_A47D0(dword_15FAD0, (unsigned __int8 *)&v13, 8u, v10, a3 + 7) )
    {
      strcpy(v8, "set DA conversion N failed");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_power_read",
        18,
        986,
        100,
        v9);
      return -2147482880;
    }
    for ( i = 0; i < a3 + 7; ++i )
    {
      snprintf(v8, 0x800u, "read_back_data[%d]: %02X", i, v10[i]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_power_read",
        18,
        994,
        100,
        v9);
    }
    for ( i = 0; i < (unsigned int)a3; ++i )
    {
      v4 = v19++;
      *(_BYTE *)(a2 + i) = v10[v4];
      snprintf(v8, 0x800u, "buf[%d]: %02X", i, *(unsigned __int8 *)(a2 + i));
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_power_read",
        18,
        999,
        100,
        v9);
    }
    return *(_DWORD *)&v16[2];
  }
  else
  {
    snprintf(v8, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_power_read",
      18,
      976,
      100,
      v9);
    return *(_DWORD *)&v16[2];
  }
}
