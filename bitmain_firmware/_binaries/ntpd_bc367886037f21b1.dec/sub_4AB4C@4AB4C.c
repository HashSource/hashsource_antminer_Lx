int __fastcall sub_4AB4C(int a1, _DWORD *a2, int a3)
{
  size_t v3; // r8
  const char *v4; // r11
  int v8; // r10
  int (**v9)(); // r2
  int (*v10)(); // r3
  int (*v11)(); // r9
  const char *v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r12
  int v19; // r3
  int v20; // r8
  unsigned __int8 *v21; // r12
  int v22; // lr
  unsigned __int8 *v23; // r1
  int v24; // r2
  int v25; // r3
  int v27; // r0
  int v28; // r9
  int v29; // r1
  int v30; // r9
  int v31; // r0
  int i; // r3
  int v34; // r10
  _BOOL4 v35; // r10
  int v36; // kr00_4
  int v37; // r2
  int v38; // r1
  _BOOL4 v39; // r3
  int v40; // r0
  __int64 v41; // r2
  int v42; // r1
  int v43; // r10
  int v44; // r10
  int (*v45)(); // [sp+10h] [bp-7Ch]
  int v46; // [sp+10h] [bp-7Ch]
  int v47; // [sp+14h] [bp-78h]
  int v48; // [sp+18h] [bp-74h]
  int v49; // [sp+20h] [bp-6Ch]
  int v50; // [sp+24h] [bp-68h]
  int v51; // [sp+28h] [bp-64h]
  char v52[80]; // [sp+34h] [bp-58h] BYREF

  if ( *(_WORD *)(a3 + 8) == 32 )
  {
    v3 = *(_DWORD *)(a3 + 400);
    v4 = (const char *)(a3 + 300);
  }
  v8 = *(__int16 *)(a3 + 504);
  if ( *(_WORD *)(a3 + 8) != 32 )
  {
    v4 = (const char *)(a2 + 14);
    v3 = a2[46];
  }
  v9 = &off_B36E4[5 * v8];
  v10 = v9[137];
  v11 = v9[138];
  if ( v10 == (int (*)())v3 )
  {
    v13 = (const char *)v9[135];
    if ( v11 == (int (*)())&byte_6
      && *(unsigned __int8 *)(a3 + 300) == *(unsigned __int8 *)v13
      && *(__int16 *)(a3 + 406) <= 4 )
    {
      sub_4A764(a1, a3);
      ++*(_WORD *)(a3 + 406);
      return 0;
    }
    v45 = v9[137];
    v14 = strncmp(v4, v13, v3);
    v10 = v45;
    if ( !v14 )
    {
      sub_49E3C(a1, 4, "* Echoback");
      return 0;
    }
    if ( v45 != off_B36E4[5 * v8 + 139] )
      goto LABEL_8;
  }
  else if ( (int (*)())v3 != v9[139] )
  {
    goto LABEL_7;
  }
  if ( v11 == (int (*)())((char *)&dword_0 + 1) )
  {
    v40 = sscanf(v4, "%4d%2d%2d", a3 + 24, a3 + 28, a3 + 32);
    v41 = *(_QWORD *)(a3 + 24);
    if ( v40 == 3 )
    {
      v42 = *(_DWORD *)(a3 + 32);
      if ( (unsigned int)(v41 - 2000) <= 0x62
        && (unsigned int)(HIDWORD(v41) - 1) <= 0xB
        && (unsigned int)(v42 - 1) <= 0x1E )
      {
        return 0;
      }
    }
    else
    {
      v42 = *(_DWORD *)(a3 + 32);
    }
    sub_6BCB0(v52, 79, "# Invalid date : rc=%d year=%d month=%d day=%d", v40, (_DWORD)v41, HIDWORD(v41), v42);
    goto LABEL_24;
  }
  if ( v11 == (int (*)())((char *)&dword_0 + 3) )
  {
    if ( strncmp(v4, " 0", 2u) && strncmp(v4, "+1", 2u) && strncmp(v4, "-1", 2u) )
      goto LABEL_8;
    if ( sscanf(v4, "%2d", a3 + 52) == 1 && (unsigned int)(*(_DWORD *)(a3 + 52) + 1) <= 2 )
      return 0;
    sub_6BCB0(v52, 79, "# Invalid leap : leapsecond=[%s]", v4);
LABEL_24:
    sub_49E3C(a1, 7, v52);
    *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  if ( v11 != (int (*)())((char *)&dword_0 + 2) )
  {
    if ( v10 != (int (*)())v3 )
    {
LABEL_7:
      if ( v11 == (int (*)())&byte_6 )
      {
        sub_6BCB0(v52, 79, "* Ignore replay : [%s]", v4);
        sub_49E3C(a1, 6, v52);
        return 0;
      }
    }
LABEL_8:
    *(_BYTE *)(a3 + 15) = 1;
    sub_6BCB0(v52, 79, "# Unexpected reply : [%s]", v4);
    sub_49E3C(a1, 7, v52);
    return 0;
  }
  v15 = sscanf(v4, "%2d%2d%2d", a3 + 36, a3 + 40, a3 + 44);
  v16 = *(_DWORD *)(a3 + 36);
  v17 = *(_DWORD *)(a3 + 40);
  if ( v15 == 3 )
  {
    v18 = *(_DWORD *)(a3 + 44);
    if ( v16 <= 23 && v17 <= 59 && v18 <= 60 )
      goto LABEL_31;
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 44);
  }
  sub_6BCB0(v52, 79, "# Invalid time : rc=%d hour=%d minute=%d second=%d", v15, *(_DWORD *)(a3 + 36), v17, v18);
  sub_49E3C(a1, 7, v52);
  v16 = *(_DWORD *)(a3 + 36);
  v17 = *(_DWORD *)(a3 + 40);
  v18 = *(_DWORD *)(a3 + 44);
  *(_BYTE *)(a3 + 15) = 1;
LABEL_31:
  v19 = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(a3 + 4 * v19 + 60) = v18 + 60 * (v17 + 60 * v16);
  *(_DWORD *)(a3 + 56) = v19 + 1;
  if ( v19 != 5 )
    return 0;
  v20 = *(unsigned __int8 *)(a3 + 15);
  if ( *(_BYTE *)(a3 + 15) )
    return 0;
  if ( *(_DWORD *)(a1 + 76) == 100 )
  {
    *(_DWORD *)(a3 + 48) = v20;
    v20 = 1;
    goto LABEL_62;
  }
  v21 = (unsigned __int8 *)(a3 + 488);
  *(_WORD *)(a3 + 494) = v20;
  v22 = *(__int16 *)(a3 + 406);
  v23 = (unsigned __int8 *)(a3 + 488);
  v24 = v20;
  v25 = v20;
  v47 = v20;
  v46 = v20;
  v50 = v20;
  v49 = v20;
  v51 = v20;
  v48 = v20;
  while ( v22 > v25 )
  {
    if ( *v23++ )
      goto LABEL_44;
    v27 = a3 + 8 * v25;
    v28 = *(_DWORD *)(v27 + 448);
    if ( v28 > 0 || !v28 && *(int *)(v27 + 452) > 700000 )
      goto LABEL_44;
    if ( v24 )
    {
      if ( v28 < v48 )
      {
        v43 = *(_DWORD *)(v27 + 452);
LABEL_92:
        v51 = v43;
        v48 = *(_DWORD *)(v27 + 448);
        v46 = v25;
        goto LABEL_43;
      }
      if ( v28 == v48 )
      {
        v43 = *(_DWORD *)(v27 + 452);
        if ( v43 < v51 )
          goto LABEL_92;
      }
      if ( v28 <= v49 )
      {
        if ( v28 != v49 )
          goto LABEL_43;
        v44 = *(_DWORD *)(v27 + 452);
        if ( v44 <= v50 )
          goto LABEL_43;
      }
      else
      {
        v44 = *(_DWORD *)(v27 + 452);
      }
      v50 = v44;
      v49 = *(_DWORD *)(v27 + 448);
      v47 = v25;
    }
    else
    {
      v48 = *(_DWORD *)(v27 + 448);
      v49 = v48;
      v50 = *(_DWORD *)(v27 + 452);
      v47 = v25;
      v46 = v25;
      v51 = v50;
    }
LABEL_43:
    v24 = (__int16)(v24 + 1);
    *(_WORD *)(a3 + 494) = v24;
LABEL_44:
    if ( ++v25 == 5 )
      break;
  }
  if ( v24 <= 1 )
    goto LABEL_90;
  v29 = 0;
  v30 = a3;
  v31 = 0;
  for ( i = 0; i != 5; ++i )
  {
    if ( v22 <= i )
      break;
    if ( !*v21++ )
    {
      v34 = *(_DWORD *)(v30 + 448);
      if ( v34 <= 0 && (v34 || *(int *)(v30 + 452) <= 700000) )
      {
        if ( v24 == 2 )
          goto LABEL_57;
        if ( v47 != i )
        {
          v35 = v24 > 3;
          if ( v46 != i )
            v35 = 0;
          if ( !v35 )
          {
LABEL_57:
            ++v29;
            v31 += *(_DWORD *)(v30 + 452);
          }
        }
      }
    }
    v30 += 8;
  }
  if ( v29
    && (v36 = sub_8B4A0(v31, v29) * (*(_DWORD *)(a1 + 76) - 100), *(_DWORD *)(a3 + 48) = v36 / 100000, v36 / 100000 >= 0) )
  {
    v20 = 1;
  }
  else
  {
LABEL_90:
    *(_DWORD *)(a3 + 48) = 0;
  }
LABEL_62:
  v37 = *(_DWORD *)(a3 + 72);
  v38 = *(_DWORD *)(a3 + 68);
  v39 = v37 - 15 <= v38;
  if ( v37 < v38 )
    v39 = 0;
  if ( v39 && v37 + 1 == *(_DWORD *)(a3 + 76) && v37 + 2 == *(_DWORD *)(a3 + 80) )
  {
    sub_4A86C(a1, a2, (_DWORD *)a3);
    if ( *(_DWORD *)(a1 + 76) != 100 )
    {
      if ( v20 )
      {
        sub_6BCB0(
          v52,
          80,
          "* Delay adjustment : %d mSec. ( valid=%hd/%d )",
          *(_DWORD *)(a3 + 48),
          *(__int16 *)(a3 + 494),
          5);
        sub_49E3C(a1, 4, v52);
      }
      else
      {
        sub_6BCB0(v52, 80, "* Delay adjustment : None ( valid=%hd/%d )", *(__int16 *)(a3 + 494), 5);
        sub_49E3C(a1, 7, v52);
      }
    }
  }
  return 0;
}
