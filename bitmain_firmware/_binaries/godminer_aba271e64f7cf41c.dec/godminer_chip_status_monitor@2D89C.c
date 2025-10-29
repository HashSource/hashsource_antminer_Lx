int __fastcall godminer_chip_status_monitor(int a1)
{
  unsigned __int64 v1; // d17
  unsigned __int64 v2; // r2
  char v5[28]; // [sp+30h] [bp-105Ch] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-5Ch] BYREF
  int v7; // [sp+104Ch] [bp-40h]
  int v8; // [sp+1054h] [bp-38h]
  char *v9; // [sp+1058h] [bp-34h]
  int v10; // [sp+105Ch] [bp-30h]
  char *v11; // [sp+1060h] [bp-2Ch]
  int v12; // [sp+1064h] [bp-28h]
  char *v13; // [sp+1068h] [bp-24h]
  int v14; // [sp+106Ch] [bp-20h]
  char *v15; // [sp+1070h] [bp-1Ch]
  char *miner_working_status_p; // [sp+1074h] [bp-18h]
  pthread_mutex_t *current_pool; // [sp+1078h] [bp-14h]
  char *flag_from_monitor; // [sp+107Ch] [bp-10h]

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  miner_working_status_p = get_miner_working_status_p();
  v15 = flag_from_monitor + 48;
  v14 = 1;
  LODWORD(v1) = 1;
  if ( (vshld_u64(1u, v1) & *((_QWORD *)flag_from_monitor + 6)) != 0 )
  {
    if ( (unsigned __int8)pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) != 1 )
    {
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 252), 1);
      miner_working_status_p[16] = 1;
    }
    v13 = flag_from_monitor + 48;
    v12 = 1;
    LODWORD(v1) = 1;
    *((_QWORD *)flag_from_monitor + 7) |= vshld_u64(1u, v1);
  }
  v11 = flag_from_monitor + 48;
  v10 = 2;
  LODWORD(v1) = 2;
  HIDWORD(v2) = (vshld_u64(1u, v1) & *((_QWORD *)flag_from_monitor + 6)) != 0;
  if ( BYTE4(v2) )
  {
    if ( (unsigned __int8)pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) != 1 )
    {
      V_LOCK();
      sub_2A570((int)v6, *(int *)(a1 + 252));
      logfmt_raw(v5, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "some chip working slow");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "godminer_chip_status_monitor",
        28,
        750,
        20,
        v5);
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 252), 1);
      miner_working_status_p[17] = 1;
    }
    v9 = flag_from_monitor + 48;
    v8 = 2;
    LODWORD(v1) = 2;
    v2 = vshld_u64(1u, v1) | *((_QWORD *)flag_from_monitor + 7);
    *((_QWORD *)flag_from_monitor + 7) = v2;
  }
  return HIDWORD(v2);
}
