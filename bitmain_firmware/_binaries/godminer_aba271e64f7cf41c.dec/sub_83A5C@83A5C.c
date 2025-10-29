int __fastcall sub_83A5C(int a1, int a2)
{
  float v2; // s0
  float v3; // s1
  char v7[16]; // [sp+24h] [bp-1010h] BYREF
  float v8; // [sp+1024h] [bp-10h]
  __useconds_t useconds; // [sp+1028h] [bp-Ch]
  int v10; // [sp+102Ch] [bp-8h]

  v10 = 1;
  useconds = (__useconds_t)"time";
  if ( v3 >= 25.0 )
    useconds = (__useconds_t)sub_30D40;
  v8 = v2;
  do
  {
    sub_7B9E4(a1, a2);
    usleep(useconds);
    v8 = v2 + (float)((float)v10++ * v3);
  }
  while ( v8 <= *(float *)(a1 + 1104) );
  v8 = v8 - v3;
  if ( v8 < *(float *)(a1 + 1104) )
  {
    sub_7B9E4(a1, a2);
    usleep(useconds);
    v8 = *(float *)(a1 + 1104);
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "Set chip final freq=%.2f", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "set_working_freq_by_steps",
    25,
    803,
    40,
    v7);
  return 0;
}
