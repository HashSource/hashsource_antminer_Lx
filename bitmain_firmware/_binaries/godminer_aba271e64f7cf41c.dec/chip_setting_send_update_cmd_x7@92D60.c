int __fastcall chip_setting_send_update_cmd_x7(int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  char v10[52]; // [sp+40h] [bp-1274h] BYREF
  int v12; // [sp+1044h] [bp-270h] BYREF
  unsigned __int8 v13[2]; // [sp+1048h] [bp-26Ch] BYREF
  char v14; // [sp+104Ah] [bp-26Ah]
  char v15; // [sp+104Bh] [bp-269h]
  char v16; // [sp+104Ch] [bp-268h]
  char v17; // [sp+104Dh] [bp-267h]
  __int16 v18; // [sp+104Eh] [bp-266h]
  _DWORD v19[2]; // [sp+1250h] [bp-64h] BYREF
  __int64 v20; // [sp+1258h] [bp-5Ch]
  int v21; // [sp+1260h] [bp-54h]
  int v22; // [sp+1264h] [bp-50h]
  int v23; // [sp+1268h] [bp-4Ch]
  int v24; // [sp+126Ch] [bp-48h]
  _DWORD v25[2]; // [sp+1270h] [bp-44h] BYREF
  __int64 v26; // [sp+1278h] [bp-3Ch]
  int v27; // [sp+1280h] [bp-34h]
  int v28; // [sp+1284h] [bp-30h]
  int v29; // [sp+1288h] [bp-2Ch]
  int v30; // [sp+128Ch] [bp-28h]
  int v31; // [sp+1294h] [bp-20h]
  void *s; // [sp+1298h] [bp-1Ch]
  int i; // [sp+129Ch] [bp-18h]
  int chip_reg_x7; // [sp+12A0h] [bp-14h]
  char *v35; // [sp+12A4h] [bp-10h]

  v12 = 0;
  chip_reg_x7 = 0;
  v35 = (char *)&unk_F4240;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s chip_no %d", "chip_setting_send_update_cmd_x7", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_send_update_cmd_x7",
    31,
    889,
    20,
    v10);
  s = malloc(524 * a2);
  memset(s, 0, 524 * a2);
  v13[0] = 85;
  v13[1] = -86;
  if ( a3 )
    v14 = 16;
  else
    v14 = 7;
  v15 = -1;
  v16 = -1;
  v17 = 0;
  v31 = a3;
  v18 = 0;
  v18 = BM_CRC16((char *)v13, 8);
  if ( a3 )
    v35 = (_BYTE *)(&loc_7A11C + 4);
  else
    v35 = "ce/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-branch1/backend/backend_ltc_1491/chip_reg_io_ltc_1491.c";
  chip_reg_x7 = sync_get_chip_reg_x7(a1, a2, v13, (int)s, &v12, (int)v35);
  if ( a2 == v12 )
  {
    if ( !chip_reg_x7 )
    {
      *a4 = 0;
      for ( i = 0; i < v12; ++i )
      {
        if ( *((_DWORD *)s + 131 * i + 3) )
        {
          ++*a4;
        }
        else
        {
          V_LOCK();
          sub_8F850((int)v25, *(int *)(a1 + 252));
          logfmt_raw(
            v10,
            0x1000u,
            0,
            v30,
            v25[0],
            v25[1],
            v26,
            v27,
            v28,
            v29,
            v30,
            "chip %d update failed",
            "chip_setting_send_update_cmd_x7",
            *((unsigned __int8 *)s + 524 * i + 3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
            184,
            "chip_setting_send_update_cmd_x7",
            31,
            933,
            100,
            v10);
        }
      }
    }
    free(s);
    return chip_reg_x7;
  }
  else
  {
    V_LOCK();
    sub_8F850((int)v19, *(int *)(a1 + 252));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v24,
      v19[0],
      v19[1],
      v20,
      v21,
      v22,
      v23,
      v24,
      "%s get only %d response",
      "chip_setting_send_update_cmd_x7",
      v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_send_update_cmd_x7",
      31,
      914,
      100,
      v10);
    free(s);
    return chip_reg_x7;
  }
}
