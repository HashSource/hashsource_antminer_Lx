int __fastcall dump_pt2_result(int a1, int a2)
{
  time_t timer; // [sp+20h] [bp+8h] BYREF
  struct tm *v6; // [sp+24h] [bp+Ch]
  FILE *stream; // [sp+28h] [bp+10h]
  int k; // [sp+2Ch] [bp+14h]
  int j; // [sp+30h] [bp+18h]
  int i; // [sp+34h] [bp+1Ch]

  stream = fopen("/config/stats.log", "a+");
  if ( !stream )
  {
    puts("open /config/stats.log failed!");
    exit(-1);
  }
  time(&timer);
  v6 = localtime(&timer);
  fprintf(
    stream,
    "chain[%1d], %d%d%d %d:%d:%d\n",
    gChain,
    v6->tm_year + 1900,
    v6->tm_mon + 1,
    v6->tm_mday,
    v6->tm_hour,
    v6->tm_min,
    v6->tm_sec);
  for ( i = 0; *(_DWORD *)(*(_DWORD *)(g_config_info + 8) + 28) > i; ++i )
    fprintf(stream, "\t%4d", *((_DWORD *)&gHistory_Result + 66450 * i + 7));
  for ( j = 0; j < a2; ++j )
  {
    fprintf(stream, "\n%4d", *(_DWORD *)(a1 + 272 * j));
    for ( k = 0; *(_DWORD *)(a1 + 272 * j + 8) > k; ++k )
      fprintf(stream, "\t%.4f", *(double *)(8 * (k + 2) + 272 * j + a1));
  }
  fwrite("\n-------------\n", 1u, 0xFu, stream);
  return fclose(stream);
}
