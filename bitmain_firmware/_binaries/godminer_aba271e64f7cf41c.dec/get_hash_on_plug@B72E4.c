int get_hash_on_plug()
{
  char v2[24]; // [sp+14h] [bp-1818h] BYREF
  char v3[24]; // [sp+814h] [bp-1018h] BYREF
  int v4; // [sp+1814h] [bp-18h] BYREF
  int i; // [sp+1818h] [bp-14h]
  int v6; // [sp+181Ch] [bp-10h]
  int v7; // [sp+1820h] [bp-Ch]
  int v8; // [sp+1824h] [bp-8h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v4 = 0;
  if ( platform_inited )
  {
    v6 = hal_chain_max_num();
    for ( i = 0; i < v6; ++i )
    {
      v4 = 0;
      v8 = hal_chain_plug_addr(i);
      if ( v8 >= 0 )
      {
        gpio_export(v8);
        gpio_direction(v8, 0);
        gpio_read(v8, &v4);
        v7 |= v4 << i;
      }
      else
      {
        snprintf(v2, 0x800u, "fail to get slot for chain %d", i);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
          188,
          "get_hash_on_plug",
          16,
          249,
          80,
          v3);
      }
    }
    return v7;
  }
  else
  {
    strcpy(v2, "platform not inited");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "get_hash_on_plug",
      16,
      238,
      100,
      v3);
    return 0;
  }
}
