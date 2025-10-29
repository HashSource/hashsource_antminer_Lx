int __fastcall set_chain_isl_voltage(int a1, unsigned __int16 a2)
{
  _BYTE v5[8]; // [sp+18h] [bp+8h] BYREF
  unsigned __int16 v6; // [sp+101Ah] [bp+100Ah]
  unsigned int i; // [sp+101Ch] [bp+100Ch]

  for ( i = 0; i <= 2; ++i )
  {
    v6 = sub_F7CD8(a1, aPqt[i], a2);
    V_LOCK();
    logfmt_raw(
      v5,
      0x1000u,
      0,
      "Set one chain ISL: domain addr = %x set vol %d, get vol %d",
      (unsigned __int8)aPqt[i],
      a2,
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/isl68127.c",
      87,
      "set_chain_isl_voltage",
      21,
      215,
      60,
      v5);
  }
  return 1;
}
