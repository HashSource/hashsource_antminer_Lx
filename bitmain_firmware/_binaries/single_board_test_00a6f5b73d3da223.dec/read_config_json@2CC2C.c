bool __fastcall read_config_json(_DWORD *a1)
{
  char s[256]; // [sp+10h] [bp+8h] BYREF
  int v5[23]; // [sp+110h] [bp+108h] BYREF
  char v6[160]; // [sp+16Ch] [bp+164h] BYREF
  json_t_0 *file; // [sp+20Ch] [bp+204h]
  char *v8; // [sp+210h] [bp+208h]
  bool v9; // [sp+217h] [bp+20Fh]

  v8 = getenv("PCBA_CONFIG_PATH");
  if ( v8 )
    snprintf(s, 0x100u, "%s/%s.json", v8, "Config");
  else
    snprintf(s, 0x100u, "/mnt/card/%s.json", "Config");
  printf("pcba config path = %s\n", s);
  file = (json_t_0 *)json_load_file(s, 0, (json_error_t *)v5);
  if ( file && !*(_DWORD *)file )
  {
    v9 = parse_config(file, (int)a1);
    json_decref(file);
  }
  else
  {
    v9 = 0;
    if ( v5[0] >= 0 )
      printf("%s:%d: %s\n", s, v5[0], v6);
    else
      puts(v6);
  }
  if ( *(_DWORD *)(*a1 + 40) == a1[13] && a1[13] == *(_DWORD *)(*a1 + 28) )
    return v9;
  printf(
    "%s the level number is not equal: [%d %d %d]\n ",
    "read_config_json",
    a1[13],
    *(_DWORD *)(*a1 + 28),
    *(_DWORD *)(*a1 + 40));
  return 0;
}
