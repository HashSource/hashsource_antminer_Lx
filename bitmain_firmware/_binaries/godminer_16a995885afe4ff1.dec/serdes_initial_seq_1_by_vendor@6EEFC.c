int __fastcall serdes_initial_seq_1_by_vendor(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v4; // r8
  int v7; // r7
  __int16 v8; // r4
  int v10; // [sp+14h] [bp-Ch]
  char v11[4100]; // [sp+20h] [bp+0h] BYREF

  v4 = a4;
  v10 = a4;
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "serdes_initial_seq_1_by_vendor",
    30,
    3299,
    60,
    v11);
  sub_5C8F0(a1, a3, 144, 252182532);
  sub_5C8F0(a1, a3, 145, -2147438529);
  sub_5C8F0(a1, a3, 144, 839027724);
  sub_5C8F0(a1, a3, 145, -2147438590);
  sub_5C8F0(a1, a3, 144, -1073676160);
  sub_5C8F0(a1, a3, 145, -2147438589);
  sub_5C8F0(a1, a3, 144, 252182532);
  sub_5C8F0(a1, a3, 145, -2147434433);
  sub_5C8F0(a1, a3, 144, 839027724);
  sub_5C8F0(a1, a3, 145, -2147434494);
  sub_5C8F0(a1, a3, 144, -1073676160);
  sub_5C8F0(a1, a3, 145, -2147434493);
  if ( v4 )
  {
    LOWORD(v7) = 0;
    do
    {
      v8 = (_WORD)v7 << 12;
      v7 = (unsigned __int16)(v7 + 1);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x6E, 17694978);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x1D, 134283265);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x2A, 504234034);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x19, 267913217);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x1A, -1610579952);
      sub_5E03C(a1, a3, v8 & 0xF000 | 0x47, 338179136);
    }
    while ( v7 != v10 );
  }
  return 0;
}
