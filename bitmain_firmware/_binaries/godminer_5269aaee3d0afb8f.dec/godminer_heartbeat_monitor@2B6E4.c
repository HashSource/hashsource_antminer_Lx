char *__fastcall godminer_heartbeat_monitor(int a1)
{
  char *result; // r0
  char *v3; // r7
  _DWORD v4[7]; // [sp+48h] [bp-1040h] BYREF
  int v5; // [sp+64h] [bp-1024h]
  _DWORD v6[8]; // [sp+68h] [bp-1020h] BYREF
  char v7[4096]; // [sp+88h] [bp-1000h] BYREF

  ++dword_164EE8[*(_DWORD *)(a1 + 136) + 10];
  result = get_flag_from_monitor(a1);
  if ( (*((_DWORD *)result + 16) & 1) != 0 )
  {
    v3 = result;
    V_LOCK();
    V_INT((int)v4, "chain", *(int *)(a1 + 140));
    V_STR(v6, "error", "pic lost");
    logfmt_raw(
      v7,
      0x1000u,
      0,
      v5,
      v4[0],
      v4[1],
      v4[2],
      v4[3],
      v4[4],
      v4[5],
      v4[6],
      v5,
      v6[0],
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6],
      v6[7],
      "heartbeat failed");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/god-miner.c",
                       132,
                       "godminer_heartbeat_monitor",
                       26,
                       817,
                       100,
                       v7);
    *((_DWORD *)v3 + 18) |= 1u;
  }
  return result;
}
