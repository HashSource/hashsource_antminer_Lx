int __fastcall sub_2541C(_DWORD *a1, int a2)
{
  bool v4; // zf
  int v5; // r5
  __int64 v6; // kr00_8
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  char *v9; // r0
  _DWORD *v10; // r0
  double *v11; // r0
  double v12; // d5
  double v13; // d7
  double *v14; // r0
  double v15; // d7
  double *v16; // r0
  int v17; // r5
  _DWORD *v18; // r4
  _DWORD *v19; // r0
  char *v20; // r0
  int v21; // r2
  int *v22; // r3
  int v23; // r1
  char *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  char *v35; // r0
  int v36; // r3
  bool v37; // cc
  time_t v38; // r0
  unsigned int v39; // r0
  char *v40; // r0
  double *v41; // r8
  double *v42; // r9
  char *v43; // r0
  _DWORD *v44; // r0
  char *v45; // r0
  char *v46; // r0
  double *v47; // r0
  double *v48; // r0
  double *v49; // r0
  double *v50; // r0
  _DWORD *v51; // r0
  _DWORD *v53; // [sp+24h] [bp-1140h]
  int v55; // [sp+3Ch] [bp-1128h] BYREF
  int v56; // [sp+40h] [bp-1124h]
  int v57; // [sp+44h] [bp-1120h]
  char v58[4]; // [sp+48h] [bp-111Ch] BYREF
  int v59; // [sp+4Ch] [bp-1118h]
  int v60; // [sp+50h] [bp-1114h]
  int v61; // [sp+54h] [bp-1110h]
  int v62; // [sp+58h] [bp-110Ch]
  int v63; // [sp+5Ch] [bp-1108h]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v65[128]; // [sp+E0h] [bp-1084h] BYREF
  char v66[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v65, 0, sizeof(v65));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v56 = 0;
  v57 = 0;
  v55 = 0;
  *(_DWORD *)v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  if ( v4 )
  {
    v5 = -2147483646;
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "%s: input bad api param", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools_old",
      13,
      1045,
      100,
      v66);
  }
  else
  {
    v5 = total_pools;
    if ( total_pools )
    {
      sub_23DB8(a1, 1, 7, *(const char **)(a2 + 8));
      v53 = json_array();
      if ( total_pools > 0 )
      {
        v6 = 0;
        do
        {
          v17 = *(_DWORD *)(pools + 4 * v6);
          v18 = json_object();
          v19 = json_integer(v6);
          json_object_set_new(v18, "POOL", v19);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v17 + 8));
          v20 = BUFX_strdup(s);
          json_object_set_new(v18, "URL", v20);
          v21 = *(unsigned __int8 *)(v17 + 2072);
          v55 = 0;
          v56 = 0;
          v57 = 0;
          if ( v21 )
            LOWORD(v22) = -7668;
          else
            LOWORD(v22) = -7660;
          HIWORD(v22) = 18;
          v23 = v22[1];
          v55 = *v22;
          if ( v21 )
            LOBYTE(v56) = v23;
          else
            LOWORD(v56) = v23;
          v24 = BUFX_strdup((char *)&v55);
          json_object_set_new(v18, "Status", v24);
          v25 = json_integer(*(int *)(v17 + 4));
          json_object_set_new(v18, "Priority", v25);
          v26 = json_integer(*(int *)(v17 + 1804));
          json_object_set_new(v18, "Quota", v26);
          v27 = BUFX_strdup("N");
          json_object_set_new(v18, "Long Poll", v27);
          v28 = json_integer(*(unsigned int *)(v17 + 1800));
          json_object_set_new(v18, "Getworks", v28);
          v29 = json_integer(*(_QWORD *)(v17 + 2096));
          json_object_set_new(v18, "Accepted", v29);
          v30 = json_integer(*(_QWORD *)(v17 + 2104));
          json_object_set_new(v18, "Rejected", v30);
          v31 = json_integer(*(unsigned int *)(v17 + 2112));
          json_object_set_new(v18, "Discarded", v31);
          v32 = json_integer(*(unsigned int *)(v17 + 1808));
          json_object_set_new(v18, "Stale", v32);
          v33 = json_integer(*(unsigned int *)(v17 + 2116));
          json_object_set_new(v18, "Get Failures", v33);
          v34 = json_integer(*(unsigned int *)(v17 + 2120));
          json_object_set_new(v18, "Remote Failures", v34);
          memset(v65, 0, sizeof(v65));
          snprintf(v65, 0x80u, "%s", *(_DWORD *)(v17 + 12));
          v35 = BUFX_strdup(v65);
          json_object_set_new(v18, "User", v35);
          v36 = *(_DWORD *)(v17 + 1784);
          *(_DWORD *)v58 = 0;
          v59 = 0;
          v37 = v36 <= 0;
          v60 = 0;
          if ( v36 <= 0 )
            LOWORD(v36) = 48;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          if ( v37 )
          {
            *(_WORD *)v58 = v36;
          }
          else
          {
            v38 = time(0);
            v39 = (v38 - *(_DWORD *)(v17 + 1784)) & ~((v38 - *(_DWORD *)(v17 + 1784)) >> 31);
            snprintf(v58, 0x18u, "%d:%02d:%02d", v39 / 0xE10, v39 % 0xE10 / 0x3C, v39 % 0xE10 % 0x3C);
          }
          v40 = BUFX_strdup(v58);
          json_object_set_new(v18, "Last Share Time", v40);
          v41 = (double *)(v17 + 1984);
          v42 = (double *)(v17 + 2128);
          sprintf((char *)(v17 + 2144), "%8.4f", *(double *)(v17 + 1976));
          v43 = BUFX_strdup((char *)(v17 + 2144));
          json_object_set_new(v18, "Diff", v43);
          v44 = json_integer(*(_QWORD *)(v17 + 2160));
          json_object_set_new(v18, "Diff1 Shares", v44);
          v45 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy Type", v45);
          v46 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy", v46);
          sub_12D7DC((__int64)(*(double *)(v17 + 2128) * 100.0));
          v47 = json_real();
          json_object_set_new(v18, "Difficulty Accepted", v47);
          sub_12D7DC((__int64)(*(double *)(v17 + 2136) * 100.0));
          v48 = json_real();
          json_object_set_new(v18, "Difficulty Rejected", v48);
          sub_12D7DC((__int64)(*(double *)(v17 + 1984) * 100.0));
          v49 = json_real();
          json_object_set_new(v18, "Difficulty Stale", v49);
          sub_12D7DC((__int64)(*(double *)(v17 + 1792) * 100.0));
          v50 = json_real();
          json_object_set_new(v18, "Last Share Difficulty", v50);
          if ( *(_BYTE *)(v17 + 24) )
            v7 = json_true();
          else
            v7 = json_false();
          json_object_set_new(v18, "Has Stratum", v7);
          v8 = json_true();
          json_object_set_new(v18, "Stratum Active", v8);
          v9 = BUFX_strdup("");
          json_object_set_new(v18, "Stratum URL", v9);
          v10 = json_false();
          json_object_set_new(v18, "Has GBT", v10);
          v11 = json_real();
          json_object_set_new(v18, "Best Share", v11);
          v12 = *(double *)(v17 + 2136);
          v13 = v12 + *v42 + *v41;
          if ( v13 != 0.0 )
            sub_12D7DC((__int64)(v12 / v13 * 100.0));
          v14 = json_real();
          json_object_set_new(v18, "Pool Rejected%", v14);
          v15 = *v42 + *(double *)(v17 + 2136) + *v41;
          if ( v15 != 0.0 )
            sub_12D7DC((__int64)(*v41 / v15 * 100.0));
          v16 = json_real();
          json_object_set_new(v18, "Pool Stale%%", v16);
          json_array_append_new(v53, v18);
          ++v6;
        }
        while ( total_pools > (int)v6 );
      }
      v5 = 0;
      json_object_set_new(a1, "POOLS", v53);
      v51 = json_integer(1);
      json_object_set_new(a1, "id", v51);
    }
    else
    {
      sub_23DB8(a1, 0, 8, "No pools");
    }
  }
  return v5;
}
