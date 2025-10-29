__int64 __fastcall sub_8A348(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r0
  char v9[20]; // [sp+40h] [bp-2054h] BYREF
  char v10[20]; // [sp+1040h] [bp-1054h] BYREF
  _DWORD v11[7]; // [sp+2040h] [bp-54h] BYREF
  int v12; // [sp+205Ch] [bp-38h]
  _DWORD v13[7]; // [sp+2060h] [bp-34h] BYREF
  int v14; // [sp+207Ch] [bp-18h]
  unsigned int v15; // [sp+2080h] [bp-14h]
  int v16; // [sp+2084h] [bp-10h]

  v16 = 0;
  v3 = snprintf(v10, 0x1000u, "%08x ", *(_DWORD *)(a2 + 16));
  v16 += v3;
  V_LOCK();
  sub_89210((int)v11, *(int *)(a1 + 252));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "work_id: %02x",
    *(unsigned __int8 *)(a2 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "dump_nonce_x7",
    13,
    281,
    40,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "back nonce: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "dump_nonce_x7",
    13,
    282,
    40,
    v9);
  v15 = 0;
  v16 = 0;
  while ( v15 <= 3 )
  {
    v4 = snprintf(&v10[v16], 4096 - v16, "%02x ", *(unsigned __int8 *)(a3 + v15 + 192));
    v16 += v4;
    ++v15;
  }
  V_LOCK();
  sub_89210((int)v13, *(int *)(a1 + 252));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "asic %d core %d addr_interval %d",
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    *(_DWORD *)(a1 + 428));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
    179,
    "dump_nonce_x7",
    13,
    288,
    40,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
           179,
           "dump_nonce_x7",
           13,
           289,
           40,
           v9);
}
