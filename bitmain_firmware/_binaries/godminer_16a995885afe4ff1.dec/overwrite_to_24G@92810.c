int __fastcall overwrite_to_24G(int a1, int a2, int a3, int a4)
{
  int v7; // r7
  int v8; // r9
  int v9; // r8
  int v10; // r6
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, &unk_13A7A0, "overwrite_to_24G", a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "overwrite_to_24G",
    16,
    8152,
    60,
    v12);
  if ( a4 == 8 )
  {
    v10 = 61443;
    v9 = 61448;
    v8 = 61442;
    v7 = 61441;
  }
  else
  {
    v7 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v8 = (unsigned __int16)((_WORD)a4 << 12) | 2;
    v9 = (unsigned __int16)((_WORD)a4 << 12) | 8;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 3;
  }
  sub_5C8F0(a1, a3, 144, -1009);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 64);
  sub_5C8F0(a1, a3, 145, -2147450878);
  sub_5E03C(a1, a3, v7, -196609);
  sub_5E03C(a1, a3, v8, 0x20000);
  sub_5E03C(a1, a3, v7, -4);
  sub_5E03C(a1, a3, v9, 2);
  sub_5E03C(a1, a3, v7, -196609);
  sub_5E03C(a1, a3, v9, 196608);
  sub_5E03C(a1, a3, v7, -196609);
  sub_5E03C(a1, a3, v10, 196608);
  sub_5C8F0(a1, a3, 144, -786433);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 786432);
  sub_5C8F0(a1, a3, 145, -2147450818);
  sub_5C8F0(a1, a3, 144, -8388609);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0x800000);
  sub_5C8F0(a1, a3, 145, -2147450808);
  sub_5C8F0(a1, a3, 144, -805306369);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 805306368);
  sub_5C8F0(a1, a3, 145, -2147450804);
  sub_5E03C(a1, a3, v7, 0);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147442687);
  return 0;
}
