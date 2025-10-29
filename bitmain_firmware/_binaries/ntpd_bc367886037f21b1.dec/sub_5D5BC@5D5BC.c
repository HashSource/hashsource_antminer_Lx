Elf32_Dyn **__fastcall sub_5D5BC(Elf32_Dyn **result)
{
  Elf32_Dyn *v1; // r1
  __int32 d_tag; // r5
  int v3; // r9
  int v4; // r3
  int *v5; // r11
  int v6; // r4
  int v7; // lr
  int *v8; // r6
  int v9; // t1
  int v10; // r1
  int v11; // r2
  bool v12; // zf
  int v13; // r8
  _DWORD *v14; // r6
  int v15; // r2
  int v16; // r12
  int v17; // r2
  int v18; // r0
  int v19; // r1
  int v20; // r7
  _BYTE *v21; // r0
  int v22; // r2
  int v23; // r2
  int v24; // r1
  const char *v25; // r6
  __int32 v26; // r8
  int v27; // r7
  unsigned int v28; // r4
  size_t v29; // r0
  int v30; // t1
  __int32 v31; // r2
  int v32; // r12
  __int32 v33; // r10
  int v34; // r8
  const char *v35; // r7
  unsigned int v36; // r6
  size_t v37; // r0
  int v38; // t1
  int v39; // r3
  int v40; // r9
  int v41; // r7
  unsigned int v42; // r3
  __int32 v43; // r10
  int v44; // r12
  int v45; // lr
  int v46; // r0
  int v47; // r1
  __int32 v48; // r2
  int v49; // r1
  unsigned int v50; // r0
  int v51; // r1
  int v52; // r2
  bool v53; // cf
  int v54; // r2
  int v55; // lr
  int v56; // r4
  int v57; // lr
  _BYTE *v58; // r3
  char v59; // t1
  char v60; // r2
  unsigned int v61; // r3
  int v62; // r8
  int v63; // r1
  int i; // r1
  int v65; // t1
  char v66; // r3
  char *v67; // r2
  int v68; // r2
  int v69; // r2
  int v70; // [sp+14h] [bp-90h]
  Elf32_Dyn *v71; // [sp+24h] [bp-80h]
  Elf32_Dyn **v72; // [sp+28h] [bp-7Ch]
  int v73; // [sp+30h] [bp-74h]
  int v74; // [sp+34h] [bp-70h]
  char s[12]; // [sp+40h] [bp-64h] BYREF
  char v76[80]; // [sp+4Ch] [bp-58h] BYREF

  v1 = result[21];
  d_tag = v1->d_tag;
  v72 = result;
  v71 = v1;
  v3 = *(_DWORD *)(v1->d_tag + 1112);
  v4 = *(_DWORD *)(v1->d_tag + 920);
  if ( v3 <= 8 )
  {
    *(_DWORD *)(d_tag + 920) = v4 | 1;
    return result;
  }
  v5 = (int *)(d_tag + 1064);
  v6 = 0;
  v7 = 0;
  v8 = (int *)(d_tag + 1064);
  *(_DWORD *)(d_tag + 1120) = 0;
  do
  {
    v9 = *v8++;
    v10 = 8;
    result = 0;
    v11 = v9 ^ v8[4];
    do
    {
      v12 = (v11 & 1) == 0;
      v11 >>= 1;
      if ( v12 )
        result = (Elf32_Dyn **)((char *)result + 1);
      else
        result = (Elf32_Dyn **)((char *)result - 1);
      --v10;
    }
    while ( v10 );
    ++v6;
    v7 += (int)result;
    *(_DWORD *)(d_tag + 1120) = v7;
  }
  while ( v6 != 5 && v6 != v3 - 5 );
  if ( v7 > 27 )
  {
    v13 = 0;
    v14 = (_DWORD *)(d_tag + 1064);
    v15 = *(_DWORD *)(d_tag + 1076) & 0xF;
    v16 = -1;
    *(_DWORD *)(d_tag + 1124) = 0;
    v73 = 0;
    while ( 1 )
    {
      v17 = v15 ^ 0x63;
      v18 = 8;
      v19 = 0;
      do
      {
        v12 = (v17 & 1) == 0;
        v17 >>= 1;
        if ( v12 )
          ++v19;
        else
          --v19;
        --v18;
      }
      while ( v18 );
      v20 = 0;
      v21 = v14;
      if ( v3 > v16 + 9 )
        v6 = v14[8];
      v22 = 16 * v14[4];
      if ( v3 > v16 + 9 )
        v6 &= 0xFu;
      v22 = (unsigned __int8)v22;
      if ( v3 > v16 + 9 )
        v22 = (unsigned __int8)v22 | v6;
      v6 = 8;
      v23 = v22 ^ 0x63;
      do
      {
        v12 = (v23 & 1) == 0;
        v23 >>= 1;
        if ( v12 )
          ++v20;
        else
          --v20;
        --v6;
      }
      while ( v6 );
      v24 = v19 + v20;
      if ( v24 > v13 )
        v73 = v16;
      ++v16;
      if ( v24 > v13 )
      {
        *(_DWORD *)(d_tag + 1124) = v24;
        v13 = v24;
      }
      if ( v16 == 2 )
        break;
      ++v14;
      v15 = (unsigned __int8)(16 * *v21) | v14[3] & 0xF;
    }
    v31 = d_tag + 4 * v73;
    v32 = (unsigned __int8)*(_DWORD *)(v31 + 1080) >> 4;
    if ( (unsigned int)(v32 - 2) <= 7 && v3 > v73 + 9 )
    {
      v68 = (unsigned __int8)*(_DWORD *)(v31 + 1100) >> 4;
      if ( v32 != v68 )
        v68 = 0;
      v74 = v68;
    }
    else
    {
      v74 = 0;
    }
    v70 = v13;
    v33 = d_tag + 1060;
    v34 = 0;
    v35 = v76;
    sub_6BCB0(v76, 80, "chuA %04x %4.0f %2d %2d %2d %2d %1d ", v4, *(double *)(d_tag + 1136), v3, v7, v73, v70, v74);
    v36 = 80;
    do
    {
      v37 = strlen(v35);
      if ( v37 + 1 > v36 )
      {
        sub_64A18(3, "chu_a() fatal out buffer");
        exit(1);
      }
      v36 -= v37;
      v35 += v37;
      ++v34;
      v38 = *(_DWORD *)(v33 + 4);
      v33 += 4;
      sub_6BCB0(v35, v36, "%02x", v38);
    }
    while ( v3 != v34 );
    if ( (v71[96].d_tag & 8) != 0 )
      sub_41CA4((int)(v72 + 4), v76);
    v39 = *(_DWORD *)(d_tag + 920);
    if ( *(int *)(d_tag + 1124) > 7 )
    {
      if ( v74 )
      {
        *(_DWORD *)(d_tag + 920) = v39 | 0x100;
        v40 = v74 + 30;
        v71[25].d_un.d_val = v74 + 30;
        *(_DWORD *)(d_tag + 912) = v74 + 30;
        if ( v73 == -1 )
        {
          v40 = *(_DWORD *)(d_tag + 904);
          v41 = 0;
          v42 = *(_DWORD *)(d_tag + 908);
        }
        else
        {
          v41 = v73;
          v42 = 0;
          if ( v73 )
            v41 = 1;
        }
        v43 = d_tag + 8 * v41;
        do
        {
          if ( v41 - 9 > v73 )
            break;
          v44 = *(_DWORD *)(d_tag + 1108);
          v45 = 0;
          ++v41;
          v46 = *(_DWORD *)(v43 + 320);
          v47 = *(_DWORD *)(v43 + 324);
          v43 += 8;
          v48 = d_tag + 8 * v44;
          *(_DWORD *)(v48 + 408) = v46;
          *(_DWORD *)(v48 + 412) = v47;
          v49 = v46;
          v50 = *(_DWORD *)(v48 + 412);
          v51 = v49 - v40;
          if ( v50 < v42 )
            --v51;
          *(_DWORD *)(v48 + 412) = v50 - v42;
          *(_DWORD *)(v48 + 408) = v51;
          v52 = *(_DWORD *)(d_tag + 908);
          v53 = __CFADD__(v52, v42);
          v42 += v52;
          v54 = *(_DWORD *)(d_tag + 904);
          if ( v53 )
            v45 = 1;
          if ( v44 <= 58 )
            *(_DWORD *)(d_tag + 1108) = v44 + 1;
          v40 += v45 + v54;
        }
        while ( v34 > v41 );
        v55 = *(_DWORD *)(d_tag + 1116);
        v56 = 0;
        if ( v55 < v74 )
        {
          v57 = v74 - v55;
          do
          {
            v58 = (_BYTE *)(d_tag + 159);
            do
            {
              v59 = *--v58;
              v60 = v58[160];
              v58[1] = v59;
              v58[161] = v60;
            }
            while ( v58 != (_BYTE *)(d_tag + 144) );
            ++v56;
            *(_BYTE *)(d_tag + 304) = 0;
            *(_BYTE *)(d_tag + 144) = 0;
          }
          while ( v57 != v56 );
          *(_DWORD *)(d_tag + 1116) = v74;
        }
      }
      else
      {
        *(_DWORD *)(d_tag + 920) = v39 | 0x20;
      }
      v61 = -2 * v73;
      v62 = -2 * v73 + 2 * v34;
      do
      {
        if ( v61 <= 0x12 )
        {
          v63 = (unsigned __int8)*v5 >> 4;
          ++*(_BYTE *)(d_tag + 16 * v61 + (*v5 & 0xF));
          ++*(_BYTE *)(d_tag + 16 * (v61 + 1) + v63);
        }
        v61 += 2;
        ++v5;
      }
      while ( v61 != v62 );
      ++*(_DWORD *)(d_tag + 1128);
    }
    else
    {
      *(_DWORD *)(d_tag + 920) = v39 | 0x10;
    }
  }
  else
  {
    if ( v7 >= -27 )
    {
      *(_DWORD *)(d_tag + 920) = v4 | 2;
      return result;
    }
    v25 = v76;
    sub_6BCB0(v76, 80, "chuB %04x %4.0f %2d %2d ", v4, *(double *)(d_tag + 1136), v3, -v7);
    v26 = d_tag + 1060;
    v27 = 0;
    v28 = 80;
    do
    {
      v29 = strlen(v25);
      if ( v29 + 1 > v28 )
      {
        sub_64A18(3, "chu_b() fatal out buffer");
        exit(1);
      }
      v28 -= v29;
      v25 += v29;
      ++v27;
      v30 = *(_DWORD *)(v26 + 4);
      v26 += 4;
      sub_6BCB0(v25, v28, "%02x", v30);
    }
    while ( v3 != v27 );
    if ( (v71[96].d_tag & 8) != 0 )
      sub_41CA4((int)(v72 + 4), v76);
    if ( *(int *)(d_tag + 1120) < -39 )
    {
      for ( i = 0; i != 10; i += 2 )
      {
        v65 = *v5++;
        v66 = a0123456789abcd_0[(unsigned __int8)v65 >> 4];
        s[i] = a0123456789abcd_0[v65 & 0xF];
        v67 = &s[i];
        v67[1] = v66;
      }
      if ( sscanf(s, "%1x%1d%4d%2d%2x", d_tag + 1148, d_tag + 1152, &v71[23].d_un, d_tag + 1156, d_tag + 1160) == 5 )
      {
        v69 = *(_DWORD *)(d_tag + 1148);
        *(_DWORD *)(d_tag + 920) |= 0x200u;
        if ( (v69 & 8) != 0 )
          *(_DWORD *)(d_tag + 1152) = -*(_DWORD *)(d_tag + 1152);
      }
      else
      {
        *(_DWORD *)(d_tag + 920) |= 8u;
      }
    }
    else
    {
      *(_DWORD *)(d_tag + 920) |= 4u;
    }
  }
  result = &GLOBAL_OFFSET_TABLE_;
  if ( v72[179] != (Elf32_Dyn *)current_time )
    v72[180] = (Elf32_Dyn *)(current_time + 10);
  return result;
}
