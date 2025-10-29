int record_nvdata_droalog()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  const char *v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r8
  const char *v9; // r3
  const char *v10; // r1
  const char *v11; // r0
  const char *v12; // r12
  const char *v13; // r2
  int v14; // r0
  const char *v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int v19; // lr
  const char *v20; // r3
  const char *v21; // r1
  const char *v22; // r0
  const char *v23; // r12
  const char *v24; // r2
  const char *v25; // r5
  size_t v26; // r6
  size_t v27; // r0
  size_t v28; // r0
  char v29; // r0
  const char *v30; // r4
  int v31; // r5
  int chain_domain_num; // r6
  int chain_asic_num; // r7
  int domain_asic_num; // r8
  const char *v35; // r3
  const char *v36; // r1
  const char *v37; // r0
  const char *v38; // r12
  const char *v39; // r2
  int miner_status; // r0
  const char *v41; // r4
  int v42; // r5
  int v43; // r6
  int v44; // r7
  int v45; // lr
  const char *v46; // r3
  const char *v47; // r1
  const char *v48; // r0
  const char *v49; // r12
  const char *v50; // r2
  int v51; // r0
  char v52[512]; // [sp+34h] [bp-1228h] BYREF
  char v53[40]; // [sp+234h] [bp-1028h] BYREF
  FILE *stream; // [sp+1234h] [bp-28h]
  unsigned int i; // [sp+1238h] [bp-24h]
  char *haystack; // [sp+123Ch] [bp-20h]

  droa_log_init();
  stream = fopen("/nvdata/mbin.data", "r+");
  if ( stream )
  {
    haystack = 0;
    memset(v52, 0, sizeof(v52));
    fgets(v52, 511, stream);
    for ( haystack = strtok(v52, ","); haystack; haystack = strtok(0, ",") )
    {
      for ( i = 0; i <= 0xB; ++i )
      {
        if ( strstr(haystack, efactor[22 * i]) )
        {
          if ( strstr(efactor[22 * i + 1], "str") )
          {
            v25 = &haystack[strlen(efactor[22 * i])];
            v26 = strlen(haystack);
            v27 = strlen(efactor[22 * i]);
            strncpy((char *)&efactor[22 * i + 5] + 1, v25, v26 - v27);
          }
          else
          {
            v28 = strlen(efactor[22 * i]);
            v29 = atoi(&haystack[v28]);
            LOBYTE(efactor[22 * i + 5]) = v29;
          }
        }
      }
    }
    if ( compare_nvdata_bin() )
    {
      fclose(stream);
      stream = 0;
      V_LOCK();
      logfmt_raw(v53, 0x1000u, 0, "droa bin data changed, need update droa bin data");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "record_nvdata_droalog",
        21,
        1886,
        40,
        v53);
      stream = fopen("/nvdata/mbin.data", "w");
      if ( stream )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "update droa bin data");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/god-miner.c",
          149,
          "record_nvdata_droalog",
          21,
          1892,
          40,
          v53);
        if ( g_miner_sn[0] )
          v30 = g_miner_sn;
        else
          v30 = "None";
        v31 = g_chain_number;
        chain_domain_num = platform_get_chain_domain_num();
        chain_asic_num = platform_get_chain_asic_num();
        domain_asic_num = platform_get_domain_asic_num();
        if ( g_bsn[0] )
          v35 = g_bsn;
        else
          v35 = "None";
        if ( byte_151450 )
          v36 = &byte_151450;
        else
          v36 = "None";
        if ( byte_151490 )
          v37 = &byte_151490;
        else
          v37 = "None";
        if ( byte_1514D0 )
          v38 = &byte_1514D0;
        else
          v38 = "None";
        if ( pwr_sn )
          v39 = &pwr_sn;
        else
          v39 = "None";
        snprintf(
          v53,
          0x1000u,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          g_miner_compiletime,
          g_miner_type,
          v30,
          v31,
          chain_domain_num,
          chain_asic_num,
          domain_asic_num,
          v35,
          v36,
          v37,
          v38,
          v39);
        log_droa(v53);
        miner_status = get_miner_status();
        snprintf(v53, 0x1000u, "InitStat:%d", miner_status);
        log_droa(v53);
        if ( g_miner_sn[0] )
          v41 = g_miner_sn;
        else
          v41 = "None";
        v42 = g_chain_number;
        v43 = platform_get_chain_domain_num();
        v44 = platform_get_chain_asic_num();
        v45 = platform_get_domain_asic_num();
        if ( g_bsn[0] )
          v46 = g_bsn;
        else
          v46 = "None";
        if ( byte_151450 )
          v47 = &byte_151450;
        else
          v47 = "None";
        if ( byte_151490 )
          v48 = &byte_151490;
        else
          v48 = "None";
        if ( byte_1514D0 )
          v49 = &byte_1514D0;
        else
          v49 = "None";
        if ( pwr_sn )
          v50 = &pwr_sn;
        else
          v50 = "None";
        fprintf(
          stream,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          g_miner_compiletime,
          g_miner_type,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        fflush(stream);
        return fclose(stream);
      }
      else
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "droa log miner bin data update failed");
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/buil"
                 "d/godminer-origin_godminer-branch1/god-miner.c",
                 149,
                 "record_nvdata_droalog",
                 21,
                 1910,
                 40,
                 v53);
      }
    }
    else
    {
      v51 = get_miner_status();
      snprintf(v53, 0x1000u, "InitStat:%d", v51);
      return log_droa(v53);
    }
  }
  else
  {
    stream = fopen("/nvdata/mbin.data", "w+");
    if ( stream )
    {
      if ( g_miner_sn[0] )
        v4 = g_miner_sn;
      else
        v4 = "None";
      v5 = g_chain_number;
      v6 = platform_get_chain_domain_num();
      v7 = platform_get_chain_asic_num();
      v8 = platform_get_domain_asic_num();
      if ( g_bsn[0] )
        v9 = g_bsn;
      else
        v9 = "None";
      if ( byte_151450 )
        v10 = &byte_151450;
      else
        v10 = "None";
      if ( byte_151490 )
        v11 = &byte_151490;
      else
        v11 = "None";
      if ( byte_1514D0 )
        v12 = &byte_1514D0;
      else
        v12 = "None";
      if ( pwr_sn )
        v13 = &pwr_sn;
      else
        v13 = "None";
      snprintf(
        v53,
        0x1000u,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        g_miner_compiletime,
        g_miner_type,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      log_droa(v53);
      v14 = get_miner_status();
      snprintf(v53, 0x1000u, "InitStat:%d", v14);
      log_droa(v53);
      if ( g_miner_sn[0] )
        v15 = g_miner_sn;
      else
        v15 = "None";
      v16 = g_chain_number;
      v17 = platform_get_chain_domain_num();
      v18 = platform_get_chain_asic_num();
      v19 = platform_get_domain_asic_num();
      if ( g_bsn[0] )
        v20 = g_bsn;
      else
        v20 = "None";
      if ( byte_151450 )
        v21 = &byte_151450;
      else
        v21 = "None";
      if ( byte_151490 )
        v22 = &byte_151490;
      else
        v22 = "None";
      if ( byte_1514D0 )
        v23 = &byte_1514D0;
      else
        v23 = "None";
      if ( pwr_sn )
        v24 = &pwr_sn;
      else
        v24 = "None";
      fprintf(
        stream,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        g_miner_compiletime,
        g_miner_type,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      fflush(stream);
      return fclose(stream);
    }
    else
    {
      V_LOCK();
      v0 = *_errno_location();
      v1 = _errno_location();
      v2 = strerror(*v1);
      logfmt_raw(v53, 0x1000u, 0, "file op errno = %d reason = %s", v0, v2);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/god-miner.c",
               149,
               "record_nvdata_droalog",
               21,
               1831,
               40,
               v53);
    }
  }
}
