int __fastcall check_bist_tx_running_one_lane(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v8; // r4
  int back; // r0
  int v10; // r0
  int v11; // r12
  int v12; // r2
  unsigned __int8 *v14; // [sp+38h] [bp-1094h]
  _DWORD v15[7]; // [sp+48h] [bp-1084h] BYREF
  int v16; // [sp+64h] [bp-1068h]
  _DWORD v17[7]; // [sp+68h] [bp-1064h] BYREF
  int v18; // [sp+84h] [bp-1048h]
  _QWORD v19[8]; // [sp+88h] [bp-1044h] BYREF
  char v20[4100]; // [sp+C8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v15, "chain", *(int *)(a1 + 140));
  v8 = (unsigned __int8 *)v19;
  logfmt_raw(
    v20,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s...",
    "check_bist_tx_running_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_bist_tx_running_one_lane",
    30,
    8853,
    60,
    v20);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x4A, (int)v19);
  if ( back > 0 )
  {
    v14 = (unsigned __int8 *)&v19[back];
    do
    {
      if ( (*((_DWORD *)v8 + 1) & 0x200) != 0 )
      {
        V_LOCK();
        logfmt_raw(v20, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x tx bist is running", a4, *v8, v8[1]);
        V_UNLOCK();
        v10 = g_zc;
        v11 = 60;
        v12 = 8859;
      }
      else
      {
        V_LOCK();
        V_INT((int)v17, "chain", *(int *)(a1 + 140));
        logfmt_raw(
          v20,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
          a4,
          *v8,
          v8[1],
          *((_DWORD *)v8 + 1));
        V_UNLOCK();
        v10 = g_zc;
        v11 = 100;
        v12 = 8862;
      }
      zlog(
        v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_eth/backend_eth.c",
        169,
        "check_bist_tx_running_one_lane",
        30,
        v12,
        v11,
        v20);
      v8 += 8;
    }
    while ( v8 != v14 );
  }
  return 0;
}
