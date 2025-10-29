int __fastcall atp_test(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v9; // [sp+14h] [bp-4h]
  char v10[4100]; // [sp+18h] [bp+0h] BYREF

  v5 = (unsigned __int16)((_WORD)a4 << 12) | 0x89;
  v9 = (unsigned __int16)((_WORD)a4 << 12) | 1;
  sub_5F554(a1, a3, v9, -520093697);
  sub_5F554(a1, a3, v5, 251658240);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vdda please", "atp_test", a4, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8263,
    60,
    v10);
  while ( IO_getc((_IO_FILE *)stdin) != 10 )
    ;
  sub_5F554(a1, a3, v5, 385875968);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vddhv please", "atp_test", a4, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8267,
    60,
    v10);
  IO_getc((_IO_FILE *)stdin);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s reset atp address", "atp_test");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8270,
    60,
    v10);
  sub_5F554(a1, a3, v5, 0);
  sub_5F554(a1, a3, v9, 0);
  return 0;
}
