int __fastcall ajust_retry_param(int a1, char a2, int a3)
{
  int v7; // r3
  unsigned __int8 v8; // r2
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  char v11[4]; // [sp+48h] [bp-1004h] BYREF
  unsigned int v12; // [sp+4Ch] [bp-1000h]

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 140));
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "%s...", "ajust_retry_param");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "ajust_retry_param",
    17,
    8649,
    60,
    v11);
  if ( !serdes_apb_read_back_1_chip(a1, a2, a3, 0x8023u, (int)v11) )
    return 0;
  if ( v12 > 0xFA )
  {
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v7 = 0x2000;
    v8 = a3;
  }
  else
  {
    if ( v12 > 9 )
      return 0;
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v7 = 4186112;
    v8 = a3;
  }
  serdes_apb_write_1_chip(a1, a2, v8, 32801, v7);
  return 0;
}
