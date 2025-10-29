int __fastcall sub_7D514(const char *a1)
{
  const char *v1; // r4
  char *v2; // r0
  char *v3; // r2
  int v4; // r5
  int v5; // r0
  char *v6; // r2
  int v7; // r0
  char *v8; // r2
  int v9; // r0
  const unsigned __int16 **v10; // r0
  const char *v11; // r3
  const unsigned __int16 *v12; // r2
  int v13; // r1
  int v14; // t1
  int v16; // r4
  char *v17; // r2
  int v18; // r0
  int v19; // r7
  size_t v20; // r0
  __int16 v21; // r12
  int v22; // r0
  __int16 v23; // r12
  int v24; // r0
  __int16 v25; // r12
  const char *v26; // [sp+0h] [bp-14h] BYREF
  const char *v27; // [sp+4h] [bp-10h] BYREF
  __int16 v28; // [sp+8h] [bp-Ch] BYREF
  char v29[2]; // [sp+Ah] [bp-Ah] BYREF

  v1 = a1;
  v2 = strchr(a1, 58);
  if ( v2 )
  {
    v26 = v1;
    v16 = sub_7D424(0, &v26, v2, 3600);
    v17 = strchr(++v26, 58);
    if ( v17 )
    {
      v18 = sub_7D424(v16, &v26, v17, 60);
      ++v26;
      v19 = v18;
      v20 = strlen(v26);
      return sub_7D424(v19, &v26, &v26[v20], 1);
    }
LABEL_19:
    v4 = -1;
    *_errno_location() = 22;
    return v4;
  }
  if ( !strpbrk(v1, "HMS") )
  {
    if ( strlen(v1) == 6 )
    {
      v21 = *(_WORD *)v1;
      v29[0] = 0;
      v28 = v21;
      v27 = (const char *)&v28;
      v22 = sub_7D424(0, &v27, v29, 3600);
      v23 = *((_WORD *)v1 + 1);
      v29[0] = 0;
      v28 = v23;
      v27 = (const char *)&v28;
      v24 = sub_7D424(v22, &v27, v29, 60);
      v25 = *((_WORD *)v1 + 2);
      v29[0] = 0;
      v27 = (const char *)&v28;
      v28 = v25;
      return sub_7D424(v24, &v27, v29, 1);
    }
    goto LABEL_19;
  }
  v27 = v1;
  v3 = strchr(v1, 72);
  if ( v3 )
  {
    v5 = sub_7D424(0, &v27, v3, 3600);
    v1 = ++v27;
    v4 = v5;
  }
  else
  {
    v4 = 0;
  }
  v6 = strchr(v1, 77);
  if ( v6 )
  {
    v7 = sub_7D424(v4, &v27, v6, 60);
    v1 = ++v27;
    v4 = v7;
  }
  v8 = strchr(v1, 83);
  if ( v8 )
  {
    v9 = sub_7D424(v4, &v27, v8, 1);
    v1 = ++v27;
    v4 = v9;
  }
  v10 = _ctype_b_loc();
  v11 = v1;
  v12 = *v10;
  while ( 1 )
  {
    v14 = *(unsigned __int8 *)v11++;
    v13 = v14;
    if ( (v12[v14] & 0x2000) == 0 )
      break;
    v27 = v11;
  }
  if ( v13 )
    goto LABEL_19;
  return v4;
}
