int sub_625D4()
{
  int v1; // r3
  _BYTE v3[224]; // [sp+10h] [bp-11ECh] BYREF
  char v4[12]; // [sp+F0h] [bp-110Ch] BYREF
  void *dest[57]; // [sp+10F0h] [bp-10Ch] BYREF
  int v6; // [sp+11D4h] [bp-28h] BYREF
  void *ptr; // [sp+11D8h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+11DCh] [bp-20h]
  int i; // [sp+11E0h] [bp-1Ch]
  int v10; // [sp+11E4h] [bp-18h]
  size_t nmemb; // [sp+11E8h] [bp-14h]
  int v12; // [sp+11ECh] [bp-10h]
  signed int k; // [sp+11F0h] [bp-Ch]
  int j; // [sp+11F4h] [bp-8h]

  v6 = 0;
  v12 = 0x7FFFFFFF;
  all_created_runtime = get_all_created_runtime(&v6);
  nmemb = 0;
  v10 = 0;
  for ( i = 0; i < v6; ++i )
  {
    read_status_from_monitor(dest, all_created_runtime[i]);
    nmemb += (size_t)dest[7];
  }
  ptr = calloc(nmemb, 4u);
  if ( ptr )
  {
    for ( j = 0; j < v6; ++j )
    {
      read_status_from_monitor(v3, all_created_runtime[j]);
      memcpy(dest, v3, 0xE0u);
      memcpy((char *)ptr + 4 * v10, dest[1], 4 * (int)dest[7]);
      v10 += (int)dest[7];
    }
    for ( k = 0; k < (int)nmemb; ++k )
    {
      if ( check_value_valid_with_stdd((int)ptr, nmemb, *((_DWORD *)ptr + k)) )
      {
        v1 = *((_DWORD *)ptr + k);
        if ( v12 < v1 )
          v1 = v12;
        v12 = v1;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "%d C, most likely a bad sensor", *((_DWORD *)ptr + k));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/set_pwm_by_temp.c",
          166,
          "get_min_pcb_temp",
          16,
          169,
          20,
          v4);
      }
    }
    free(ptr);
    dword_14F410 = v12;
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "min temp pcb: %d", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/set_pwm_by_temp.c",
      166,
      "get_min_pcb_temp",
      16,
      175,
      20,
      v4);
    return v12;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "temp_in_pcb");
    return dword_14F410;
  }
}
