int __fastcall sub_21EB0(json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  json_t *v14; // r0
  json_t *v15; // r0
  json_t *v16; // r0
  json_t *v17; // r0
  json_t *v18; // r0
  json_t *v19; // r0
  json_t *v20; // r0
  json_t *v21; // r0
  double *v22; // r0
  double *v23; // r0
  double *v24; // r0
  double *v25; // r0
  json_t *v26; // r3
  json_t *v27; // r0
  json_t *v28; // r0
  json_t *v29; // r0
  double *v30; // r0
  double v31; // d16
  double *v32; // r0
  double v33; // d16
  double *v34; // r0
  json_t *v35; // r0
  char v39[32]; // [sp+24h] [bp-1160h] BYREF
  char v40[24]; // [sp+1024h] [bp-160h] BYREF
  char v41[12]; // [sp+103Ch] [bp-148h] BYREF
  char v42[128]; // [sp+1048h] [bp-13Ch] BYREF
  char s[128]; // [sp+10C8h] [bp-BCh] BYREF
  double v44; // [sp+1148h] [bp-3Ch]
  int v45; // [sp+1150h] [bp-34h]
  int v46; // [sp+1154h] [bp-30h]
  __int64 v47; // [sp+1158h] [bp-2Ch]
  double v48; // [sp+1160h] [bp-24h]
  unsigned int v49; // [sp+116Ch] [bp-18h]
  json_t *v50; // [sp+1170h] [bp-14h]
  json_t *v51; // [sp+1174h] [bp-10h]
  int v52; // [sp+1178h] [bp-Ch]
  int i; // [sp+117Ch] [bp-8h]

  v52 = 0;
  v51 = 0;
  v50 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v42, 0, sizeof(v42));
  memset(v41, 0, sizeof(v41));
  memset(v40, 0, sizeof(v40));
  v49 = 0;
  v48 = 0.0;
  v47 = 0;
  v46 = a2;
  if ( a2 && a1 )
  {
    if ( total_pools )
    {
      sub_20F64(a1, 1, 7, *(const char **)(v46 + 8));
      v51 = (json_t *)json_array();
      for ( i = 0; i < total_pools; ++i )
      {
        v45 = *(_DWORD *)(pools + 4 * i);
        v50 = (json_t *)json_object();
        v3 = (json_t *)json_integer(i, i >> 31);
        json_object_set_new(v50, "POOL", v3);
        memset(s, 0, sizeof(s));
        snprintf(s, 0x80u, "%s", *(const char **)(v45 + 12));
        v4 = (json_t *)json_string(s);
        json_object_set_new(v50, "URL", v4);
        memset(v41, 0, sizeof(v41));
        if ( *(_BYTE *)(v45 + 1904) )
          strcpy(v41, "Deed");
        else
          strcpy(v41, "Alive");
        v5 = (json_t *)json_string(v41);
        json_object_set_new(v50, "Status", v5);
        v6 = (json_t *)json_integer(*(_DWORD *)(v45 + 4), *(int *)(v45 + 4) >> 31);
        json_object_set_new(v50, "Priority", v6);
        v7 = (json_t *)json_integer(*(_DWORD *)(v45 + 1636), *(int *)(v45 + 1636) >> 31);
        json_object_set_new(v50, "Quota", v7);
        v8 = (json_t *)json_string("N");
        json_object_set_new(v50, "Long Poll", v8);
        v9 = (json_t *)json_integer(*(_DWORD *)(v45 + 1632), 0);
        json_object_set_new(v50, "Getworks", v9);
        v10 = (json_t *)json_integer(*(_DWORD *)(v45 + 1928), *(_DWORD *)(v45 + 1932));
        json_object_set_new(v50, "Accepted", v10);
        v11 = (json_t *)json_integer(*(_DWORD *)(v45 + 1936), *(_DWORD *)(v45 + 1940));
        json_object_set_new(v50, "Rejected", v11);
        v12 = (json_t *)json_integer(*(_DWORD *)(v45 + 1944), 0);
        json_object_set_new(v50, "Discarded", v12);
        v13 = (json_t *)json_integer(*(_DWORD *)(v45 + 1640), 0);
        json_object_set_new(v50, "Stale", v13);
        v14 = (json_t *)json_integer(*(_DWORD *)(v45 + 1948), 0);
        json_object_set_new(v50, "Get Failures", v14);
        v15 = (json_t *)json_integer(*(_DWORD *)(v45 + 1952), 0);
        json_object_set_new(v50, "Remote Failures", v15);
        memset(v42, 0, sizeof(v42));
        snprintf(v42, 0x80u, "%s", *(const char **)(v45 + 16));
        v16 = (json_t *)json_string(v42);
        json_object_set_new(v50, "User", v16);
        memset(v40, 0, sizeof(v40));
        if ( *(int *)(v45 + 1616) > 0 )
        {
          v49 = time(0) - *(_DWORD *)(v45 + 1616);
          snprintf(v40, 0x18u, "%d:%d:%d", v49 / 0xE10, v49 % 0xE10 / 0x3C, v49 % 0xE10 % 0x3C);
        }
        else
        {
          strcpy(v40, "0");
        }
        v17 = (json_t *)json_string(v40);
        json_object_set_new(v50, "Last Share Time", v17);
        sprintf((char *)(v45 + 1976), "%8.4f", *(double *)(v45 + 1808));
        v18 = (json_t *)json_string((const char *)(v45 + 1976));
        json_object_set_new(v50, "Diff", v18);
        v19 = (json_t *)json_integer(*(_DWORD *)(v45 + 1992), *(_DWORD *)(v45 + 1996));
        json_object_set_new(v50, "Diff1 Shares", v19);
        v20 = (json_t *)json_string(byte_CD240);
        json_object_set_new(v50, "Proxy Type", v20);
        v21 = (json_t *)json_string(byte_CD240);
        json_object_set_new(v50, "Proxy", v21);
        sub_CCAE4((__int64)(*(double *)(v45 + 1960) * 100.0));
        v22 = json_real();
        json_object_set_new(v50, "Difficulty Accepted", (json_t *)v22);
        sub_CCAE4((__int64)(*(double *)(v45 + 1968) * 100.0));
        v23 = json_real();
        json_object_set_new(v50, "Difficulty Rejected", (json_t *)v23);
        sub_CCAE4((__int64)(*(double *)(v45 + 1816) * 100.0));
        v24 = json_real();
        json_object_set_new(v50, "Difficulty Stale", (json_t *)v24);
        sub_CCAE4((__int64)(*(double *)(v45 + 1624) * 100.0));
        v25 = json_real();
        json_object_set_new(v50, "Last Share Difficulty", (json_t *)v25);
        if ( *(_BYTE *)(v45 + 28) )
          v26 = json_true();
        else
          v26 = (json_t *)json_false();
        json_object_set_new(v50, "Has Stratum", v26);
        v27 = json_true();
        json_object_set_new(v50, "Stratum Active", v27);
        v28 = (json_t *)json_string(byte_CD240);
        json_object_set_new(v50, "Stratum URL", v28);
        v29 = (json_t *)json_false();
        json_object_set_new(v50, "Has GBT", v29);
        v30 = json_real();
        json_object_set_new(v50, "Best Share", (json_t *)v30);
        if ( *(double *)(v45 + 1960) + *(double *)(v45 + 1968) + *(double *)(v45 + 1816) == 0.0 )
          v31 = 0.0;
        else
          v31 = *(double *)(v45 + 1968) / (*(double *)(v45 + 1960) + *(double *)(v45 + 1968) + *(double *)(v45 + 1816));
        v48 = v31;
        sub_CCAE4((__int64)(v31 * 100.0));
        v32 = json_real();
        json_object_set_new(v50, "Pool Rejected%", (json_t *)v32);
        if ( *(double *)(v45 + 1960) + *(double *)(v45 + 1968) + *(double *)(v45 + 1816) == 0.0 )
          v33 = 0.0;
        else
          v33 = *(double *)(v45 + 1816) / (*(double *)(v45 + 1960) + *(double *)(v45 + 1968) + *(double *)(v45 + 1816));
        v44 = v33;
        sub_CCAE4((__int64)(v33 * 100.0));
        v34 = json_real();
        json_object_set_new(v50, "Pool Stale%%", (json_t *)v34);
        json_array_append_new(v51, v50);
      }
      json_object_set_new(a1, "POOLS", v51);
      v35 = (json_t *)json_integer(1, 0);
      json_object_set_new(a1, "id", v35);
    }
    else
    {
      sub_20F64(a1, 0, 8, "No pools");
    }
    return v52;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "%s: input bad api param", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_pools_old",
      13,
      1216,
      100,
      v39);
    return -2147483646;
  }
}
