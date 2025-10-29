int __fastcall sub_72D40(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _BYTE v10[8]; // [sp+20h] [bp+10h] BYREF
  char v11; // [sp+1023h] [bp+1013h] BYREF
  int v12; // [sp+1024h] [bp+1014h]

  *a3 = 0;
  v12 = pic1704_write_iic(*(_DWORD *)(a1 + 140), a4);
  if ( v12 )
  {
    usleep(0x2710u);
    v12 = pic1704_read_iic(*(_DWORD *)(a1 + 140), a4, &v11);
    if ( v12 )
    {
      *a3 = 1;
      *a2 = v11;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "fail to read pic temp for chain %d iic_addr %d", *(_DWORD *)(a1 + 140), a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
        72,
        "ChipSetting_read_sensor_temp_local_on_pic_AE",
        44,
        636,
        20,
        v10);
    }
    return v12;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "pic temp write iic error! chain %d iic_addr %d", *(_DWORD *)(a1 + 140), a4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_read_sensor_temp_local_on_pic_AE",
      44,
      625,
      20,
      v10);
    return v12;
  }
}
