int __fastcall api_get_eeprom_sweep_freqs(int a1, void *dest, int a3, unsigned __int16 *a4)
{
  int v5; // r12
  char *v6; // r2
  unsigned __int16 v7; // r0
  int v8; // r1
  float v9; // s14
  int v10; // t1
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v14[4096]; // [sp+A10h] [bp-1000h] BYREF

  if ( dword_16E49C[0] && *(_BYTE *)(dword_16E49C[0] + 80) )
  {
    v5 = *(_DWORD *)(dword_16E49C[0] + 4 * dword_16E49C[a1 + 2]);
    v6 = src;
    v7 = *(_WORD *)(v5 + 60);
    v8 = v5 + 63;
    *a4 = v7;
    v9 = (double)*(unsigned __int16 *)(v5 + 62) * 0.01;
    do
    {
      v10 = *(unsigned __int8 *)++v8;
      *(float *)v6 = (float)v7 + (float)((float)v10 * v9);
      v6 += 4;
    }
    while ( s != v6 );
    if ( dest )
    {
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      snprintf(s, 0x800u, "%s: sweep_freqs is NULL\n", "api_get_eeprom_sweep_freqs");
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "api_get_eeprom_sweep_freqs",
        26,
        1008,
        100,
        v14);
      return -2;
    }
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_sweep_freqs",
      dword_16E49C[a1 + 2]);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "api_get_eeprom_sweep_freqs",
      26,
      990,
      100,
      v14);
    return -1;
  }
}
