int sub_2D2F4()
{
  char v1[16]; // [sp+14h] [bp-1010h] BYREF
  int v2; // [sp+1014h] [bp-10h]
  int hardware_version; // [sp+1018h] [bp-Ch]
  int v4; // [sp+101Ch] [bp-8h]

  hardware_version = get_hardware_version();
  v4 = BYTE2(hardware_version);
  v2 = (unsigned __int8)hardware_version;
  V_LOCK();
  logfmt_raw(
    v1,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "2.0.0_release_clean_master_62efe336adce4a2cd0126a04d0c912151939985c_Aug 21 2024 19:33:46");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/god-miner.c",
    149,
    "init_miner_version",
    18,
    657,
    40,
    v1);
  return sprintf(g_miner_version, "%d.%d-%s", v2, v4, "2.0.0");
}
