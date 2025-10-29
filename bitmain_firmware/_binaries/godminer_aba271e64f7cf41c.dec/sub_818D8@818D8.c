int __fastcall sub_818D8(_DWORD *a1)
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  char v6[52]; // [sp+38h] [bp-1034h] BYREF
  _DWORD v7[7]; // [sp+1038h] [bp-34h] BYREF
  int v8; // [sp+1054h] [bp-18h]
  unsigned int v9; // [sp+1058h] [bp-14h]
  unsigned int i; // [sp+105Ch] [bp-10h]

  v9 = a1[84];
  for ( i = 0; i <= 2; ++i )
  {
    sub_781DC((int)a1, v9);
    V_LOCK();
    sub_77CE8((int)v7, (int)a1[63]);
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v8,
      v7[0],
      v7[1],
      v7[2],
      v7[3],
      v7[4],
      v7[5],
      v7[6],
      v8,
      "detect chip num %d design num %d",
      a1[106],
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "check_asic_num_ltc",
      18,
      301,
      60,
      v6);
    if ( v9 != a1[106] )
    {
      usleep(0x493E0u);
      v1 = dev_ctrl();
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v1[6])(a1[62], a1[277], a1[282]);
      v2 = dev_ctrl();
      ((void (__fastcall *)(_DWORD))v2[11])(a1[62]);
    }
    if ( v9 == a1[106] )
      break;
  }
  if ( v9 == a1[106] )
    return 0;
  else
    return 102;
}
