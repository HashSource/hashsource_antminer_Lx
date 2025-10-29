_DWORD *__fastcall sub_2E1D4(char *s2)
{
  _DWORD *result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_1642D8[0] > 0x13u )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_1642D8[0]);
    V_UNLOCK();
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_master/pool.c",
                       127,
                       "reject_reason_history_update",
                       28,
                       39,
                       20,
                       v3);
  }
  else
  {
    if ( !dword_1642D8[0] )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_1642D8[0]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "reject_reason_history_update",
        28,
        44,
        60,
        v3);
      reject_reason_map = 0;
      dword_16BE74 = 0;
      dword_16BE78 = 0;
      dword_16BE7C = 0;
      dword_16BE80 = 0;
    }
    result = (_DWORD *)map_get_(&reject_reason_map, s2);
    dword_16BE7C = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_16BE80 = 1;
      ++dword_1642D8[0];
      return (_DWORD *)map_set_((void **)&reject_reason_map, s2, &dword_16BE80, 4u);
    }
  }
  return result;
}
