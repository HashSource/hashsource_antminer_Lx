int __fastcall check_cmn_calibration_status_1_phy(int a1, char a2, int a3)
{
  char *v6; // r2
  _DWORD v8[7]; // [sp+28h] [bp-1060h] BYREF
  int v9; // [sp+44h] [bp-1044h]
  _BYTE v10[4]; // [sp+48h] [bp-1040h] BYREF
  int v11; // [sp+4Ch] [bp-103Ch]
  char v12[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "%s...",
    "check_cmn_calibration_status_1_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_cmn_calibration_status_1_phy",
    34,
    8480,
    60,
    v12);
  if ( serdes_apb_read_back_1_chip(a1, a2, a3, 0x801Du, (int)v10) )
  {
    V_LOCK();
    v6 = "not ready";
    if ( (v11 & 0x8000) != 0 )
      v6 = "done";
    logfmt_raw(v12, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v10[0], v10[1], v11, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_eth/backend_eth.c",
      169,
      "check_cmn_calibration_status_1_phy",
      34,
      8486,
      60,
      v12);
  }
  return 0;
}
