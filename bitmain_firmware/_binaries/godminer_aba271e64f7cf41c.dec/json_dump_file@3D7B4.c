int __fastcall json_dump_file(_DWORD *a1, const char *a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch]
  FILE *stream; // [sp+14h] [bp-8h]

  stream = fopen(a2, "w");
  if ( !stream )
    return -1;
  v7 = json_dumpf(a1, (int)stream, a3);
  if ( fclose(stream) )
    return -1;
  else
    return v7;
}
