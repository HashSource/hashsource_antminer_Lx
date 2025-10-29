int __fastcall sub_A5AF0(int a1, unsigned __int8 a2)
{
  char v4[32]; // [sp+1Ch] [bp-1820h] BYREF
  char v5[32]; // [sp+81Ch] [bp-1020h] BYREF
  __int64 v6; // [sp+181Ch] [bp-20h] BYREF
  __int64 v7; // [sp+1824h] [bp-18h] BYREF
  __int16 v8; // [sp+182Eh] [bp-Eh]
  char v9; // [sp+1831h] [bp-Bh]
  char v10; // [sp+1832h] [bp-Ah]
  char v11; // [sp+1833h] [bp-9h]
  int v12; // [sp+1834h] [bp-8h]

  v9 = 6;
  v10 = -127;
  v7 = 2164697685LL;
  v6 = 0;
  v12 = -2147482880;
  v8 = a2 + 135;
  BYTE4(v7) = a2;
  HIWORD(v7) = v8;
  v11 = 8;
  if ( a1 != 255 )
  {
    if ( sub_A47D0(a1, (unsigned __int8 *)&v7, 8u, (unsigned __int8 *)&v6, 8u) )
    {
      strcpy(v4, "set watchdog failed");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "_bitmain_set_watchdog",
        21,
        518,
        100,
        v5);
      return -2147482880;
    }
    return (BYTE5(v6) << 8) | BYTE4(v6);
  }
  if ( !sub_A4484((unsigned __int8 *)&v7, 8u, (unsigned __int8 *)&v6, 8u) )
    return (BYTE5(v6) << 8) | BYTE4(v6);
  strcpy(v4, "set watchdog failed");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
    183,
    "_bitmain_set_watchdog",
    21,
    512,
    100,
    v5);
  return -2147482880;
}
