int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  char v14[4]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1040h] [bp+4h]
  int varg_r1; // [sp+1044h] [bp+8h]
  int varg_r2; // [sp+1048h] [bp+Ch]
  int varg_r3; // [sp+104Ch] [bp+10h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_14F3D0 = a1;
  dword_14F3D4 = a2;
  dword_14F3D8 = a3;
  dword_14F3DC = a4;
  dword_14F3E0 = a5;
  dword_14F3E4 = a6;
  dword_14F3E8 = a7;
  dword_14F3EC = a8;
  dword_14F3F0 = a9;
  dword_14F3F4 = a10;
  dword_14F3F8 = a11;
  dword_14F3FC = a12;
  dword_14F400 = a13;
  memset(&flt_152450, 0, 0x2Cu);
  if ( dword_14F3D0 == 2 )
  {
    dword_152460 = dword_14F3F4;
    dword_152464 = dword_14F3F8;
    dword_152468 = dword_14F3FC;
    dword_15246C = dword_14F400;
    flt_152458 = (float)dword_14F3E8;
    flt_152454 = (float)dword_14F3D4;
    flt_152450 = (float)dword_14F3D8;
  }
  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "startup P: %f, p: %f, i: %f, d: %f   target: %f, min %f, max %f",
    *(float *)&dword_152460,
    *(float *)&dword_152464,
    *(float *)&dword_152468,
    *(float *)&dword_15246C,
    flt_152458,
    flt_152454,
    flt_152450);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/set_pwm_by_temp.c",
    166,
    "fan_control_info_init",
    21,
    375,
    20,
    v14);
  return 0;
}
