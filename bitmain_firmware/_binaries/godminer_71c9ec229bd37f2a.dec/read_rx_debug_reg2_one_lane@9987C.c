int __fastcall read_rx_debug_reg2_one_lane(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r8
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  char v12[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  a4 <<= 12;
  V_INT((int)v10, "chain", *(int *)(a1 + 148));
  v7 = a4 | 1;
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "read_rx_debug_reg2_one_lane");
  V_UNLOCK();
  v8 = a4 | 0x16;
  a4 |= 0x1Au;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2_one_lane",
    27,
    9215,
    60,
    v12);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 8);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F3AC(a1, a3, a4);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 8);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F3AC(a1, a3, a4);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 8);
  sub_5F554(a1, (unsigned __int8)a3, v7, -9);
  sub_5F554(a1, (unsigned __int8)a3, v8, 0);
  sub_5F3AC(a1, a3, a4);
  sub_5F554(a1, (unsigned __int8)a3, v7, 0);
  return 0;
}
