int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  char v6[16]; // [sp+1Ch] [bp-1A10h] BYREF
  char v7[16]; // [sp+81Ch] [bp-1210h] BYREF
  char v8[256]; // [sp+181Ch] [bp-210h] BYREF
  _BYTE s[256]; // [sp+191Ch] [bp-110h] BYREF
  unsigned __int8 *v10; // [sp+1A1Ch] [bp-10h]
  int v11; // [sp+1A20h] [bp-Ch]
  int v12; // [sp+1A24h] [bp-8h]

  v11 = 0;
  v12 = 3;
  memset(s, 0, sizeof(s));
  memset(v8, 0, sizeof(v8));
  v10 = *(unsigned __int8 **)(a2 + 4 * a1);
  do
  {
    v11 = eeprom_read(a1, 0, (int)s, 0x100u);
    if ( v11 )
    {
      snprintf(v6, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
        180,
        "eeprom_load_one_chain",
        21,
        822,
        100,
        v7);
      return v11;
    }
    if ( !sub_9D6A8(s, v8) )
      break;
    snprintf(v6, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "eeprom_load_one_chain",
      21,
      836,
      100,
      v7);
    usleep(0x7A120u);
    --v12;
  }
  while ( v12 );
  if ( v12 && sub_9F374(v8, (int)v10) && sub_9D4A8(v8, v10) )
  {
    *(_BYTE *)(a2 + a1 + 64) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v6, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "eeprom_load_one_chain",
      21,
      853,
      100,
      v7);
    return -1;
  }
  return v11;
}
