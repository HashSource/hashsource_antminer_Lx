int __fastcall sub_7DC08(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v10[56]; // [sp+44h] [bp-1038h] BYREF
  _BYTE v11[4]; // [sp+1044h] [bp-38h] BYREF
  _DWORD v12[7]; // [sp+1048h] [bp-34h] BYREF
  int v13; // [sp+1064h] [bp-18h]
  int v14; // [sp+106Ch] [bp-10h]

  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s chain[%d] iic_addr:%d",
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1491",
    *(_DWORD *)(a1 + 252),
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1491",
    56,
    1150,
    20,
    v10);
  *a3 = 0;
  v14 = tsensor_read(*(_DWORD *)(a1 + 252), a4, 0, (int)v11, 2u);
  if ( v14 == 2 )
  {
    *a3 = 1;
    *a2 = v11[0];
    V_LOCK();
    sub_77CE8((int)v12, *(int *)(a1 + 252));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "read ctrlboard temp, local[%02x] %d",
      a4,
      *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1491",
      56,
      1162,
      20,
      v10);
    return v14;
  }
  else
  {
    *a2 = -64;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *(_DWORD *)(a1 + 252));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_LTC_1491",
      56,
      1157,
      80,
      v10);
    return -1;
  }
}
