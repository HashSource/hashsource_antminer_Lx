void __fastcall __noreturn check_working_freq(int a1)
{
  float v1; // s0
  int v2; // [sp+24h] [bp-1068h]
  char v3[16]; // [sp+3Ch] [bp-1050h] BYREF
  int v4; // [sp+103Ch] [bp-50h] BYREF
  _QWORD v5[3]; // [sp+1040h] [bp-4Ch] BYREF
  int v6; // [sp+1058h] [bp-34h]
  int v7; // [sp+105Ch] [bp-30h]
  float v8; // [sp+1060h] [bp-2Ch]
  float v9; // [sp+1064h] [bp-28h]
  float v10; // [sp+1068h] [bp-24h]
  signed int temp; // [sp+106Ch] [bp-20h]
  _DWORD *all_created_runtime; // [sp+1070h] [bp-1Ch]
  int v13; // [sp+1074h] [bp-18h]
  int j; // [sp+1078h] [bp-14h]
  int i; // [sp+107Ch] [bp-10h]

  v4 = 0;
  v13 = a1;
  all_created_runtime = get_all_created_runtime(&v4);
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, signed int))(v13 + 36))(v13, temp);
      v10 = v1;
      for ( i = 0; i < v4; ++i )
      {
        for ( j = 0; j < *(_DWORD *)(all_created_runtime[i] + 336); ++j )
        {
          pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 20));
          *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 8) = v10;
          v9 = v10 + *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 4);
          v8 = *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 12);
          pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 20));
          if ( v8 != v9 )
          {
            if ( !j )
            {
              V_LOCK();
              logfmt_raw(
                v3,
                0x1000u,
                0,
                "before set_frequency_by_temp base freq %.2f bias freq %.2f cur freq %.2f",
                *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 4),
                *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 8),
                *(float *)(*(_DWORD *)(all_created_runtime[i] + 528) + 44 * j + 12));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                176,
                "check_working_freq",
                18,
                399,
                20,
                v3);
              if ( v8 > v9 && v10 < -1.0 )
              {
                V_LOCK();
                sub_4FC8C((int)v5, *(int *)(all_created_runtime[i] + 252));
                logfmt_raw(
                  v3,
                  0x1000u,
                  0,
                  v7,
                  v5[0],
                  v5[1],
                  v5[2],
                  v6,
                  v7,
                  "Chip temperature is too high, enable protection. Bias freq:%.2f",
                  v2,
                  v10);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                  176,
                  "check_working_freq",
                  18,
                  402,
                  80,
                  v3);
              }
            }
            v1 = v9;
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(all_created_runtime[i] + 196))(
              all_created_runtime[i],
              0,
              (unsigned __int8)j);
          }
        }
      }
    }
    sleep(1u);
  }
}
