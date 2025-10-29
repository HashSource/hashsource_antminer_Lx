int __fastcall sub_A6474(int a1)
{
  char v3[36]; // [sp+18h] [bp-1824h] BYREF
  char v4[36]; // [sp+818h] [bp-1024h] BYREF
  unsigned __int8 v5[16]; // [sp+1818h] [bp-24h] BYREF
  int v6; // [sp+1828h] [bp-14h] BYREF
  __int16 v7; // [sp+182Ch] [bp-10h]
  __int16 v8; // [sp+182Eh] [bp-Eh]
  char v9; // [sp+1831h] [bp-Bh]
  char v10; // [sp+1832h] [bp-Ah]
  char v11; // [sp+1833h] [bp-9h]
  int v12; // [sp+1834h] [bp-8h]

  v9 = 4;
  v10 = 10;
  v6 = 168077909;
  memset(v5, 0, 14);
  v12 = -2147482880;
  v8 = 14;
  v7 = 14;
  v11 = 6;
  if ( a1 != 255 )
  {
    if ( sub_A47D0(a1, (unsigned __int8 *)&v6, 6u, v5, 0xEu) )
    {
      strcpy(v3, "get power status failed\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "_bitmain_get_power_status_32bits",
        32,
        628,
        100,
        v4);
      return -2147482880;
    }
    return (v5[7] << 24) | (v5[6] << 16) & 0xFF0000 | (unsigned __int16)(v5[5] << 8) | v5[4];
  }
  if ( !sub_A4484((unsigned __int8 *)&v6, 6u, v5, 0xEu) )
    return (v5[7] << 24) | (v5[6] << 16) & 0xFF0000 | (unsigned __int16)(v5[5] << 8) | v5[4];
  strcpy(v3, "get power status failed\n");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
    183,
    "_bitmain_get_power_status_32bits",
    32,
    622,
    100,
    v4);
  return -2147482880;
}
