int __fastcall sub_9A828(int a1, char a2)
{
  int result; // r0
  char v5[12]; // [sp+18h] [bp-180Ch] BYREF
  char v6[12]; // [sp+818h] [bp-100Ch] BYREF
  int v7; // [sp+1818h] [bp-Ch]
  int i; // [sp+181Ch] [bp-8h]

  result = sub_9A6FC(a1);
  v7 = result;
  if ( result == 259 )
  {
    snprintf(v5, 0x800u, "gpio port %d is not a supported key\n", a1);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
             184,
             "gpio_key_callback",
             17,
             134,
             80,
             v6);
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( dword_15F9D4[i] )
        result = dword_15F9D4[i](v7, a2 != 0);
    }
  }
  return result;
}
