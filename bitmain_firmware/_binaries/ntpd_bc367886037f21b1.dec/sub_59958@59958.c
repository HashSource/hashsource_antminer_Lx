__int16 *__fastcall sub_59958(int a1, int a2)
{
  int v3; // r12
  int v4; // r0
  int v5; // r0
  int v6; // r0
  const char *v7; // r0
  int *v8; // r9
  _QWORD *v9; // r6
  char *v10; // r12
  char *v11; // r2
  _QWORD *v12; // r3
  char v13; // t1
  int v14; // r7
  const char *v15; // r6
  const char *v16; // r6
  int v17; // r7
  double v18; // r0
  int v19; // r2
  int v20; // r5
  double v21; // d0
  double v22; // d8
  __int64 v23; // r6
  int v24; // r12
  int v25; // r3
  int v26; // lr
  int v27; // r1
  int v28; // r2
  size_t v29; // r0
  int v30; // r2
  int v31; // r1
  int v32; // r0
  int v33; // r2
  double v34; // r0
  double v35; // d0
  int v36; // r4
  int v37; // r4
  __int64 v38; // r0
  int v39; // r12
  __int16 *result; // r0
  int v41; // r5
  int v42; // r4
  __int64 v43; // r2
  __int64 v44; // r6
  __int64 v45; // r4
  int v46; // r2
  int v47; // r3
  int v48; // s16
  int v49; // s17
  int v50; // r2
  int v51; // r6
  int v52; // r3
  int v53; // r7
  int v54; // r2
  char v55; // r3
  bool v56; // zf
  int v57; // r0
  int v58; // r6
  const char *v59; // r4
  bool v60; // zf
  int v61; // r0
  int v62; // r2
  char v63; // r3
  int v64; // r0
  int v65; // r5
  int v66; // r1
  char *v67; // r0
  int v68; // [sp+0h] [bp-1D4h]
  int v69; // [sp+0h] [bp-1D4h]
  int v70; // [sp+0h] [bp-1D4h]
  int v71; // [sp+0h] [bp-1D4h]
  int v72; // [sp+0h] [bp-1D4h]
  int v73; // [sp+0h] [bp-1D4h]
  int v74; // [sp+0h] [bp-1D4h]
  int v75; // [sp+0h] [bp-1D4h]
  _DWORD v76[5]; // [sp+18h] [bp-1BCh] BYREF
  int v77; // [sp+2Ch] [bp-1A8h]
  int v78; // [sp+30h] [bp-1A4h]
  _BYTE v79[24]; // [sp+34h] [bp-1A0h] BYREF
  int v80; // [sp+4Ch] [bp-188h]
  __int64 v81; // [sp+50h] [bp-184h] BYREF
  _DWORD v82[5]; // [sp+60h] [bp-174h] BYREF
  int v83; // [sp+74h] [bp-160h]
  int v84; // [sp+78h] [bp-15Ch]
  unsigned int v85; // [sp+7Ch] [bp-158h]
  __int64 v86; // [sp+80h] [bp-154h]
  _DWORD v87[5]; // [sp+90h] [bp-144h] BYREF
  int v88; // [sp+A4h] [bp-130h]
  int v89; // [sp+A8h] [bp-12Ch]
  __int64 v90; // [sp+ACh] [bp-128h]
  __int64 v91; // [sp+B4h] [bp-120h]
  __int64 v92; // [sp+C8h] [bp-10Ch]
  unsigned int v93; // [sp+D0h] [bp-104h]
  int v94; // [sp+D4h] [bp-100h]
  int v95; // [sp+D8h] [bp-FCh]
  int v96; // [sp+DCh] [bp-F8h]
  const char *v97; // [sp+E0h] [bp-F4h]
  const char *v98; // [sp+E4h] [bp-F0h]
  const char *v99; // [sp+E8h] [bp-ECh]
  void *v100; // [sp+ECh] [bp-E8h]
  int v101; // [sp+F0h] [bp-E4h]
  int v102; // [sp+F4h] [bp-E0h]
  _WORD v103[4]; // [sp+F8h] [bp-DCh] BYREF
  char v104; // [sp+100h] [bp-D4h]
  char v105; // [sp+103h] [bp-D1h] BYREF
  int v106; // [sp+104h] [bp-D0h]
  __int64 v107; // [sp+108h] [bp-CCh]
  int v108; // [sp+110h] [bp-C4h]
  int v109; // [sp+114h] [bp-C0h]
  int v110; // [sp+118h] [bp-BCh]
  char v111[4]; // [sp+120h] [bp-B4h] BYREF
  unsigned int v112; // [sp+124h] [bp-B0h]
  unsigned __int8 v113; // [sp+129h] [bp-ABh]
  unsigned __int8 v114; // [sp+12Ah] [bp-AAh]
  unsigned __int16 v115; // [sp+12Ch] [bp-A8h]
  unsigned __int16 v116; // [sp+12Eh] [bp-A6h]
  unsigned __int16 v117; // [sp+130h] [bp-A4h]
  int v118; // [sp+134h] [bp-A0h]
  int v119; // [sp+138h] [bp-9Ch]
  int fd[7]; // [sp+140h] [bp-94h] BYREF
  char haystack[4]; // [sp+15Ch] [bp-78h] BYREF
  char v122; // [sp+160h] [bp-74h]
  char v123[4]; // [sp+164h] [bp-70h] BYREF
  char v124; // [sp+168h] [bp-6Ch]
  _BYTE v125[32]; // [sp+16Ch] [bp-68h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 89);
  v100 = &_stack_chk_guard;
  _sprintf_chk(v125, 1, 32, "%s%d", "/dev/tsyncpci", v3);
  _printf_chk(1, "Polling device number %d...\n", *(unsigned __int8 *)(a2 + 89));
  v4 = open64(v125, 2048);
  fd[0] = v4;
  if ( v4 < 0 )
    return (__int16 *)sub_64A18(3, "Couldn't open device");
  if ( ioctl(v4, 0xC01C7400, fd) < 0 )
  {
    sub_64A18(3, "Couldn't initialize device");
    return (__int16 *)close(fd[0]);
  }
  memset(&v87[1], 0, 12);
  v87[4] = 16;
  v88 = 0;
  v89 = 0;
  v87[0] = 620756993;
  v90 = 0;
  v91 = 0;
  v5 = ioctl(fd[0], 0xC020741A, v87);
  memset(&v82[1], 0, 12);
  v83 = 0;
  v84 = 0;
  v82[0] = 587268097;
  v82[4] = 12;
  v85 = 0;
  v86 = 0;
  v98 = (const char *)v5;
  v6 = ioctl(fd[0], 0xC020741A, v82);
  memset(&v76[1], 0, 12);
  v76[4] = 36;
  v77 = 0;
  v78 = 0;
  v76[0] = 587661313;
  v80 = 0;
  memset(v79, 0, sizeof(v79));
  v81 = 0;
  v99 = (const char *)v6;
  v7 = (const char *)ioctl(fd[0], 0xC020741A, v76);
  v8 = *(int **)(a2 + 84);
  v95 = *v8;
  v97 = v7;
  v96 = ioctl(fd[0], 0xC0207419, v111);
  close(fd[0]);
  if ( (((unsigned int)v98 | (unsigned int)v99) & 0x80000000) != 0
    || (((unsigned int)v97 | v96) & 0x80000000) != 0
    || v89
    || v84
    || v78
    || v88 != 8
    || v83 != 4
    || v77 != 28 )
  {
    return sub_3918C((__int16 *)a2, 3);
  }
  v9 = &v79[4];
  v10 = &v105;
  *(_DWORD *)v123 = HIDWORD(v90);
  *(_DWORD *)haystack = v90;
  v93 = bswap32(v85);
  v122 = 0;
  v124 = 0;
  do
  {
    v11 = v10;
    v12 = v9;
    do
    {
      v13 = *((_BYTE *)v12 - 1);
      v12 = (_QWORD *)((char *)v12 - 1);
      *++v11 = v13;
    }
    while ( (_QWORD *)((char *)v9 - 4) != v12 );
    v9 = (_QWORD *)((char *)v9 + 4);
    v10 += 4;
  }
  while ( (__int64 *)((char *)&v81 + 4) != v9 );
  v14 = 0;
  v15 = "gps";
  do
  {
    if ( strstr(haystack, v15) )
      break;
    ++v14;
    v15 = (&off_B3B04)[2 * v14];
  }
  while ( v15 );
  v99 = v15;
  v96 = v14;
  v16 = "gps";
  v17 = 0;
  do
  {
    if ( strstr(v123, v16) )
      break;
    ++v17;
    v16 = (&off_B3B04)[2 * v17];
  }
  while ( v16 );
  v98 = v16;
  v94 = v17;
  v20 = v117;
  v21 = (double)v119 / 1000000.0;
  v22 = (double)v112 / 1000000.0;
  LODWORD(v18) = 32;
  ldexp(v18, v19);
  if ( v21 < 0.0 )
    v23 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v21), HIDWORD(COERCE_UNSIGNED_INT64(-v21)));
  else
    v23 = sub_8BBA8(LODWORD(v21), HIDWORD(v21));
  v24 = v114;
  v25 = v115;
  v26 = v8[194];
  v27 = v113;
  v28 = v118 - 2085978496 + HIDWORD(v23);
  v8[59] = v23;
  v8[58] = v28;
  v8[194] = v26 + 1;
  v97 = (const char *)(v8 + 14);
  _sprintf_chk(v8 + 14, 1, 128, "%03d %02d:%02d:%02.6f", v25, v24, v27, v22);
  v29 = strlen((const char *)v8 + 56);
  v103[2] = 257;
  v30 = v114;
  v8[48] = v115;
  v31 = v113;
  v8[49] = v30;
  v8[51] = (int)v22;
  LOWORD(v30) = v116;
  v8[50] = v31;
  v103[1] = 1;
  v103[0] = v30;
  v103[3] = 0;
  v104 = 0;
  v8[46] = v29;
  v8[52] = (int)((v22 - (double)(int)v22) * 1000000000.0);
  v32 = sub_62E24(v103);
  v33 = v8[50];
  HIDWORD(v34) = v8[51];
  v35 = (double)v8[52] / 1000000000.0;
  v36 = HIDWORD(v34) + 60 * (v33 + 60 * (v8[49] + 24 * (v8[48] - 1)));
  v8[53] = v32;
  v37 = v36 + v32;
  LODWORD(v34) = 32;
  ldexp(v34, v33);
  if ( v35 < 0.0 )
    v38 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v35), HIDWORD(COERCE_UNSIGNED_INT64(-v35)));
  else
    v38 = sub_8BBA8(LODWORD(v35), HIDWORD(v35));
  v39 = v8[59];
  v102 = v38;
  v101 = v37 + HIDWORD(v38);
  v68 = v39;
  sub_39754(v8, v37 + HIDWORD(v38), v38);
  if ( v20 == 4 )
  {
    v41 = v110
        - 86401
        + 86400 * HIDWORD(v107)
        + 3600 * v108
        + 60 * v109
        + 31622400 * ((unsigned int)(v107 - 1969) >> 2)
        + 31536000 * (v107 - 1970 - ((unsigned int)(v107 - 1969) >> 2));
    v42 = 4 * sub_8BAC8(v41, 0, 126230400, 0, v68);
    sub_8BAC8(v41, 0, 126230400, 0, v69);
    v44 = v43;
    if ( v43 > 31535999 )
    {
      v92 = v43 - 31536000;
      if ( v43 - 31536000 <= 31535999 )
      {
        ++v42;
        v44 = v92;
      }
      else
      {
        v92 = v43 - 63072000;
        if ( v43 - 63072000 <= 31622399 )
        {
          v42 += 2;
          v44 = v92;
        }
        else
        {
          v42 += 3;
          v44 = v43 - 94694400;
        }
      }
    }
    LODWORD(v45) = v42 + 1970;
    HIDWORD(v45) = sub_8BAC8(v44, HIDWORD(v44), 86400, 0, v70) + 1;
    sub_8BAC8(v44, HIDWORD(v44), &loc_15180, 0, v71);
    v48 = v46;
    v49 = v47;
    sub_8BAC8(v46, v47, 3600, 0, v72);
    v107 = v45;
    v51 = v50;
    v53 = v52;
    v108 = sub_8BAC8(v48, v49, 3600, 0, v73);
    v109 = sub_8BAC8(v51, v53, 60, 0, v74);
    sub_8BAC8(v51, v53, 60, 0, v75);
    v110 = v54;
    if ( v93 - 1 > 1 && __PAIR64__(v115, v116) == v45 )
    {
      v55 = v106;
      if ( v106 == 1 )
        goto LABEL_40;
      if ( v106 == -1 )
      {
        *((_BYTE *)v8 + 40) = 2;
        goto LABEL_41;
      }
    }
    v55 = 0;
LABEL_40:
    *((_BYTE *)v8 + 40) = v55;
LABEL_41:
    *(_BYTE *)(a2 + 91) = *((_BYTE *)v8 + 40);
    sub_3918C((__int16 *)a2, 0);
    v56 = v98 == 0;
    if ( v98 )
      v56 = v99 == 0;
    if ( v56 )
    {
      v61 = v95;
      v62 = *(_DWORD *)(v95 + 4);
      *(_DWORD *)(a2 + 68) |= *(_DWORD *)v95;
      v8[191] = v62;
      *(_DWORD *)(a2 + 112) = v62;
      v63 = *(_BYTE *)(v61 + 8);
      *((_BYTE *)v8 + 760) = v63;
      *(_BYTE *)(a2 + 93) = v63;
    }
    else
    {
      v57 = strcmp((&off_B3B04)[2 * v96 + 1], "LOCL");
      v58 = *(_DWORD *)(a2 + 68);
      v59 = (&off_B3B04)[2 * v94 + 1];
      if ( v57 && strcmp((&off_B3B04)[2 * v94 + 1], "LOCL") )
      {
        v66 = v95;
        v67 = (char *)(v95 + 4);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)v95 | v58;
        *(_BYTE *)(v66 + 8) = 0;
        strncpy(v67, v59, 4u);
        *((_BYTE *)v8 + 760) = 0;
        *(_BYTE *)(a2 + 93) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 68) = v58 & 0xFFFFFFDF;
        *((_BYTE *)v8 + 760) = 16;
        *(_BYTE *)(a2 + 93) = 16;
        v60 = sys_peer == a2;
        if ( sys_peer != a2 )
          v60 = sys_peer == 0;
        if ( !v60 )
        {
          v64 = sys_peer + 16;
          v65 = v95;
          *(_BYTE *)(v95 + 8) = *(_BYTE *)(sys_peer + 93);
          *(_DWORD *)(v65 + 4) = sub_60478(v64);
        }
      }
      strncpy((char *)v8 + 764, v59, 4u);
      *(_DWORD *)(a2 + 112) = v8[191];
    }
    goto LABEL_27;
  }
  v8[191] = *(_DWORD *)"LOCL";
  *(_DWORD *)(a2 + 112) = v8[191];
  *((_BYTE *)v8 + 40) = 3;
  *(_BYTE *)(a2 + 91) = 3;
LABEL_27:
  if ( v8[54] == v8[55] )
    return sub_3918C((__int16 *)a2, 1);
  sub_41CA4(a2 + 16, v97);
  result = (__int16 *)sub_39A1C(a2);
  ++v8[194];
  return result;
}
