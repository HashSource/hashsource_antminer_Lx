int __fastcall read_rxu_status_x7(int a1, void *a2, _DWORD *a3)
{
  char v6[52]; // [sp+38h] [bp-1034h] BYREF
  _DWORD v7[7]; // [sp+1038h] [bp-34h] BYREF
  int v8; // [sp+1054h] [bp-18h]
  int all_rxu_status; // [sp+105Ch] [bp-10h]

  all_rxu_status = chip_setting_get_all_rxu_status(a1, a2, *(_DWORD *)(a1 + 336), a3);
  if ( !all_rxu_status )
    return 0;
  V_LOCK();
  sub_89210((int)v7, *(int *)(a1 + 252));
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
    "chip_setting_get_all_rxu_status failed ,err code %d",
    all_rxu_status);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "read_rxu_status_x7",
    18,
    429,
    100,
    v6);
  return all_rxu_status;
}
