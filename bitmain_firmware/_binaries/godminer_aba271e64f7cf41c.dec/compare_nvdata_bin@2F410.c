int compare_nvdata_bin()
{
  const char *v0; // r3
  char v3[12]; // [sp+10h] [bp-100Ch] BYREF
  unsigned __int8 v4; // [sp+1013h] [bp-9h]
  unsigned int i; // [sp+1014h] [bp-8h]

  v4 = 0;
  for ( i = 0; i <= 0xB; ++i )
  {
    if ( strstr(efactor[22 * i + 1], "str") )
    {
      if ( *efactor[22 * i + 3] )
        v0 = efactor[22 * i + 3];
      else
        v0 = "None";
      if ( strcmp((const char *)&efactor[22 * i + 5] + 1, v0) )
      {
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "droa,%s strcmp different, %s,%s",
          efactor[22 * i],
          (char *)&efactor[22 * i + 5] + 1,
          efactor[22 * i + 3]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/god-miner.c",
          149,
          "compare_nvdata_bin",
          18,
          1799,
          40,
          v3);
        v4 = 1;
        return 1;
      }
    }
    else if ( LOBYTE(efactor[22 * i + 5]) != (unsigned __int8)*efactor[22 * i + 4] )
    {
      V_LOCK();
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "droa,%s intcmp different, readback=%d,cmp=%d",
        efactor[22 * i],
        LOBYTE(efactor[22 * i + 5]),
        (unsigned __int8)*efactor[22 * i + 4]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "compare_nvdata_bin",
        18,
        1808,
        40,
        v3);
      v4 = 1;
      return 1;
    }
  }
  return v4;
}
