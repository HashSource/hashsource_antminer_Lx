int __fastcall sub_A2E5C(int a1, char *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  char v5[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    sprintf(
      a2,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 31),
      *(unsigned __int8 *)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 32));
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "get_pcb_version",
      15,
      1195,
      100,
      v5);
    return 255;
  }
}
