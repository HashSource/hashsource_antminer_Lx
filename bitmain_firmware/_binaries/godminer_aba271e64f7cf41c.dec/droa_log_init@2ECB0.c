void *droa_log_init()
{
  void *result; // r0
  size_t v1; // r0
  char v2[24]; // [sp+14h] [bp-1018h] BYREF
  char *s; // [sp+1014h] [bp-18h]
  void *v4; // [sp+1018h] [bp-14h]
  int i; // [sp+101Ch] [bp-10h]

  result = get_all_created_runtime(&g_chain_number);
  v4 = result;
  for ( i = 0; i < g_chain_number; ++i )
  {
    if ( (unsigned int)i <= 0xF )
    {
      s = (char *)api_get_eeprom_chip_sn(i);
      v1 = strlen(s);
      strncpy(&g_bsn[64 * i], s, v1);
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "droa board_sn:%s", &g_bsn[64 * i]);
      V_UNLOCK();
      result = (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rele"
                         "ase/build/godminer-origin_godminer-branch1/god-miner.c",
                         149,
                         "droa_log_init",
                         13,
                         1670,
                         60,
                         v2);
    }
  }
  return result;
}
