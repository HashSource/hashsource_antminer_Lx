int sub_9D24C()
{
  int v0; // r4
  _DWORD v3[512]; // [sp+10h] [bp-1814h] BYREF
  char v4[20]; // [sp+810h] [bp-1014h] BYREF
  int v5; // [sp+1810h] [bp-14h]
  unsigned __int8 i; // [sp+1817h] [bp-Dh]

  if ( dword_15FA68 || (dword_15FA68 = (int)calloc(1u, 0x54u)) != 0 )
  {
    for ( i = 0; i < dword_15FAAC; ++i )
    {
      v5 = dword_15FA6C[i];
      if ( !*(_DWORD *)(dword_15FA68 + 4 * v5) )
      {
        v0 = dword_15FA68;
        *(_DWORD *)(v0 + 4 * v5) = calloc(1u, 0xCCu);
        if ( !*(_DWORD *)(dword_15FA68 + 4 * v5) )
        {
          snprintf((char *)v3, 0x800u, "No memory for configuraion for chain %d.", v5);
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
            180,
            "_alloc_memory",
            13,
            215,
            100,
            v4);
          goto LABEL_11;
        }
      }
    }
    return 0;
  }
  else
  {
    strcpy((char *)v3, "No memory for configuraion.");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "_alloc_memory",
      13,
      202,
      100,
      v4,
      v3[0],
      v3[1],
      v3[2],
      v3[3],
      v3[4],
      v3[5],
      v3[6]);
LABEL_11:
    sub_9D164();
    return -1;
  }
}
