double *__fastcall json_load_file(char *a1, int a2, char *a3)
{
  int v6; // r1
  int v7; // r0
  FILE *v8; // r7
  double *v9; // r6
  const char *v11; // r3
  int *v12; // r0
  char *v13; // r0
  const char *v14; // r3

  jsonp_error_init(a3, a1);
  if ( a1 )
  {
    LOWORD(v6) = 6652;
    HIWORD(v6) = (unsigned int)"sions: %lld" >> 16;
    v7 = fopen64(a1, v6);
    v8 = (FILE *)v7;
    if ( v7 )
    {
      v9 = json_loadf(v7, a2, a3);
      fclose(v8);
    }
    else
    {
      v12 = _errno_location();
      v9 = 0;
      v13 = strerror(*v12);
      LOWORD(v14) = 15732;
      HIWORD(v14) = (unsigned int)"ase/build/godminer-origin_master/http_test.c" >> 16;
      sub_364DC((int)a3, 0, 3, v14, a1, v13);
    }
  }
  else
  {
    LOWORD(v11) = 15684;
    HIWORD(v11) = (unsigned int)"miner_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/http_test.c" >> 16;
    v9 = 0;
    sub_364DC((int)a3, 0, 4, v11);
  }
  return v9;
}
