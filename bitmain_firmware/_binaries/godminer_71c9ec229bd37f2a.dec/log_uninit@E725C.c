int __fastcall log_uninit(int a1)
{
  const char *v1; // r0

  if ( g_zc || g_temp_zc || g_fan_zc || g_hash_zc )
  {
    zlog_fini(a1);
    LOWORD(v1) = 17968;
    HIWORD(v1) = (unsigned int)"r/bitmain_power_APW9.c" >> 16;
    g_hash_zc = 0;
    g_temp_zc = 0;
    g_zc = 0;
    puts(v1);
  }
  return 0;
}
