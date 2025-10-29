int __fastcall sub_6FD8C(const json_t *a1)
{
  const char *v2; // r0
  char v4[12]; // [sp+18h] [bp-100Ch] BYREF
  const json_t *v5; // [sp+1018h] [bp-Ch]
  const json_t *v6; // [sp+101Ch] [bp-8h]

  v5 = json_object_get(a1, "processor");
  if ( v5 && !*(_DWORD *)v5 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "processor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "_parse_processor",
      16,
      185,
      20,
      v4);
    v6 = json_object_get(v5, "type");
    if ( v6 && *(_DWORD *)v6 == 2 )
    {
      V_LOCK();
      v2 = json_string_value(v6);
      logfmt_raw(v4, 0x1000u, 0, "type: %s", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_processor",
        16,
        193,
        20,
        v4);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "get type failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/topol/topol.c",
        159,
        "_parse_processor",
        16,
        190,
        100,
        v4);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "get processor failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/topol/topol.c",
      159,
      "_parse_processor",
      16,
      182,
      100,
      v4);
    return -1;
  }
}
