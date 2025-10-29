int __fastcall sub_83148(int a1, int a2)
{
  float v2; // s0
  char v5[8]; // [sp+24h] [bp-1008h] BYREF
  int v6; // [sp+1024h] [bp-8h]

  v6 = 0;
  chip_setting_freq_ltc(a1, 1, 0, a2);
  *(_QWORD *)(a1 + 1120) = (unsigned __int64)(205520896.0 / (double)(int)v2 * 70.0 / 100.0);
  *(_DWORD *)(a1 + 464) = (int)v2;
  V_LOCK();
  logfmt_raw(
    v5,
    0x1000u,
    0,
    "timeout %ld frequency %d",
    *(_DWORD *)(a1 + 1120),
    *(_DWORD *)(a1 + 1124),
    *(_DWORD *)(a1 + 464));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "set_frequency_ltc",
    17,
    627,
    20,
    v5);
  return v6;
}
