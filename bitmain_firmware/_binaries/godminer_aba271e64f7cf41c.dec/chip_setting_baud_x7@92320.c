int __fastcall chip_setting_baud_x7(int a1, int a2)
{
  char v5[12]; // [sp+18h] [bp-120Ch] BYREF
  unsigned __int8 v6[6]; // [sp+1018h] [bp-20Ch] BYREF
  __int16 v7; // [sp+101Eh] [bp-206h]
  int v8; // [sp+1020h] [bp-204h]

  v6[0] = 85;
  v6[1] = -86;
  v6[2] = 14;
  v6[3] = -1;
  v6[4] = -1;
  v6[5] = 4;
  v7 = 0;
  v8 = a2;
  v7 = BM_CRC16((char *)v6, 12);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set baud value %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_baud_x7",
    20,
    768,
    60,
    v5);
  set_chip_reg_x7(a1, v6);
  return 0;
}
