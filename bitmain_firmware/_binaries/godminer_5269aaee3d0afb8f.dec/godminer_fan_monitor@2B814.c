char *__fastcall godminer_fan_monitor(int a1)
{
  char *result; // r0
  int v2; // r1
  char *v3; // r5
  _DWORD v4[7]; // [sp+28h] [bp-1044h] BYREF
  int v5; // [sp+44h] [bp-1028h]
  _DWORD v6[7]; // [sp+48h] [bp-1024h] BYREF
  int v7; // [sp+64h] [bp-1008h]
  char v8[4100]; // [sp+68h] [bp-1004h] BYREF

  ++dword_164EE8[*(_DWORD *)(a1 + 136) + 20];
  result = get_flag_from_monitor(a1);
  v2 = *((_DWORD *)result + 8);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK();
    V_STR(v4, "error", "fan lost");
    logfmt_raw(v8, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "fan lost happend");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/god-miner.c",
                       132,
                       "godminer_fan_monitor",
                       20,
                       829,
                       20,
                       v8);
    v2 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 10) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK();
    V_STR(v6, "error", "fan slow");
    logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "fan slow happend");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/god-miner.c",
                       132,
                       "godminer_fan_monitor",
                       20,
                       834,
                       20,
                       v8);
    *((_DWORD *)v3 + 10) |= 1u;
  }
  return result;
}
