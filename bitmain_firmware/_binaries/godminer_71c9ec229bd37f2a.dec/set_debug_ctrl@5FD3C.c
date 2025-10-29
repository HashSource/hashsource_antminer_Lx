int __fastcall set_debug_ctrl(int a1, int a2)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD v6[2]; // [sp+10h] [bp-1000h] BYREF
  int v7; // [sp+18h] [bp-FF8h]
  int v8; // [sp+1Ch] [bp-FF4h]

  V_LOCK();
  logfmt_raw((char *)v6, 0x1000u, 0, "%s...", "set_debug_ctrl");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_debug_ctrl",
    14,
    233,
    20,
    v6);
  v7 = 0;
  v8 = 0;
  v6[0] = a2;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 164);
  v6[1] = 0;
  LOBYTE(v7) = 1;
  HIWORD(v7) = 80;
  v4(a1, v6);
  usleep(0x2710u);
  return 0;
}
