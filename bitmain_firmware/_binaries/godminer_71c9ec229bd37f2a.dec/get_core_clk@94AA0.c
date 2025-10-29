int __fastcall get_core_clk(int a1)
{
  int v2; // r0
  char *v3; // r5
  char *v4; // r10
  unsigned int v5; // r4
  int v6; // r7
  int v7; // r0
  char *v8; // r10
  char *v9; // r5
  unsigned int v10; // r4
  int v11; // r7
  int v13; // [sp+0h] [bp-105Ch]
  int v14; // [sp+0h] [bp-105Ch]
  int v15; // [sp+4h] [bp-1058h]
  int v16; // [sp+4h] [bp-1058h]
  int v17; // [sp+2Ch] [bp-1030h]
  char *ptr; // [sp+30h] [bp-102Ch]
  _DWORD v20[7]; // [sp+38h] [bp-1024h] BYREF
  int v21; // [sp+54h] [bp-1008h]
  char v22[4100]; // [sp+58h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 148));
  v17 = 0;
  logfmt_raw(v22, 0x1000u, 0, v21, v20[0], v20[1], v20[2], v20[3], v20[4], v20[5], v20[6], v21, "%s...", "get_core_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_core_clk",
    12,
    8349,
    60,
    v22);
  ptr = (char *)malloc(0x600u);
  do
  {
    v2 = sub_5E294(a1, v17, 255, 121, ptr);
    if ( v2 > 0 )
    {
      v3 = ptr;
      v4 = &ptr[12 * v2];
      do
      {
        v5 = bswap32(*(_DWORD *)v3);
        v6 = v5;
        if ( v5 )
          v6 = sub_12F824(0x8BB2C97u, v5);
        V_LOCK();
        v15 = (unsigned __int8)v3[8];
        v13 = (unsigned __int8)v3[4];
        v3 += 12;
        logfmt_raw(v22, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x, tx_clk %lld", v13, v15, 121, v5, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_core_clk",
          12,
          8363,
          60,
          v22);
      }
      while ( v3 != v4 );
    }
    v7 = sub_5E294(a1, v17, 255, 122, ptr);
    if ( v7 > 0 )
    {
      v8 = &ptr[12 * v7];
      v9 = ptr;
      do
      {
        v10 = bswap32(*(_DWORD *)v9);
        v11 = v10;
        if ( v10 )
          v11 = sub_12F824(0x8BB2C97u, v10);
        V_LOCK();
        v16 = (unsigned __int8)v9[8];
        v14 = (unsigned __int8)v9[4];
        v9 += 12;
        logfmt_raw(v22, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x, rx_clk0 %lld", v14, v16, 122, v10, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_core_clk",
          12,
          8373,
          60,
          v22);
      }
      while ( v9 != v8 );
    }
    ++v17;
  }
  while ( v17 != 8 );
  free(ptr);
  return 0;
}
