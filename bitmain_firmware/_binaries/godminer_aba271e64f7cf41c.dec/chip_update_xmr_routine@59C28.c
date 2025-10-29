int __fastcall chip_update_xmr_routine(int a1)
{
  char v4[44]; // [sp+18h] [bp-102Ch] BYREF
  int v5; // [sp+1018h] [bp-2Ch] BYREF
  _DWORD *v6; // [sp+101Ch] [bp-28h]
  void *v7; // [sp+1020h] [bp-24h]
  char *miner_working_status_p; // [sp+1024h] [bp-20h]
  void *all_created_runtime; // [sp+1028h] [bp-1Ch]
  int v10; // [sp+102Ch] [bp-18h]
  int v11; // [sp+1030h] [bp-14h]
  int v12; // [sp+1034h] [bp-10h]
  int v13; // [sp+1038h] [bp-Ch]
  int v14; // [sp+103Ch] [bp-8h]

  v13 = 0;
  v12 = 0;
  v14 = 0;
  v11 = 0;
  v10 = 0;
  all_created_runtime = 0;
  v5 = 0;
  miner_working_status_p = get_miner_working_status_p();
  miner_working_status_p[9] = 1;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "chip update mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/chip_update/chip_update.c",
    163,
    "chip_update_xmr_routine",
    23,
    28,
    40,
    v4);
  start_api_thread();
  v7 = (void *)dhash_content_init(opt_algo);
  if ( v7 )
  {
    set_frontend_runtime_type((int)v7, opt_algo);
    v10 = hardware_init((const char *)opt_algo);
    if ( v10 )
    {
      return v10;
    }
    else
    {
      v6 = machine_runtime_init(opt_machine_type, opt_algo);
      if ( v6 )
      {
        v10 = ((int (__fastcall *)(_DWORD *))v6[12])(v6);
        if ( v10 )
        {
          return v10;
        }
        else
        {
          sleep(5u);
          ((void (__fastcall *)(_DWORD *))v6[3])(v6);
          all_created_runtime = get_all_created_runtime(&v5);
          miner_working_status_p[9] = 0;
          dhash_content_exit(v7);
          if ( update_chip_x7(a1 != 0, (float *)miner_working_status_p + 3) )
            return -1;
          else
            return 0;
        }
      }
      else
      {
        printf("invalid pointer(%s)!\n", "machine_runtime");
        return 3;
      }
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "dhash_content");
    return 3;
  }
}
