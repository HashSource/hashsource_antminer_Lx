int __fastcall heartbeat_on_device(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s, device id %d", "heartbeat_on_device", *(_DWORD *)(a1 + 144));
  V_UNLOCK();
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/miner_util/miner_monitor/update_miner_status/heartbeat_on_device.c",
         187,
         "heartbeat_on_device",
         19,
         55,
         20,
         v9);
  v6 = dev_ctrl(v5);
  if ( !(*(int (__fastcall **)(_DWORD))(v6 + 72))(*(_DWORD *)(a1 + 144)) )
  {
    v7 = dev_ctrl(0);
    if ( !(*(int (__fastcall **)(_DWORD))(v7 + 72))(*(_DWORD *)(a1 + 144)) )
      *(_DWORD *)(a3 + 64) |= 1u;
  }
  update_recorded_heartbeat_interval(*(_DWORD *)(a1 + 144));
  return a3 + 64;
}
