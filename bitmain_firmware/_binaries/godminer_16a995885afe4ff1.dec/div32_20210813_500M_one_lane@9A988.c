int __fastcall div32_20210813_500M_one_lane(int a1, int a2, int a3, int a4)
{
  int v9; // [sp+Ch] [bp-1008h]
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  v9 = a4;
  LOWORD(a4) = (_WORD)a4 << 12;
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "div32_20210813_500M_one_lane",
    a2,
    a3,
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "div32_20210813_500M_one_lane",
    28,
    9932,
    60,
    v10);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, 0xFFFF);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8B, -65536);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, -65536);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8C, 0xFFFF);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, (int)&loc_FFFFC + 3);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8C, 0);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, -1048576);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8D, 0);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFFF);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8D, -16777216);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, -16777216);
  sub_5E03C(a1, a3, a4 & 0xF000 | 0x8E, 0xFFFFFF);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, 4095);
  sub_5E03C(a1, a3, a4 & 0xF000 | 0x8A, 0);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, -4096);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 0x8B, 0);
  sub_5E03C(a1, a3, (unsigned __int16)a4 | 1, 0);
  return 0;
}
