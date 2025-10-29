int __fastcall check_cmn_calibration_status_1_phy(int a1, char a2, char a3)
{
  const char *v3; // r3
  int v8; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v9[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v10; // [sp+1020h] [bp+1010h]

  V_LOCK();
  logfmt_raw(&v8, 0x1000u, 0, "%s...", "check_cmn_calibration_status_1_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_cmn_calibration_status_1_phy",
    34,
    8538,
    60,
    &v8);
  if ( serdes_apb_read_back_1_chip(a1, a2, a3, 0x801Du, (int)v9) )
  {
    V_LOCK();
    if ( (v10 & 0x8000) != 0 )
      v3 = "done";
    else
      v3 = "not ready";
    logfmt_raw(&v8, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v9[0], v9[1], v10, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_cmn_calibration_status_1_phy",
      34,
      8544,
      60,
      &v8);
  }
  return 0;
}
