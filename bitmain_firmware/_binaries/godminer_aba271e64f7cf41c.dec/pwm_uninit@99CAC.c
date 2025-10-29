int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 - 1 <= 1 )
  {
    *((_DWORD *)&unk_15F994 + 3 * a1 - 2) = 0;
    *((_DWORD *)&unk_15F994 + 3 * a1 - 3) = *((_DWORD *)&unk_15F994 + 3 * a1 - 2);
    result = (unsigned __int8)*((_DWORD *)&unk_15F994 + 3 * a1 - 3);
    *((_BYTE *)&unk_15F994 + 12 * a1 - 4) = result;
  }
  else
  {
    strcpy(v3, "bad param\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_pwm.c",
             185,
             "pwm_uninit",
             10,
             40,
             100,
             v4);
  }
  return result;
}
