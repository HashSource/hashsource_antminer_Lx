int __fastcall check_bist_done_one_lane(int a1, int a2, unsigned int a3, int a4)
{
  unsigned __int8 *v8; // r4
  int back; // r0
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r3
  unsigned __int8 *v15; // [sp+34h] [bp-1090h]
  _DWORD v16[7]; // [sp+40h] [bp-1084h] BYREF
  int v17; // [sp+5Ch] [bp-1068h]
  _DWORD v18[7]; // [sp+60h] [bp-1064h] BYREF
  int v19; // [sp+7Ch] [bp-1048h]
  _QWORD v20[8]; // [sp+80h] [bp-1044h] BYREF
  char v21[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 148));
  v8 = (unsigned __int8 *)v20;
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s...",
    "check_bist_done_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_done_one_lane",
    24,
    8950,
    60,
    v21);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x11, (int)v20);
  if ( back > 0 )
  {
    v15 = (unsigned __int8 *)&v20[back];
    do
    {
      v13 = *((_DWORD *)v8 + 1);
      if ( (v13 & 0x20000) != 0 || (v13 & 0x400) == 0 )
      {
        V_LOCK();
        V_INT((int)v18, "chain", *(int *)(a1 + 148));
        logfmt_raw(
          v21,
          0x1000u,
          0,
          v19,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v19,
          "channel %1x, chip_id %02x core_id %02x bist error",
          a4,
          *v8,
          v8[1]);
        V_UNLOCK();
        v10 = g_zc;
        v11 = 100;
        v12 = 8959;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x bist done", a4, *v8, v8[1]);
        V_UNLOCK();
        v10 = g_zc;
        v11 = 60;
        v12 = 8956;
      }
      v8 += 8;
      zlog(
        v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_bist_done_one_lane",
        24,
        v12,
        v11,
        v21);
    }
    while ( v8 != v15 );
  }
  return 0;
}
