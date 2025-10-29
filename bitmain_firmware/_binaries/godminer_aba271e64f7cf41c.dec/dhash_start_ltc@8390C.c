int __fastcall dhash_start_ltc(int a1)
{
  char v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_77CE8((int)v4, *(int *)(a1 + 252));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "dhash_start_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "dhash_start_ltc",
    15,
    756,
    20,
    v3);
  *(_BYTE *)(a1 + 257) = 1;
  return 0;
}
