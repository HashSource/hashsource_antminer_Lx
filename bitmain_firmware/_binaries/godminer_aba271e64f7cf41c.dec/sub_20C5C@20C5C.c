int __fastcall sub_20C5C(json_t *a1, const char **a2)
{
  char v6[48]; // [sp+1Ch] [bp-1030h] BYREF
  int v7; // [sp+101Ch] [bp-30h] BYREF
  __int64 v8; // [sp+1020h] [bp-2Ch]
  json_t *v9; // [sp+1028h] [bp-24h]
  const char **v10; // [sp+102Ch] [bp-20h]
  int v11; // [sp+1030h] [bp-1Ch]
  int v12; // [sp+1034h] [bp-18h]
  void *all_created_runtime; // [sp+1038h] [bp-14h]
  int v14; // [sp+103Ch] [bp-10h]
  int v15; // [sp+1040h] [bp-Ch]
  int v16; // [sp+1044h] [bp-8h]

  v15 = 0;
  v16 = 0;
  v8 = 0;
  v7 = 0;
  v14 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v7);
  v12 = 0;
  v11 = 0;
  v10 = a2;
  if ( a2 )
  {
    sub_1DE14(a1, v10);
    sub_1DF60(a1);
    v9 = 0;
    v9 = (json_t *)json_array();
    sweep_get_error_code(v9);
    json_object_set_new(a1, "WARNING", v9);
    return v15;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s: input bad api param", "get_warnings");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_warnings",
      12,
      1030,
      100,
      v6);
    return -2147483646;
  }
}
