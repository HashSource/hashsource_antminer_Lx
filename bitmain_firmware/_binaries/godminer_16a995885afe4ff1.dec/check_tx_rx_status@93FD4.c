int __fastcall check_tx_rx_status(int a1, int a2, unsigned __int8 *a3)
{
  int v4; // r1
  unsigned __int8 *v5; // r3
  _DWORD *v6; // r4
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r0
  int v10; // r12
  int v11; // r2
  unsigned __int8 *v13; // [sp+3Ch] [bp-1068h]
  _DWORD *ptr; // [sp+48h] [bp-105Ch]
  _DWORD v16[3]; // [sp+50h] [bp-1054h] BYREF
  __int16 v17; // [sp+5Ch] [bp-1048h]
  char v18; // [sp+5Eh] [bp-1046h] BYREF
  _DWORD v19[7]; // [sp+60h] [bp-1044h] BYREF
  int v20; // [sp+7Ch] [bp-1028h]
  _DWORD v21[7]; // [sp+80h] [bp-1024h] BYREF
  int v22; // [sp+9Ch] [bp-1008h]
  char v23[4100]; // [sp+A0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 140));
  v13 = (unsigned __int8 *)v16;
  logfmt_raw(
    v23,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    "%s...",
    "check_tx_rx_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_tx_rx_status",
    18,
    8450,
    60,
    v23);
  ptr = malloc(0x600u);
  v4 = 235735561;
  v16[0] = 100991489;
  v16[1] = 235735561;
  v16[2] = 134677248;
  v17 = 3851;
  do
  {
    v5 = a3;
    v6 = ptr;
    if ( a3 == (unsigned __int8 *)255 )
      v5 = v13;
    else
      v4 = (int)a3;
    if ( a3 == (unsigned __int8 *)255 )
      v4 = *v5;
    v7 = sub_5CB5C(a1, v4, 113, ptr);
    if ( v7 > 0 )
    {
      v8 = &ptr[3 * v7];
      do
      {
        if ( *v6 == -1 )
        {
          V_LOCK();
          logfmt_raw(
            v23,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx locked",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            113,
            *v6);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 20;
          v11 = 8468;
        }
        else
        {
          V_LOCK();
          V_INT((int)v21, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v23,
            0x1000u,
            0,
            v22,
            v21[0],
            v21[1],
            v21[2],
            v21[3],
            v21[4],
            v21[5],
            v21[6],
            v22,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            113,
            *v6);
          V_UNLOCK();
          v9 = g_zc;
          v10 = 100;
          v11 = 8466;
        }
        v6 += 3;
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/backend_eth/backend_eth.c",
          169,
          "check_tx_rx_status",
          18,
          v11,
          v10,
          v23);
      }
      while ( v6 != v8 );
    }
    ++v13;
  }
  while ( v13 != (unsigned __int8 *)&v18 );
  free(ptr);
  return 0;
}
