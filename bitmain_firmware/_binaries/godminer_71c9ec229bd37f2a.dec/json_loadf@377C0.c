double *__fastcall json_loadf(int a1, int a2, char *a3)
{
  char *v3; // r12
  char *v4; // r3
  char *v8; // r1
  int v9; // r3
  double *v10; // r4
  const char *v12; // r3
  _DWORD v13[2]; // [sp+0h] [bp-4Ch] BYREF
  char v14; // [sp+8h] [bp-44h]
  int v15; // [sp+10h] [bp-3Ch]
  int v16; // [sp+14h] [bp-38h]
  int v17; // [sp+18h] [bp-34h]
  int v18; // [sp+1Ch] [bp-30h]
  int v19; // [sp+24h] [bp-28h]
  _DWORD v20[9]; // [sp+28h] [bp-24h] BYREF

  LOWORD(v3) = 15712;
  LOWORD(v4) = 15720;
  if ( stdin == a1 )
  {
    HIWORD(v3) = (unsigned int)"s/buildroot/tmp/release/build/godminer-origin_master/http_test.c" >> 16;
    v8 = v3;
  }
  else
  {
    HIWORD(v4) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/http_test.c" >> 16;
    v8 = v4;
  }
  jsonp_error_init(a3, v8);
  if ( a1 )
  {
    LOWORD(v9) = 9296;
    v10 = 0;
    HIWORD(v9) = (unsigned int)&loc_236BC >> 16;
    v13[1] = a1;
    v13[0] = v9;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v18 = 0;
    v19 = 0;
    v17 = 1;
    if ( !strbuffer_init(v20) )
    {
      v20[3] = a2;
      v20[5] = -1;
      v10 = sub_37520(v13, a2, (int)a3);
      sub_3660C((int)v13);
    }
  }
  else
  {
    LOWORD(v12) = 15684;
    HIWORD(v12) = (unsigned int)"miner_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/http_test.c" >> 16;
    v10 = 0;
    sub_364DC((int)a3, 0, 4, v12);
  }
  return v10;
}
