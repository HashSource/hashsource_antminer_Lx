double *__fastcall json_vpack_ex(char *a1, int a2, _BYTE *a3, int *a4)
{
  double *v8; // r4
  char *v10; // r1
  char *v11; // r3
  char *v12; // r3
  char *v13; // r1
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int *v17; // [sp+Ch] [bp-58h] BYREF
  int v18[9]; // [sp+10h] [bp-54h] BYREF
  int v19; // [sp+34h] [bp-30h]
  int v20; // [sp+38h] [bp-2Ch]
  int v21; // [sp+3Ch] [bp-28h]
  int v22; // [sp+40h] [bp-24h]
  int v23; // [sp+44h] [bp-20h]
  char *v24; // [sp+48h] [bp-1Ch]
  int v25; // [sp+4Ch] [bp-18h]
  int v26; // [sp+50h] [bp-14h]
  int v27; // [sp+54h] [bp-10h]
  int v28; // [sp+58h] [bp-Ch]
  int v29; // [sp+5Ch] [bp-8h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    v18[0] = (int)a3;
    v18[1] = (int)a3;
    memset(&v18[2], 0, 28);
    v20 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v26 = 1;
    v24 = a1;
    v25 = a2;
    sub_36B80(v18);
    v17 = a4;
    v8 = sub_37C00(v18, &v17);
    if ( v8 )
    {
      sub_36B80(v18);
      if ( (_BYTE)v19 )
      {
        if ( *((_DWORD *)v8 + 1) != -1 )
        {
          v14 = (unsigned int *)v8 + 1;
          __dmb(0xBu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            json_delete(v8);
        }
        LOWORD(v12) = 7484;
        LOWORD(v13) = 6660;
        HIWORD(v12) = (unsigned int)"fy" >> 16;
        HIWORD(v13) = (unsigned int)"ns/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_ckb/frontend_ckb.c" >> 16;
        v8 = 0;
        sub_36B20(v18, v13, 9, v12);
      }
    }
    return v8;
  }
  else
  {
    LOWORD(v10) = 6660;
    HIWORD(v10) = (unsigned int)"ns/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_ckb/frontend_ckb.c" >> 16;
    jsonp_error_init(a1, v10);
    LOWORD(v11) = 7456;
    HIWORD(v11) = (unsigned int)" to header_bin in parse_notify" >> 16;
    jsonp_error_set((int)a1, -1, -1, 0, 4, v11);
    return 0;
  }
}
