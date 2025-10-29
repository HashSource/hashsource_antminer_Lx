int __fastcall sub_1EF90(json_t *a1, const char **a2)
{
  float v2; // s0
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
  double *v16; // r0
  json_t *v17; // r0
  json_t *v18; // r0
  json_t *v19; // r0
  json_t *v20; // r0
  char v24[24]; // [sp+1Ch] [bp-1158h] BYREF
  char v25[24]; // [sp+101Ch] [bp-158h] BYREF
  char v26[16]; // [sp+1034h] [bp-140h] BYREF
  char v27[12]; // [sp+1044h] [bp-130h] BYREF
  char v28[128]; // [sp+1050h] [bp-124h] BYREF
  char s[128]; // [sp+10D0h] [bp-A4h] BYREF
  int v30; // [sp+1150h] [bp-24h]
  float v31; // [sp+1154h] [bp-20h]
  unsigned int v32; // [sp+1158h] [bp-1Ch]
  json_t *v33; // [sp+115Ch] [bp-18h]
  json_t *v34; // [sp+1160h] [bp-14h]
  const char **v35; // [sp+1164h] [bp-10h]
  int v36; // [sp+1168h] [bp-Ch]
  int i; // [sp+116Ch] [bp-8h]

  v36 = 0;
  v35 = a2;
  v34 = 0;
  v33 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, sizeof(v25));
  v32 = 0;
  if ( v35 && a1 )
  {
    sub_1DE14(a1, v35);
    sub_1DF60(a1);
    v34 = (json_t *)json_array();
    get_total_nonce_rate();
    v31 = v2;
    for ( i = 0; i < total_pools; ++i )
    {
      v30 = *(_DWORD *)(pools + 4 * i);
      if ( v30 )
      {
        v33 = (json_t *)json_object();
        v4 = (json_t *)json_integer(i, i >> 31);
        json_object_set_new(v33, "index", v4);
        memset(s, 0, sizeof(s));
        snprintf(s, 0x80u, "%s", *(const char **)(v30 + 12));
        v5 = (json_t *)json_string(s);
        json_object_set_new(v33, "url", v5);
        memset(v28, 0, sizeof(v28));
        snprintf(v28, 0x80u, "%s", *(const char **)(v30 + 16));
        v6 = (json_t *)json_string(v28);
        json_object_set_new(v33, "user", v6);
        memset(v27, 0, sizeof(v27));
        if ( *(_BYTE *)(v30 + 1904) )
          strcpy(v27, "Dead");
        else
          strcpy(v27, "Alive");
        v7 = (json_t *)json_string(v27);
        json_object_set_new(v33, "status", v7);
        v8 = (json_t *)json_integer(*(_DWORD *)(v30 + 4), *(int *)(v30 + 4) >> 31);
        json_object_set_new(v33, "priority", v8);
        v9 = (json_t *)json_integer(*(_DWORD *)(v30 + 1632), 0);
        json_object_set_new(v33, "getworks", v9);
        v10 = (json_t *)json_integer(*(_DWORD *)(v30 + 1928), *(_DWORD *)(v30 + 1932));
        json_object_set_new(v33, "accepted", v10);
        v11 = (json_t *)json_integer(*(_DWORD *)(v30 + 1936), *(_DWORD *)(v30 + 1940));
        json_object_set_new(v33, "rejected", v11);
        v12 = (json_t *)json_integer(*(_DWORD *)(v30 + 1944), 0);
        json_object_set_new(v33, "discarded", v12);
        v13 = (json_t *)json_integer(*(_DWORD *)(v30 + 1640), 0);
        json_object_set_new(v33, "stale", v13);
        memset(v26, 0, sizeof(v26));
        snprintf(v26, 0x10u, "%s", (const char *)(v30 + 1976));
        v14 = (json_t *)json_string(v26);
        json_object_set_new(v33, "diff", v14);
        v15 = (json_t *)json_integer(*(_DWORD *)(v30 + 1992), *(_DWORD *)(v30 + 1996));
        json_object_set_new(v33, "diff1", v15);
        v16 = json_real();
        json_object_set_new(v33, "diffa", (json_t *)v16);
        v17 = (json_t *)json_integer(
                          (__int64)*(double *)(v30 + 1968),
                          (unsigned __int64)(__int64)*(double *)(v30 + 1968) >> 32);
        json_object_set_new(v33, "diffr", v17);
        v18 = (json_t *)json_integer(
                          (__int64)*(double *)(v30 + 1816),
                          (unsigned __int64)(__int64)*(double *)(v30 + 1816) >> 32);
        json_object_set_new(v33, "diffs", v18);
        v19 = (json_t *)json_integer(
                          (__int64)*(double *)(v30 + 1624),
                          (unsigned __int64)(__int64)*(double *)(v30 + 1624) >> 32);
        json_object_set_new(v33, "lsdiff", v19);
        memset(v25, 0, sizeof(v25));
        if ( *(int *)(v30 + 1616) > 0 )
        {
          v32 = time(0) - *(_DWORD *)(v30 + 1616);
          snprintf(v25, 0x18u, "%d:%d:%d", v32 / 0xE10, v32 % 0xE10 / 0x3C, v32 % 0xE10 % 0x3C);
        }
        else
        {
          strcpy(v25, "0");
        }
        v20 = (json_t *)json_string(v25);
        json_object_set_new(v33, "lstime", v20);
        json_array_append_new(v34, v33);
      }
    }
    json_object_set_new(a1, "POOLS", v34);
    return v36;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_pools",
      9,
      602,
      100,
      v24,
      a2);
    return -2147483646;
  }
}
