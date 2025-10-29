int __fastcall api_get_eeprom_asic_freqs(int a1, void *a2, float *a3)
{
  int v4; // r3
  float v5; // s15
  char v7[16]; // [sp+24h] [bp-1A10h] BYREF
  char v8[16]; // [sp+824h] [bp-1210h] BYREF
  float src[128]; // [sp+1824h] [bp-210h] BYREF
  unsigned __int16 v10; // [sp+1A26h] [bp-Eh]
  float v11; // [sp+1A28h] [bp-Ch]
  unsigned int i; // [sp+1A2Ch] [bp-8h]

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    v4 = *(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[a1]);
    v10 = (*(unsigned __int8 *)(v4 + 42) << 8) | *(unsigned __int8 *)(v4 + 41);
    v5 = (double)*(unsigned __int16 *)(*(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[a1]) + 61) * 0.01;
    v11 = v5;
    for ( i = 0; i <= 0x7F; ++i )
      src[i] = (float)v10
             + (float)((float)*(unsigned __int8 *)(*(_DWORD *)(dword_15FA68 + 4 * dword_15FA6C[a1]) + i + 63) * v11);
    if ( a2 && a3 )
    {
      *a3 = v11;
      memcpy(a2, src, 0x200u);
      return 0;
    }
    else
    {
      snprintf(v7, 0x800u, "%s: sweep_freqs is NULL %d\n", "api_get_eeprom_asic_freqs", dword_15FA6C[a1]);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
        180,
        "api_get_eeprom_asic_freqs",
        25,
        1390,
        100,
        v8);
      return -2;
    }
  }
  else
  {
    snprintf(v7, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "api_get_eeprom_asic_freqs", dword_15FA6C[a1]);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "api_get_eeprom_asic_freqs",
      25,
      1371,
      100,
      v8);
    return -1;
  }
}
