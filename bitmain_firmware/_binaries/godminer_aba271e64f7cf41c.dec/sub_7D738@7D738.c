int __fastcall sub_7D738(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v10[12]; // [sp+20h] [bp-100Ch] BYREF
  char v11; // [sp+1023h] [bp-9h] BYREF
  int v12; // [sp+1024h] [bp-8h]

  *a3 = 0;
  *a2 = -64;
  v12 = pic1704_write_iic(*(_DWORD *)(a1 + 252), a4);
  if ( v12 )
  {
    usleep(0x2710u);
    v12 = pic1704_read_iic(*(_DWORD *)(a1 + 252), a4, &v11);
    if ( v12 )
    {
      *a3 = 1;
      *a2 = v11;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "fail to read pic temp for chain %d iic_addr %d", *(_DWORD *)(a1 + 252), a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/./backend/chip_setting.c",
        162,
        "ChipSetting_read_sensor_temp_local_on_pic_LTC_1491",
        50,
        1110,
        20,
        v10);
    }
    return v12;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "pic temp write iic error! chain %d iic_addr %d", *(_DWORD *)(a1 + 252), a4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/./backend/chip_setting.c",
      162,
      "ChipSetting_read_sensor_temp_local_on_pic_LTC_1491",
      50,
      1099,
      20,
      v10);
    return v12;
  }
}
