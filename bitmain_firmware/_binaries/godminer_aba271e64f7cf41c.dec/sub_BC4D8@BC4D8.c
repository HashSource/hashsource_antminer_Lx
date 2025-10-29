int __fastcall sub_BC4D8(unsigned __int8 a1)
{
  int result; // r0
  char v3[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v4[12]; // [sp+818h] [bp-100Ch] BYREF
  unsigned __int8 i; // [sp+181Bh] [bp-9h]
  int v6; // [sp+181Ch] [bp-8h]

  v6 = 0;
  sub_BC0D4();
  for ( i = 0x80; i; i >>= 1 )
  {
    sub_BB194();
    sub_BAE88();
    if ( (i & a1) != 0 )
      sub_BAEA0();
    else
      sub_BAF9C();
    sub_BB098();
    sub_BAE88();
  }
  while ( 1 )
  {
    result = sub_BC348();
    if ( result )
      break;
    if ( ++v6 > 3 )
    {
      strcpy(v3, "IIC_SendData checkack 3 times,send data checkack error");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
               189,
               "i2c_send_data",
               13,
               359,
               100,
               v4);
    }
  }
  return result;
}
