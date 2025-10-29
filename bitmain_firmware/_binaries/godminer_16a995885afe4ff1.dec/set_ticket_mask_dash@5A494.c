int __fastcall set_ticket_mask_dash(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+Ch] [bp-1018h]
  _DWORD v6[3]; // [sp+10h] [bp-1014h] BYREF
  int v7; // [sp+1Ch] [bp-1008h]
  char v8[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, a2, v5, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v8);
  LOWORD(v7) = 2815;
  v6[0] = a2;
  v6[2] = 1310721;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v6);
  *(_DWORD *)(a1 + 244) = a2;
  return result;
}
