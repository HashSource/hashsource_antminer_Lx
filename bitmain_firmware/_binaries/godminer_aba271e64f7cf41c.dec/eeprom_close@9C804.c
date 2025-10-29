unsigned int __fastcall eeprom_close(unsigned int result)
{
  unsigned int v1; // [sp+14h] [bp-1808h]
  char v2[4]; // [sp+18h] [bp-1804h] BYREF
  char v3[4]; // [sp+818h] [bp-1004h] BYREF

  v1 = result;
  if ( result <= 0xF )
  {
    if ( dword_15F9E8[2 * result] || dword_15F9E8[2 * result + 1] )
    {
      result = iic_uninit(dword_15F9E8[2 * result]);
      dword_15F9E8[2 * v1] = 0;
      dword_15F9E8[2 * v1 + 1] = 0;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_close", result);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
             180,
             "eeprom_close",
             12,
             74,
             100,
             v3);
  }
  return result;
}
