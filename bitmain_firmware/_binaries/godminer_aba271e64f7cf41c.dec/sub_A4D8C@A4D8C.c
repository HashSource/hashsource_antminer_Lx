int __fastcall sub_A4D8C(int a1)
{
  char v3[36]; // [sp+18h] [bp-1824h] BYREF
  char v4[36]; // [sp+818h] [bp-1024h] BYREF
  int v5; // [sp+1818h] [bp-24h] BYREF
  __int16 v6; // [sp+181Ch] [bp-20h]
  __int64 v7; // [sp+1820h] [bp-1Ch] BYREF
  int v8; // [sp+1828h] [bp-14h]
  __int16 v9; // [sp+182Eh] [bp-Eh]
  int v10; // [sp+1830h] [bp-Ch]
  char v11; // [sp+1835h] [bp-7h]
  char v12; // [sp+1836h] [bp-6h]
  char v13; // [sp+1837h] [bp-5h]

  v10 = -2147482880;
  v11 = 4;
  v12 = 2;
  v7 = 0;
  v5 = 33860181;
  v8 = -1;
  v9 = 6;
  v6 = 6;
  v13 = 6;
  if ( a1 != 255 )
  {
    if ( sub_A47D0(a1, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
    {
      strcpy(v3, "get power version failed");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "_bitmain_get_power_version",
        26,
        322,
        100,
        v4);
      return -2147482880;
    }
    return (BYTE5(v7) << 8) | BYTE4(v7);
  }
  if ( !sub_A4484((unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
    return (BYTE5(v7) << 8) | BYTE4(v7);
  strcpy(v3, "get power version failed");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
    183,
    "_bitmain_get_power_version",
    26,
    316,
    100,
    v4);
  return -2147482880;
}
