int __fastcall div32_20210813_500M(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r8
  int v10; // r10
  int v11; // r9
  int v12; // r11
  int v13; // r6
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div32_20210813_500M", a2, a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "div32_20210813_500M",
    19,
    9818,
    60,
    v15);
  if ( a4 == 8 )
  {
    v13 = 61578;
    v12 = 61582;
    v11 = 61581;
    v10 = 61580;
    v9 = 61579;
    v8 = 61441;
  }
  else
  {
    v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v9 = (unsigned __int16)((_WORD)a4 << 12) | 0x8B;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 0x8D;
    v12 = (unsigned __int16)((_WORD)a4 << 12) | 0x8E;
    v13 = (unsigned __int16)((_WORD)a4 << 12) | 0x8A;
  }
  sub_5E03C(a1, a3, v8, 0xFFFF);
  sub_5E03C(a1, a3, v9, -65536);
  sub_5E03C(a1, a3, v8, -65536);
  sub_5E03C(a1, a3, v10, 0xFFFF);
  sub_5E03C(a1, a3, v8, (int)&loc_FFFFC + 3);
  sub_5E03C(a1, a3, v10, 0);
  sub_5E03C(a1, a3, v8, -1048576);
  sub_5E03C(a1, a3, v11, 0);
  sub_5E03C(a1, a3, v8, 0xFFFFFF);
  sub_5E03C(a1, a3, v11, -16777216);
  sub_5E03C(a1, a3, v8, -16777216);
  sub_5E03C(a1, a3, v12, 0xFFFFFF);
  sub_5E03C(a1, a3, v8, 4095);
  sub_5E03C(a1, a3, v13, 0);
  sub_5E03C(a1, a3, v8, -4096);
  sub_5E03C(a1, a3, v9, 0);
  sub_5E03C(a1, a3, v8, 0);
  return 0;
}
