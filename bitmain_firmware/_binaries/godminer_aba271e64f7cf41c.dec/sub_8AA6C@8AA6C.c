int __fastcall sub_8AA6C(int *a1)
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  char v6[56]; // [sp+34h] [bp-1038h] BYREF
  int v7; // [sp+1034h] [bp-38h] BYREF
  _DWORD v8[7]; // [sp+1038h] [bp-34h] BYREF
  int v9; // [sp+1054h] [bp-18h]
  unsigned int v10; // [sp+1058h] [bp-14h]
  int v11; // [sp+105Ch] [bp-10h]

  v10 = a1[84];
  v11 = 0;
  v7 = 0;
  do
  {
    chip_setting_get_restart_reg_x7((int)a1, 0xFFu, &v7);
    a1[106] = v7;
    chip_setting_get_addr_x7(a1, v10);
    if ( a1[106] != v10 )
    {
      V_LOCK();
      sub_89210((int)v8, a1[63]);
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v9,
        v8[0],
        v8[1],
        v8[2],
        v8[3],
        v8[4],
        v8[5],
        v8[6],
        v9,
        "some chip not found ,restart chain");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
        179,
        "check_asic_num_x7",
        17,
        352,
        80,
        v6);
      v1 = dev_ctrl();
      ((void (__fastcall *)(int))v1[7])(a1[62]);
      sleep(0xAu);
      v2 = dev_ctrl();
      ((void (__fastcall *)(int, int, int))v2[6])(a1[62], a1[277], a1[282]);
      sleep(5u);
    }
    if ( a1[106] == v10 )
      break;
    ++v11;
  }
  while ( v11 <= 2 );
  if ( a1[106] == v10 )
    return 0;
  else
    return 102;
}
