int __fastcall sub_28A4C(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  __int64 v6; // kr00_8
  double v7; // d6
  double v8; // d7
  bool v9; // cc
  __int64 v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r3
  bool v15; // cc
  time_t v16; // r0
  unsigned int v17; // lr
  char *v18; // r0
  int v19; // r5
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  char *v22; // r0
  char *v23; // r0
  int v24; // r2
  int *v25; // r3
  int v26; // r1
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  char *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v38; // [sp+14h] [bp-1148h]
  char v40[4]; // [sp+2Ch] [bp-1130h] BYREF
  int v41; // [sp+30h] [bp-112Ch]
  int v42; // [sp+34h] [bp-1128h] BYREF
  int v43; // [sp+38h] [bp-1124h]
  int v44; // [sp+3Ch] [bp-1120h]
  char v45[4]; // [sp+40h] [bp-111Ch] BYREF
  int v46; // [sp+44h] [bp-1118h]
  int v47; // [sp+48h] [bp-1114h]
  int v48; // [sp+4Ch] [bp-1110h]
  int v49; // [sp+50h] [bp-110Ch]
  int v50; // [sp+54h] [bp-1108h]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v52[128]; // [sp+D8h] [bp-1084h] BYREF
  char v53[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v52, 0, sizeof(v52));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v43 = 0;
  v44 = 0;
  v42 = 0;
  *(_DWORD *)v40 = 0;
  *(_DWORD *)v45 = 0;
  v41 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools",
      9,
      508,
      100,
      v53);
    return -2147483646;
  }
  else
  {
    sub_240EC(a1, a2);
    sub_23CA8(a1);
    v38 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v6 = 0;
      do
      {
        v19 = *(_DWORD *)(pools + 4 * v6);
        if ( v19 )
        {
          v20 = json_object();
          v21 = json_integer(v6);
          json_object_set_new(v20, "index", v21);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v19 + 8));
          v22 = BUFX_strdup(s);
          json_object_set_new(v20, "url", v22);
          memset(v52, 0, sizeof(v52));
          snprintf(v52, 0x80u, "%s", *(const char **)(v19 + 12));
          v23 = BUFX_strdup(v52);
          json_object_set_new(v20, "user", v23);
          v24 = *(unsigned __int8 *)(v19 + 2072);
          v43 = 0;
          v42 = 0;
          v44 = 0;
          if ( v24 )
            LOWORD(v25) = -6060;
          else
            LOWORD(v25) = -7660;
          HIWORD(v25) = 18;
          v26 = v25[1];
          v42 = *v25;
          if ( v24 )
            LOBYTE(v43) = v26;
          else
            LOWORD(v43) = v26;
          v27 = BUFX_strdup((char *)&v42);
          json_object_set_new(v20, "status", v27);
          v28 = json_integer(*(int *)(v19 + 4));
          json_object_set_new(v20, "priority", v28);
          v29 = json_integer(*(unsigned int *)(v19 + 1800));
          json_object_set_new(v20, "getworks", v29);
          v30 = json_integer(*(_QWORD *)(v19 + 2096));
          json_object_set_new(v20, "accepted", v30);
          v31 = json_integer(*(_QWORD *)(v19 + 2104));
          json_object_set_new(v20, "rejected", v31);
          v32 = json_integer(*(unsigned int *)(v19 + 2112));
          json_object_set_new(v20, "discarded", v32);
          v33 = json_integer(*(unsigned int *)(v19 + 1808));
          json_object_set_new(v20, "stale", v33);
          *(_DWORD *)v40 = 0;
          v41 = 0;
          snprintf(v40, 8u, "%s", (const char *)(v19 + 2144));
          v34 = BUFX_strdup(v40);
          json_object_set_new(v20, "diff", v34);
          v35 = json_integer(*(_QWORD *)(v19 + 2160));
          json_object_set_new(v20, "diff1", v35);
          v36 = json_integer((__int64)*(double *)(v19 + 2128));
          LODWORD(v10) = json_object_set_new(v20, "diffa", v36);
          if ( opt_algo == 5 )
          {
            v7 = *(double *)(v19 + 2136);
            v8 = (double)(int)((float)(1.0 - v2) * *(double *)(v19 + 2128));
            v9 = v7 <= v8;
            if ( v7 <= v8 )
              v10 = 0;
            else
              v8 = v7 - v8;
            if ( !v9 )
              v10 = (int)v8;
          }
          else
          {
            v10 = (__int64)*(double *)(v19 + 2136);
          }
          v11 = json_integer(v10);
          json_object_set_new(v20, "diffr", v11);
          v12 = json_integer((__int64)*(double *)(v19 + 1984));
          json_object_set_new(v20, "diffs", v12);
          v13 = json_integer((__int64)*(double *)(v19 + 1792));
          json_object_set_new(v20, "lsdiff", v13);
          v14 = *(_DWORD *)(v19 + 1784);
          *(_DWORD *)v45 = 0;
          v46 = 0;
          v15 = v14 <= 0;
          v47 = 0;
          if ( v14 <= 0 )
            LOWORD(v14) = 48;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          if ( v15 )
          {
            *(_WORD *)v45 = v14;
          }
          else
          {
            v16 = time(0);
            v17 = (v16 - *(_DWORD *)(v19 + 1784)) & ~((v16 - *(_DWORD *)(v19 + 1784)) >> 31);
            snprintf(v45, 0x18u, "%d:%02d:%02d", v17 / 0xE10, v17 % 0xE10 / 0x3C, v17 % 0xE10 % 0x3C);
          }
          v18 = BUFX_strdup(v45);
          json_object_set_new(v20, "lstime", v18);
          json_array_append_new(v38, v20);
        }
        ++v6;
      }
      while ( total_pools > (int)v6 );
    }
    json_object_set_new(a1, "POOLS", v38);
    return 0;
  }
}
