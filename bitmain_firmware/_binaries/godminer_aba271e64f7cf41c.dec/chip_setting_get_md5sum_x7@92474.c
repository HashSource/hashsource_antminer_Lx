int __fastcall chip_setting_get_md5sum_x7(int a1, int a2, unsigned __int8 a3, const void *a4, size_t n, _BYTE *a6)
{
  char v12[48]; // [sp+44h] [bp-1270h] BYREF
  int v14; // [sp+1048h] [bp-26Ch]
  int v15; // [sp+104Ch] [bp-268h] BYREF
  unsigned __int8 v16[5]; // [sp+1050h] [bp-264h] BYREF
  unsigned __int8 v17; // [sp+1055h] [bp-25Fh]
  __int16 v18; // [sp+1056h] [bp-25Eh]
  int v19; // [sp+1058h] [bp-25Ch]
  int v20; // [sp+105Ch] [bp-258h] BYREF
  _DWORD v21[7]; // [sp+1258h] [bp-5Ch] BYREF
  int v22; // [sp+1274h] [bp-40h]
  _DWORD v23[7]; // [sp+1278h] [bp-3Ch] BYREF
  int v24; // [sp+1294h] [bp-20h]
  void *s; // [sp+129Ch] [bp-18h]
  int i; // [sp+12A0h] [bp-14h]
  int chip_reg_x7; // [sp+12A4h] [bp-10h]

  v15 = 0;
  chip_reg_x7 = 0;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "%s chip_no %d", "chip_setting_get_md5sum_x7", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
    184,
    "chip_setting_get_md5sum_x7",
    26,
    783,
    20,
    v12);
  s = malloc(524 * a2);
  memset(s, 0, 524 * a2);
  v16[0] = 85;
  v16[1] = -86;
  v16[2] = 18;
  v16[3] = -1;
  v16[4] = -1;
  v17 = n + 4;
  v14 = a3;
  v19 = a3;
  memcpy(&v20, a4, n);
  v18 = 0;
  v18 = BM_CRC16((char *)v16, v17 + 8);
  chip_reg_x7 = sync_get_chip_reg_x7(a1, a2, v16, (int)s, &v15, 0xEA60u);
  if ( a2 == v15 )
  {
    if ( !chip_reg_x7 )
    {
      *a6 = 0;
      for ( i = 0; i < v15; ++i )
      {
        if ( *((_BYTE *)s + 524 * i + 2) == 18 )
        {
          if ( *((_DWORD *)s + 131 * i + 3) )
          {
            ++*a6;
          }
          else
          {
            V_LOCK();
            sub_8F850((int)v23, *(int *)(a1 + 252));
            logfmt_raw(
              v12,
              0x1000u,
              0,
              v24,
              v23[0],
              v23[1],
              v23[2],
              v23[3],
              v23[4],
              v23[5],
              v23[6],
              v24,
              "%s : chip %d md5sum check failed",
              "chip_setting_get_md5sum_x7",
              *((unsigned __int8 *)s + 524 * i + 3));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
              184,
              "chip_setting_get_md5sum_x7",
              26,
              821,
              100,
              v12);
          }
        }
      }
    }
    free(s);
    return chip_reg_x7;
  }
  else
  {
    V_LOCK();
    sub_8F850((int)v21, *(int *)(a1 + 252));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v22,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v22,
      "%s get only %d response",
      "chip_setting_get_md5sum_x7",
      v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_get_md5sum_x7",
      26,
      803,
      100,
      v12);
    free(s);
    return chip_reg_x7;
  }
}
