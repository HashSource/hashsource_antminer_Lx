int __fastcall get_special_core_reg(int a1)
{
  int v1; // r11
  char *v2; // r4
  int v3; // r0
  char *v4; // r6
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v9; // [sp+30h] [bp-103Ch]
  char *ptr; // [sp+38h] [bp-1034h]
  int v12; // [sp+3Ch] [bp-1030h]
  _DWORD v13[7]; // [sp+48h] [bp-1024h] BYREF
  int v14; // [sp+64h] [bp-1008h]
  char v15[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK();
  v1 = 0;
  logfmt_raw(v15, 0x1000u, 0, "%s...", "get_special_core_reg");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "get_special_core_reg",
    20,
    8279,
    20,
    v15);
  v12 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    v2 = ptr;
    v3 = sub_5CD7C(a1, v1, 255, 81, ptr);
    v9 = v3;
    if ( v3 <= 0 )
      goto LABEL_8;
    v4 = &ptr[12 * v3];
    do
    {
      V_LOCK();
      v5 = *(_DWORD *)v2;
      v6 = (unsigned __int8)v2[8];
      v7 = (unsigned __int8)v2[4];
      v2 += 12;
      logfmt_raw(v15, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v7, v6, 81, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_eth/backend_eth.c",
        169,
        "get_special_core_reg",
        20,
        8286,
        20,
        v15);
    }
    while ( v2 != v4 );
    if ( v9 != 16 )
    {
LABEL_8:
      V_LOCK();
      v12 = 1;
      V_INT((int)v13, "chain", *(int *)(a1 + 140));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v14,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v14,
        "chip %02x core reg %04x, resp_num(%d) is not enough",
        v1,
        81,
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_eth/backend_eth.c",
        169,
        "get_special_core_reg",
        20,
        8291,
        100,
        v15);
    }
    ++v1;
  }
  while ( v1 != 8 );
  free(ptr);
  return v12;
}
