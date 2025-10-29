int __fastcall setup_all_chip_vbk(int a1)
{
  _BYTE *v2; // r3
  void (__fastcall *v3)(int, _DWORD, int); // r3
  void (__fastcall *v4)(int, _DWORD *); // r3
  int result; // r0
  int v6; // [sp+Ch] [bp-1018h]
  _DWORD v7[3]; // [sp+10h] [bp-1014h] BYREF
  _DWORD v8[1025]; // [sp+20h] [bp-1004h] BYREF

  puts("setup_all_chip_vbk");
  v2 = *(_BYTE **)(a1 + 296);
  v2[2] = 0x80;
  v2[3] = -64;
  *v2 = 0;
  v2[1] = 64;
  v3 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 148);
  *(_DWORD *)(a1 + 240) = 64;
  v3(a1, *(_DWORD *)(a1 + 296), 4);
  sub_AC1A8(a1);
  V_LOCK();
  logfmt_raw(
    (char *)v8,
    0x1000u,
    0,
    "ticket_mask %s reg %02x tm %d",
    "ChipSetting_ticket_mask_VBK",
    20,
    32,
    v6,
    0,
    0,
    0,
    0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_ticket_mask_VBK",
    27,
    137,
    20,
    v8);
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  v7[2] = 1310721;
  v7[0] = 32;
  v4(a1, v7);
  *(_DWORD *)(a1 + 244) = 32;
  V_LOCK();
  logfmt_raw((char *)v8, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_VBK", 5, 132, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_open_cores_VBK",
    26,
    315,
    40,
    v8);
  v8[1] = 0;
  v8[2] = 8650753;
  v8[0] = 1;
  v8[3] = 1280;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v8, 20000, 0);
  V_LOCK();
  logfmt_raw((char *)v8, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_vbk/backend_vbk.c",
    169,
    "setup_all_chip_vbk",
    18,
    215,
    60,
    v8);
  sub_AC1A8(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
