int bitmain_power_open()
{
  char v2[2048]; // [sp+14h] [bp+4h] BYREF
  _BYTE v3[12]; // [sp+814h] [bp+804h] BYREF
  int v4; // [sp+1814h] [bp+1804h] BYREF
  __int16 v5; // [sp+1818h] [bp+1808h]
  char v6; // [sp+181Ah] [bp+180Ah]
  char v7; // [sp+181Bh] [bp+180Bh]
  int v8; // [sp+181Ch] [bp+180Ch]

  v8 = 0;
  if ( dword_47B8C0 && dword_47B8C4 )
    return dword_47B8C0;
  v4 = 0;
  v5 = 1;
  v6 = 2;
  v7 = 0;
  pthread_mutex_lock(&power_mutex);
  v8 = iic_init((int)&v4);
  pthread_mutex_unlock(&power_mutex);
  if ( v8 < 0 )
    return v8;
  dword_47B8C0 = v8;
  dword_47B8C4 = 1;
  memset(&unk_47B8D0, 0, 0x68u);
  v8 = bitmain_power_version();
  if ( v8 >= 0 )
  {
    dword_47B8C8 = v8;
    snprintf(v2, 0x800u, "power open power_version = 0x%x", v8);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_power_open",
      18,
      416,
      40,
      v3);
    return 0;
  }
  else
  {
    strcpy(v2, "power open power_version < 0 will close power\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      95,
      "bitmain_power_open",
      18,
      411,
      40,
      v3);
    bitmain_power_close();
    return v8;
  }
}
