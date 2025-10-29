int __fastcall restart_one_chip_x7(int a1, int a2)
{
  char v6[24]; // [sp+34h] [bp-1058h] BYREF
  int v7; // [sp+1034h] [bp-58h] BYREF
  _DWORD v8[7]; // [sp+1038h] [bp-54h] BYREF
  int v9; // [sp+1054h] [bp-38h]
  _DWORD v10[7]; // [sp+1058h] [bp-34h] BYREF
  int v11; // [sp+1074h] [bp-18h]
  int restarted; // [sp+107Ch] [bp-10h]

  restarted = chip_setting_restart_one_chip_x7(a1, a2, &v7);
  if ( restarted )
  {
    V_LOCK();
    sub_89210((int)v8, *(int *)(a1 + 252));
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
      "restart_one_chip failed ,err code %d",
      restarted,
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "restart_one_chip_x7",
      19,
      443,
      100,
      v6);
    return 109;
  }
  else if ( v7 == 1 )
  {
    return 0;
  }
  else
  {
    V_LOCK();
    sub_89210((int)v10, *(int *)(a1 + 252));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v11,
      v10[0],
      v10[1],
      v10[2],
      v10[3],
      v10[4],
      v10[5],
      v10[6],
      v11,
      "restart_one_chip response count err, count:%d, should be 1",
      v7,
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "restart_one_chip_x7",
      19,
      448,
      100,
      v6);
    return 109;
  }
}
