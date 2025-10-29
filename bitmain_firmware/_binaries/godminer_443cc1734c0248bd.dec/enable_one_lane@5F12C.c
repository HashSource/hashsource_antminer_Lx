int __fastcall enable_one_lane(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s lane %d...", "enable_one_lane", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_one_lane",
    15,
    500,
    20,
    v5);
  sub_5BDBC(a1, 0, 0xFFu, 197, 0);
  sub_5BD68(a1, 0, 199, (int)&loc_7FFFC + 3);
  sub_5BD68(a1, 1u, 199, 2097103);
  sub_5BD68(a1, 2u, 199, (int)&loc_7FFFC + 3);
  sub_5BD68(a1, 5u, 199, (int)&loc_7FFFC + 3);
  sub_5BD68(a1, 6u, 199, (int)&loc_7FFFC + 3);
  sub_5BD68(a1, 7u, 199, 2097103);
  sub_5BD68(a1, 0xFu, 199, (int)&loc_7FFFC + 3);
  sub_5BD68(a1, 8u, 199, 2097103);
  sub_5BD68(a1, 0, 159, 29360576);
  sub_5BD68(a1, 1u, 159, 25297282);
  sub_5BD68(a1, 2u, 159, 29360576);
  sub_5BD68(a1, 5u, 159, 29360576);
  sub_5BD68(a1, 6u, 159, 29360576);
  sub_5BD68(a1, 7u, 159, 25297282);
  sub_5BD68(a1, 0xFu, 159, 29360576);
  sub_5BD68(a1, 8u, 159, 25297282);
  return 0;
}
