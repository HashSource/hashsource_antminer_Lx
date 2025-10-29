int __fastcall sweep_get_error_code(json_t *a1)
{
  char s[128]; // [sp+Ch] [bp-1E8h] BYREF
  struct timeval v4; // [sp+8Ch] [bp-168h] BYREF
  struct timeval v5; // [sp+94h] [bp-160h] BYREF
  struct timeval v6; // [sp+9Ch] [bp-158h] BYREF
  struct timeval v7; // [sp+A4h] [bp-150h] BYREF
  struct timeval v8; // [sp+ACh] [bp-148h] BYREF
  struct timeval v9; // [sp+B4h] [bp-140h] BYREF
  struct timeval v10; // [sp+BCh] [bp-138h] BYREF
  struct timeval v11; // [sp+C4h] [bp-130h] BYREF
  struct timeval v12; // [sp+CCh] [bp-128h] BYREF
  struct timeval tv; // [sp+D4h] [bp-120h] BYREF
  int v14; // [sp+1DCh] [bp-18h]
  int m; // [sp+1E0h] [bp-14h]
  int k; // [sp+1E4h] [bp-10h]
  int j; // [sp+1E8h] [bp-Ch]
  int i; // [sp+1ECh] [bp-8h]

  v14 = 0;
  sub_654C4();
  miner_6060info_errorcode_init();
  pthread_mutex_lock(&miner_6060info_lock);
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( byte_152520[0] )
  {
    strcpy(s, "P:1");
    set_json_info_by_errorcode_and_time(a1, s, dword_152524);
  }
  v12.tv_sec = 0;
  v12.tv_usec = 0;
  gettimeofday(&v12, 0);
  if ( byte_152530 )
  {
    strcpy(s, "P:2");
    set_json_info_by_errorcode_and_time(a1, s, dword_152534);
  }
  v11.tv_sec = 0;
  v11.tv_usec = 0;
  gettimeofday(&v11, 0);
  if ( byte_152540 )
  {
    strcpy(s, "J:6");
    set_json_info_by_errorcode_and_time(a1, s, dword_152544);
  }
  for ( i = 0; i <= 7; ++i )
  {
    v10.tv_sec = 0;
    v10.tv_usec = 0;
    gettimeofday(&v10, 0);
    if ( byte_152520[16 * i + 48] )
    {
      snprintf(s, 0x80u, "F%d:1", i);
      set_json_info_by_errorcode_and_time(a1, s, *(_DWORD *)&byte_152520[16 * i + 52]);
    }
  }
  for ( j = 0; j <= 15; ++j )
  {
    v9.tv_sec = 0;
    v9.tv_usec = 0;
    gettimeofday(&v9, 0);
    if ( byte_152520[16 * j + 176] )
    {
      snprintf(s, 0x80u, "R%d:1", j);
      set_json_info_by_errorcode_and_time(a1, s, *(_DWORD *)&byte_152520[16 * j + 180]);
    }
  }
  for ( k = 0; k <= 15; ++k )
  {
    v8.tv_sec = 0;
    v8.tv_usec = 0;
    gettimeofday(&v8, 0);
    if ( byte_152520[16 * k + 432] )
    {
      snprintf(s, 0x80u, "J%d:1", k);
      set_json_info_by_errorcode_and_time(a1, s, *(_DWORD *)&byte_152520[16 * k + 436]);
    }
  }
  for ( m = 0; m <= 15; ++m )
  {
    v7.tv_sec = 0;
    v7.tv_usec = 0;
    gettimeofday(&v7, 0);
    if ( byte_152520[16 * m + 688] )
    {
      snprintf(s, 0x80u, "J%d:2", m);
      set_json_info_by_errorcode_and_time(a1, s, *(_DWORD *)&byte_152520[16 * m + 692]);
    }
  }
  v6.tv_sec = 0;
  v6.tv_usec = 0;
  gettimeofday(&v6, 0);
  if ( byte_1528D0 )
  {
    strcpy(s, "N:4");
    set_json_info_by_errorcode_and_time(a1, s, dword_1528D4);
  }
  v5.tv_sec = 0;
  v5.tv_usec = 0;
  gettimeofday(&v5, 0);
  if ( byte_1528E0 )
  {
    strcpy(s, "M:1");
    set_json_info_by_errorcode_and_time(a1, s, dword_1528E4);
  }
  v4.tv_sec = 0;
  v4.tv_usec = 0;
  gettimeofday(&v4, 0);
  if ( byte_1528F0 )
  {
    strcpy(s, "J:8");
    set_json_info_by_errorcode_and_time(a1, s, dword_1528F4);
  }
  return pthread_mutex_unlock(&miner_6060info_lock);
}
