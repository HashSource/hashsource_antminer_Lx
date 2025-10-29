size_t __fastcall get_core_works(int a1, const char *a2, int a3, size_t a4)
{
  char v10[92]; // [sp+14h] [bp+14h] BYREF
  char v11[160]; // [sp+70h] [bp+70h] BYREF
  const json_t *v12; // [sp+110h] [bp+110h]
  json_t *v13; // [sp+114h] [bp+114h]
  const json_t *file; // [sp+118h] [bp+118h]
  size_t i; // [sp+11Ch] [bp+11Ch]

  file = (const json_t *)json_load_file(a2, 0, (json_error_t *)v10);
  if ( file && !*(_DWORD *)file )
  {
    v13 = json_object_get(file, "works");
    if ( v13 && *(_DWORD *)v13 == 1 )
    {
      if ( json_array_size(v13) < a4 )
      {
        printf("%s malloc failed!", "get_core_works");
        printf("%s: file_path %s, actual pattern number is less than test pattern_num!\n", "get_core_works", a2);
        return 0;
      }
      for ( i = 0; i < a4; ++i )
      {
        v12 = (const json_t *)json_array_get(v13, i);
        if ( !v12 )
          break;
        if ( *(_DWORD *)v12 || !get_work(a1, v12, a3 + 104 * i, i) )
        {
          printf("file_path %s, get_work error!\n", a2);
          return i;
        }
      }
    }
    return a4;
  }
  puts(v11);
  return 0;
}
