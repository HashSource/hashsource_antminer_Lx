int __fastcall sub_7DF0C(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v10[12]; // [sp+20h] [bp-100Ch] BYREF
  _BYTE v11[4]; // [sp+1020h] [bp-Ch] BYREF
  int v12; // [sp+1024h] [bp-8h]

  *a3 = 0;
  v12 = tsensor_read(*(_DWORD *)(a1 + 252), a4, 0, (int)v11, 2u);
  if ( v12 == 2 )
  {
    *a3 = 1;
    *a2 = v11[0] + *(unsigned __int8 *)(a1 + 1116);
    return v12;
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
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1491",
      57,
      1176,
      80,
      v10,
      a4);
    return -1;
  }
}
