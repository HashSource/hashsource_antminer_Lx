__int64 __fastcall sub_895FC(int a1, unsigned __int8 a2)
{
  int v2; // r0
  char v6[12]; // [sp+18h] [bp-200Ch] BYREF
  _BYTE v7[12]; // [sp+1018h] [bp-100Ch] BYREF
  int v8; // [sp+2018h] [bp-Ch]
  unsigned int i; // [sp+201Ch] [bp-8h]

  v8 = 0;
  for ( i = 0; i < *(unsigned __int8 *)(a1 + 382); ++i )
  {
    v2 = snprintf(&v7[v8], 4096 - v8, "%02x ", *(unsigned __int8 *)(a1 + i + 184));
    v8 += v2;
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "x7 dump work jobid %s, work count %02x", a1 + 120, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "dump_work_x7",
    12,
    107,
    40,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "dump work: %s", v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
           179,
           "dump_work_x7",
           12,
           108,
           40,
           v6);
}
