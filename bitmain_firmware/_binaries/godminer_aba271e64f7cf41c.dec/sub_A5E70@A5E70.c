int __fastcall sub_A5E70(int a1)
{
  char v3[28]; // [sp+18h] [bp-181Ch] BYREF
  char v4[28]; // [sp+818h] [bp-101Ch] BYREF
  __int64 v5; // [sp+1818h] [bp-1Ch] BYREF
  int v6; // [sp+1820h] [bp-14h] BYREF
  __int16 v7; // [sp+1824h] [bp-10h]
  __int16 v8; // [sp+1826h] [bp-Eh]
  char v9; // [sp+1829h] [bp-Bh]
  char v10; // [sp+182Ah] [bp-Ah]
  char v11; // [sp+182Bh] [bp-9h]
  int v12; // [sp+182Ch] [bp-8h]

  v9 = 4;
  v10 = 10;
  v6 = 168077909;
  v5 = 0;
  v12 = -2147482880;
  v8 = 14;
  v7 = 14;
  v11 = 6;
  if ( a1 != 255 )
  {
    if ( sub_A47D0(a1, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v5, 8u) )
    {
      strcpy(v3, "get power status failed");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "_bitmain_get_power_status",
        25,
        553,
        100,
        v4);
      return -2147482880;
    }
    return (BYTE5(v5) << 8) | BYTE4(v5);
  }
  if ( !sub_A4484((unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v5, 8u) )
    return (BYTE5(v5) << 8) | BYTE4(v5);
  strcpy(v3, "get power status failed");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
    183,
    "_bitmain_get_power_status",
    25,
    547,
    100,
    v4);
  return -2147482880;
}
