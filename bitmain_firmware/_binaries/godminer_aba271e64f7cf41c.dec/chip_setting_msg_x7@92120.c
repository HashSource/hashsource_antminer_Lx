int __fastcall chip_setting_msg_x7(int a1, const void *a2, unsigned __int8 a3, char a4)
{
  char v9[52]; // [sp+38h] [bp-1234h] BYREF
  _WORD dest[260]; // [sp+1038h] [bp-234h] BYREF
  _DWORD v11[7]; // [sp+1240h] [bp-2Ch] BYREF
  int v12; // [sp+125Ch] [bp-10h]

  memcpy(dest, a2, 0xD6u);
  dest[0] = -21931;
  LOBYTE(dest[1]) = 3;
  HIBYTE(dest[1]) = a4;
  LOBYTE(dest[2]) = -1;
  HIBYTE(dest[2]) = a3 - 8;
  dest[3] = 0;
  dest[3] = BM_CRC16((char *)dest, (unsigned __int8)(a3 - 8) + 8);
  if ( a3 && a3 > 8u )
    return set_chip_reg_x7(a1, (unsigned __int8 *)dest);
  V_LOCK();
  sub_8F850((int)v11, *(int *)(a1 + 252));
  logfmt_raw(v9, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "packet_len is zero");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_msg_x7",
    19,
    737,
    40,
    v9);
  return 4;
}
