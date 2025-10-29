int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r0
  int v3; // r3
  char *v4; // r5
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1064h] BYREF
  int v7; // [sp+44h] [bp-1048h]
  _DWORD v8[7]; // [sp+48h] [bp-1044h] BYREF
  int v9; // [sp+64h] [bp-1028h]
  _DWORD v10[7]; // [sp+68h] [bp-1024h] BYREF
  int v11; // [sp+84h] [bp-1008h]
  char v12[4100]; // [sp+88h] [bp-1004h] BYREF

  ++dword_164EE8[*(_DWORD *)(a1 + 136)];
  flag_from_monitor = get_flag_from_monitor(a1);
  v3 = *((_DWORD *)flag_from_monitor + 12);
  v4 = flag_from_monitor;
  if ( (v3 & 1) != 0 )
  {
    V_LOCK();
    V_INT((int)v6, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v7,
      v6[0],
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6],
      v7,
      "some chip died %x",
      **(_DWORD **)(a1 + 300));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "godminer_chip_status_monitor",
      28,
      788,
      20,
      v12);
    v3 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 1u;
  }
  if ( (v3 & 2) != 0 )
  {
    V_LOCK();
    V_INT((int)v8, "chain", *(int *)(a1 + 140));
    logfmt_raw(v12, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "some chip working slow");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "godminer_chip_status_monitor",
      28,
      793,
      20,
      v12);
    v3 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 2u;
  }
  result = v3 & 4;
  if ( (v3 & 4) != 0 )
  {
    V_LOCK();
    V_INT((int)v10, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v12,
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
      "some chip working slow");
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/releas"
               "e/build/godminer-origin_master/god-miner.c",
               147,
               "godminer_chip_status_monitor",
               28,
               798,
               20,
               v12);
    *((_DWORD *)v4 + 14) |= 4u;
  }
  return result;
}
