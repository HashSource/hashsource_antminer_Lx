int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char v7[12]; // [sp+20h] [bp-100Ch] BYREF
  unsigned __int16 v8; // [sp+1022h] [bp-Ah] BYREF
  unsigned int i; // [sp+1024h] [bp-8h]

  if ( a3 <= 2 )
    return 0;
  for ( i = 0; i <= 2; ++i )
  {
    v8 = 0;
    sub_B5BBC(a1, aPqt[i], &v8);
    *(_WORD *)(a2 + 2 * i) = v8;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Get one chain ISL: domain addr = %x vol=%u", (unsigned __int8)aPqt[i], v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/drv_pic/isl68127.c",
      175,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v7);
  }
  return 1;
}
