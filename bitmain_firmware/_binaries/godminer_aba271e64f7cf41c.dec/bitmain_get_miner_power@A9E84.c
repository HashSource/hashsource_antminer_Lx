int bitmain_get_miner_power()
{
  char v2[8]; // [sp+14h] [bp-1808h] BYREF
  char v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h]

  v4 = 0;
  if ( dword_15FAD4 || (v4 = bitmain_power_open(), v4 >= 0) )
  {
    if ( is_power_protocal_v2() )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "%s power protocal not support!", "bitmain_get_miner_power");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
        183,
        "bitmain_get_miner_power",
        23,
        1291,
        100,
        v3);
      return -1;
    }
    else if ( !sub_A8FE8() )
    {
      return -1;
    }
    else
    {
      v4 = sub_A8CC4(dword_15FAD0);
      if ( v4 == -2147482880 )
      {
        snprintf(v2, 0x800u, "can nont get power ret = 0x%x\n", -2147482880);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
          183,
          "bitmain_get_miner_power",
          23,
          1300,
          100,
          v3);
        return -1;
      }
      else
      {
        return v4;
      }
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_miner_power");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_get_miner_power",
      23,
      1289,
      100,
      v3);
    return v4;
  }
}
