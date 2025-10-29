int __fastcall json_dump_file(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r4
  int (__fastcall *v6)(char *, int, int); // r1
  int v7; // r5

  v5 = (FILE *)fopen64(a2, "w");
  if ( !v5 )
    return -1;
  LOWORD(v6) = 14104;
  HIWORD(v6) = (unsigned int)&loc_34FD8 >> 16;
  v7 = json_dump_callback(a1, v6, (int)v5, a3);
  if ( fclose(v5) )
    return -1;
  return v7;
}
