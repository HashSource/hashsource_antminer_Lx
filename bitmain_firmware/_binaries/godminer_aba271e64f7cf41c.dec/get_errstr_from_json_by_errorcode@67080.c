int __fastcall get_errstr_from_json_by_errorcode(const char *a1, char *a2, size_t a3)
{
  size_t v4; // r0
  char v9[44]; // [sp+20h] [bp-102Ch] BYREF
  const char *v10; // [sp+1020h] [bp-2Ch]
  const json_t *v11; // [sp+1024h] [bp-28h]
  const char *v12; // [sp+1028h] [bp-24h]
  const json_t *v13; // [sp+102Ch] [bp-20h]
  char *s2; // [sp+1030h] [bp-1Ch]
  const json_t *v15; // [sp+1034h] [bp-18h]
  char v16; // [sp+103Bh] [bp-11h]
  size_t i; // [sp+103Ch] [bp-10h]
  const json_t *v18; // [sp+1040h] [bp-Ch]
  const json_t *v19; // [sp+1044h] [bp-8h]

  v19 = 0;
  v18 = 0;
  if ( byte_15251C != 1 && (unsigned __int8)miner_6060info_errorcode_init() != 1 )
    return 0;
  v19 = json_object_get((const json_t *)dword_152500, "errorcode");
  if ( !v19 || *(_DWORD *)v19 != 1 )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "%s, %d bad errorcode format",
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
      234);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
      179,
      "get_errstr_from_json_by_errorcode",
      33,
      234,
      100,
      v9);
  }
  v16 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = json_array_size(v19);
    if ( i >= v4 )
      break;
    v18 = json_array_get(v19, i);
    if ( !v18 || *(_DWORD *)v18 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "%s, %d bad object in errorcode",
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        243);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        179,
        "get_errstr_from_json_by_errorcode",
        33,
        243,
        100,
        v9);
      return 0;
    }
    v15 = json_object_get(v18, "code");
    s2 = (char *)json_string_value(v15);
    if ( !strcmp(a1, s2) )
    {
      v13 = json_object_get(v18, "reason");
      v12 = json_string_value(v13);
      v11 = json_object_get(v18, "suggestion");
      v10 = json_string_value(v11);
      snprintf(a2, a3, "%s; %s; %s", s2, v12, v10);
      v16 = 1;
      break;
    }
  }
  if ( v16 == 1 )
    return 1;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "error code %s does not exist in the file", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
    179,
    "get_errstr_from_json_by_errorcode",
    33,
    262,
    100,
    v9);
  return 0;
}
