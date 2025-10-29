int __fastcall enable_rx_equalizer_tuning_one_lane(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r6
  char v11[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "enable_rx_equalizer_tuning_one_lane",
    a2,
    a3,
    a4);
  V_UNLOCK();
  v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning_one_lane",
    35,
    3488,
    60,
    v11);
  sub_5F554(a1, a3, v8, -4194305);
  sub_5F554(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_5F554(a1, a3, v8, -4194305);
  sub_5F554(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0x400000);
  sub_5F554(a1, a3, v8, -4194305);
  sub_5F554(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_5F554(a1, a3, v8, -2049);
  sub_5F554(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x37, 2048);
  sub_5F554(a1, a3, v8, -1073741825);
  v9 = (unsigned __int16)((_WORD)a4 << 12) | 0x98;
  sub_5F554(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x7E, 0x40000000);
  sub_5F554(a1, a3, v8, -16777217);
  sub_5F554(a1, a3, v9, 0);
  sub_5F554(a1, a3, v8, -16777217);
  sub_5F554(a1, a3, v9, 0x1000000);
  check_d54_one_lane(a1, a2, a3, a4, 8u);
  sub_5F554(a1, a3, v8, -16777217);
  sub_5F554(a1, a3, v9, 0);
  sub_5F554(a1, a3, v8, 0);
  check_d54_one_lane(a1, a2, a3, a4, 0);
  return 0;
}
