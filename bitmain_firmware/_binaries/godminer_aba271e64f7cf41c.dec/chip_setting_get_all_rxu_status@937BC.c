int __fastcall chip_setting_get_all_rxu_status(int a1, void *a2, int a3, _DWORD *a4)
{
  char v9[72]; // [sp+3Ch] [bp-1248h] BYREF
  int v10; // [sp+103Ch] [bp-248h] BYREF
  unsigned __int8 v11[6]; // [sp+1040h] [bp-244h] BYREF
  __int16 v12; // [sp+1046h] [bp-23Eh]
  _DWORD v13[7]; // [sp+1248h] [bp-3Ch] BYREF
  int v14; // [sp+1264h] [bp-20h]
  void *s; // [sp+126Ch] [bp-18h]
  int i; // [sp+1270h] [bp-14h]
  int chip_rxu_status_reg_x7; // [sp+1274h] [bp-10h]

  chip_rxu_status_reg_x7 = 0;
  v11[0] = 85;
  v11[1] = -86;
  v11[2] = 19;
  v11[3] = -1;
  v11[4] = -1;
  v11[5] = 0;
  v12 = 0;
  v12 = BM_CRC16((char *)v11, 8);
  s = malloc(524 * a3);
  memset(s, 0, 524 * a3);
  memset(a2, 0, 12 * a3);
  *a4 = 0;
  chip_rxu_status_reg_x7 = sync_get_chip_rxu_status_reg_x7(a1, a3, v11, (int)s, &v10, 0x249F0u);
  for ( i = 0; i < v10; ++i )
  {
    if ( *((_BYTE *)s + 524 * i + 2) == 19 )
    {
      *((_DWORD *)a2 + 3 * *a4) = *((unsigned __int8 *)s + 524 * i + 3);
      *((_DWORD *)a2 + 3 * *a4 + 1) = *((_DWORD *)s + 131 * i + 3);
      *((_DWORD *)a2 + 3 * (*a4)++ + 2) = 1;
    }
  }
  if ( *a4 != *(_DWORD *)(a1 + 336) )
  {
    V_LOCK();
    sub_8F850((int)v13, *(int *)(a1 + 252));
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
      "response rxu hang status packet not enough:%d",
      *a4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/chip_setting_x7_2044.c",
      184,
      "chip_setting_get_all_rxu_status",
      31,
      1108,
      80,
      v9);
  }
  free(s);
  return chip_rxu_status_reg_x7;
}
