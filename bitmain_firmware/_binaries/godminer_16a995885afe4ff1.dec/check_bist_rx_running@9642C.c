int __fastcall check_bist_rx_running(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r3
  int v8; // r3
  int v9; // r6
  int back; // r0
  unsigned __int8 *v11; // r4
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r3
  unsigned int v16; // r3
  unsigned __int8 *v18; // [sp+38h] [bp-10A4h]
  int v19; // [sp+44h] [bp-1098h]
  int v20; // [sp+44h] [bp-1098h]
  unsigned int v22; // [sp+50h] [bp-108Ch]
  _DWORD v24[7]; // [sp+58h] [bp-1084h] BYREF
  int v25; // [sp+74h] [bp-1068h]
  _DWORD v26[7]; // [sp+78h] [bp-1064h] BYREF
  int v27; // [sp+94h] [bp-1048h]
  _QWORD v28[8]; // [sp+98h] [bp-1044h] BYREF
  char v29[4100]; // [sp+D8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v29,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s...",
    "check_bist_rx_running");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_bist_rx_running",
    21,
    8871,
    60,
    v29);
  v19 = 0;
  if ( a3 == 255 )
    v7 = 16;
  else
    v7 = 1;
  v22 = v7;
  do
  {
    v8 = v19;
    if ( a3 != 255 )
      v8 = a3;
    v20 = v8;
    if ( a4 )
    {
      v9 = 0;
      do
      {
        back = serdes_apb_read_back(a1, a2, v20, (unsigned __int16)((_WORD)v9 << 12) | 0x11, (int)v28);
        if ( back > 0 )
        {
          v11 = (unsigned __int8 *)v28;
          v18 = (unsigned __int8 *)&v28[back];
          do
          {
            v15 = *((_DWORD *)v11 + 1);
            if ( (v15 & 0x400) != 0 || (v15 & 0x8000000) == 0 )
            {
              V_LOCK();
              V_INT((int)v26, "chain", *(int *)(a1 + 140));
              logfmt_raw(
                v29,
                0x1000u,
                0,
                v27,
                v26[0],
                v26[1],
                v26[2],
                v26[3],
                v26[4],
                v26[5],
                v26[6],
                v27,
                "channel %1x, chip_id %02x core_id %02x %08x rx bist run failed",
                v9,
                *v11,
                v11[1],
                v28);
              V_UNLOCK();
              v12 = g_zc;
              v13 = 100;
              v14 = 8888;
            }
            else
            {
              V_LOCK();
              logfmt_raw(v29, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x rx bist is running", v9, *v11, v11[1]);
              V_UNLOCK();
              v12 = g_zc;
              v13 = 60;
              v14 = 8885;
            }
            v11 += 8;
            zlog(
              v12,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
              169,
              "check_bist_rx_running",
              21,
              v14,
              v13,
              v29);
          }
          while ( v11 != v18 );
        }
        ++v9;
      }
      while ( a4 > (unsigned int)(unsigned __int16)v9 );
    }
    v16 = (unsigned __int8)(v20 + 1);
    v19 = v16;
  }
  while ( v22 > v16 );
  return 0;
}
