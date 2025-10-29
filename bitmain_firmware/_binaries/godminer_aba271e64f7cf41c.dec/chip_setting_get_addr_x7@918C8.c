int __fastcall chip_setting_get_addr_x7(int *a1, unsigned int a2)
{
  int v2; // r3
  char v6[24]; // [sp+5Ch] [bp-1798h] BYREF
  _BYTE v7[1024]; // [sp+105Ch] [bp-798h] BYREF
  _BYTE s[256]; // [sp+145Ch] [bp-398h] BYREF
  int v9; // [sp+155Ch] [bp-298h] BYREF
  unsigned __int8 v10[6]; // [sp+1560h] [bp-294h] BYREF
  __int16 v11; // [sp+1566h] [bp-28Eh]
  _DWORD v12[7]; // [sp+1768h] [bp-8Ch] BYREF
  int v13; // [sp+1784h] [bp-70h]
  _DWORD v14[7]; // [sp+1788h] [bp-6Ch] BYREF
  int v15; // [sp+17A4h] [bp-50h]
  _DWORD v16[9]; // [sp+17A8h] [bp-4Ch] BYREF
  int i; // [sp+17CCh] [bp-28h]
  int v18; // [sp+17D0h] [bp-24h]
  char *v19; // [sp+17D4h] [bp-20h]
  unsigned int j; // [sp+17D8h] [bp-1Ch]
  int chip_reg_x7; // [sp+17DCh] [bp-18h]
  int v22; // [sp+17E0h] [bp-14h]
  void *ptr; // [sp+17E4h] [bp-10h]

  v9 = 0;
  v22 = 0;
  chip_reg_x7 = 0;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s chip_no %d", "chip_setting_get_addr_x7", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_get_addr_x7",
    24,
    629,
    20,
    v6);
  memset(s, 0, sizeof(s));
  ptr = malloc(524 * a2);
  memset(ptr, 0, 524 * a2);
  v10[0] = 85;
  v10[1] = -86;
  v10[2] = 0;
  v10[3] = -1;
  v10[4] = -1;
  v10[5] = 0;
  v11 = 0;
  v11 = BM_CRC16((char *)v10, 8);
  chip_reg_x7 = sync_get_chip_reg_x7((int)a1, a2, v10, (int)ptr, &v9, 0xBB8u);
  V_LOCK();
  sub_8F850((int)v12, a1[63]);
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s detect %d chips",
    "chip_setting_get_addr_x7",
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_get_addr_x7",
    24,
    649,
    60,
    v6);
  for ( i = 0; i < v9; ++i )
  {
    if ( !*((_BYTE *)ptr + 524 * i + 2) )
    {
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "[GET ADDR] fw version %c%c%c%c chip %d",
        *((unsigned __int8 *)ptr + 524 * i + 12),
        *((unsigned __int8 *)ptr + 524 * i + 13),
        *((unsigned __int8 *)ptr + 524 * i + 14),
        *((unsigned __int8 *)ptr + 524 * i + 15),
        *((unsigned __int8 *)ptr + 524 * i + 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
        184,
        "chip_setting_get_addr_x7",
        24,
        653,
        60,
        v6);
      if ( !s[*((unsigned __int8 *)ptr + 524 * i + 3)] )
      {
        v2 = *((unsigned __int8 *)ptr + 524 * i + 3);
        ++s[v2];
        ++v22;
      }
    }
  }
  v18 = 0;
  memset(v7, 0, sizeof(v7));
  v7[0] = 10;
  v19 = v7;
  for ( j = 0; a2 > j; ++j )
  {
    if ( !s[j] )
    {
      sprintf(v19, "%03d ", j);
      v19 += 4;
      ++v18;
    }
  }
  if ( v22 < a1[84] )
  {
    V_LOCK();
    sub_8F850((int)v14, a1[63]);
    sub_8F818((int)v16, "asic num error");
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v16[7],
      "detected asic num less than design(%d<%d)",
      v22,
      a1[84]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_get_addr_x7",
      24,
      683,
      100,
      v6);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Sweep error string = J%d:2.", a1[63]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_get_addr_x7",
      24,
      684,
      100,
      v6);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "bad asic: %s", v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_get_addr_x7",
      24,
      685,
      40,
      v6);
  }
  free(ptr);
  a1[106] = v22;
  return chip_reg_x7;
}
