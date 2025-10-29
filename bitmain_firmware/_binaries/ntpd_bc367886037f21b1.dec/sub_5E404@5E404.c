__int16 *__fastcall sub_5E404(int a1, int a2)
{
  int *v2; // r7
  __int16 *result; // r0
  int v4; // r6
  int v5; // r5
  int v6; // r4
  char *v7; // r9
  int v8; // r8
  int v9; // lr
  int v10; // r7
  int v11; // r10
  int v12; // r0
  unsigned __int8 *v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r12
  int v17; // r6
  int v18; // t1
  int v19; // t1
  int v20; // r3
  bool v21; // cc
  int v22; // r5
  double v23; // d8
  int v24; // r3
  int v25; // r12
  int v26; // r2
  int v27; // r3
  size_t v28; // r0
  int v29; // r3
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r12
  int v34; // r2
  int v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r3
  unsigned int v40; // [sp+4Ch] [bp-30h]
  int *v41; // [sp+50h] [bp-2Ch]
  int *v42; // [sp+54h] [bp-28h]
  int v43; // [sp+58h] [bp-24h]
  int v44; // [sp+60h] [bp-1Ch] BYREF
  unsigned int v45; // [sp+64h] [bp-18h] BYREF
  char s[12]; // [sp+68h] [bp-14h] BYREF

  v2 = *(int **)(a2 + 84);
  result = (__int16 *)&off_3C;
  v4 = *v2;
  v5 = (*(_DWORD *)(*v2 + 912) + 1) % 60;
  *(_DWORD *)(*v2 + 912) = v5;
  if ( v5 )
    return result;
  v6 = 0;
  sub_5D5BC((Elf32_Dyn **)a2);
  v7 = (char *)&v45 + 3;
  v41 = *(int **)(a2 + 84);
  v8 = *v41;
  v42 = v2;
  v9 = *v41 - 1;
  v43 = v4;
  v10 = *(_DWORD *)(*v41 + 1128);
  v11 = *v41 + 143;
  v40 = (current_time + 30 - *(_DWORD *)(a2 + 704)) / 0x3Cu;
  do
  {
    v12 = 0;
    v13 = (unsigned __int8 *)(v9 + 161);
    v14 = 0;
    v15 = 0;
    v16 = v9;
    do
    {
      v18 = *v13++;
      v17 = v18;
      v19 = *(unsigned __int8 *)++v16;
      v20 = v19 + v17;
      v21 = v19 + v17 <= v14;
      if ( v19 + v17 > v14 )
        v17 = v15;
      ++v15;
      if ( v21 )
      {
        v17 = v12;
        v20 = v14;
      }
      v12 = v17;
      v14 = v20;
    }
    while ( v15 != 16 );
    v9 += 16;
    v6 += v20;
    if ( v10 >= v20 )
      *(_DWORD *)(v8 + 920) |= 0x40u;
    *++v7 = a0123456789abcd_0[v17];
  }
  while ( v11 != v9 );
  v22 = 0;
  v23 = (double)v6;
  if ( sscanf(s, "%1x%3d%2d%2d", &v44, v41 + 48, v41 + 49, v41 + 50) != 4 )
    *(_DWORD *)(v8 + 920) |= 0x40u;
  if ( *(int *)(v8 + 1108) <= 19 )
    *(_DWORD *)(v8 + 920) |= 0x80u;
  v24 = *(_DWORD *)(v43 + 920);
  v25 = (v24 & 0x14) != 0;
  if ( (v24 & 0x28) != 0 )
    v25 |= 2u;
  if ( (v24 & 0x40) != 0 )
    v25 |= 4u;
  if ( (v24 & 0x80) != 0 )
    v25 |= 8u;
  if ( (v24 & 0x200) != 0 && v23 >= 50.0 )
  {
    *(_DWORD *)(v43 + 920) = v24 | 0x400;
    goto LABEL_25;
  }
  if ( (v24 & 0x400) != 0 )
  {
LABEL_25:
    if ( (*(_DWORD *)(v43 + 1148) & 2) != 0 )
    {
      v26 = 76;
      *((_BYTE *)v42 + 40) = 1;
      v27 = 32;
    }
    else
    {
      v38 = *(_DWORD *)(v43 + 1148) & 4;
      if ( v38 )
      {
        v26 = 108;
        *((_BYTE *)v42 + 40) = 2;
      }
      else
      {
        *((_BYTE *)v42 + 40) = 0;
        v26 = 32;
      }
      if ( v38 )
        v27 = 32;
      else
        v27 = v26;
    }
    goto LABEL_27;
  }
  v26 = 32;
  *((_BYTE *)v42 + 40) = 3;
  v27 = 63;
LABEL_27:
  sub_6BCB0(
    v42 + 14,
    128,
    "%c%1X %04d %03d %02d:%02d:%02d %c%x %+d %d %d %s %.0f %d",
    v27,
    v25,
    v42[47],
    v42[48],
    v42[49],
    v42[50],
    v42[51],
    v26,
    *(_DWORD *)(v43 + 1160),
    *(_DWORD *)(v43 + 1152),
    v40,
    *(_DWORD *)(v43 + 1144),
    (const char *)(v43 + 924),
    (double)v6,
    *(_DWORD *)(v43 + 1108));
  v28 = strlen((const char *)v42 + 56);
  v29 = *(_DWORD *)(v43 + 920) & 0x4C0;
  v42[46] = v28;
  if ( v29 == 1024 && v23 > 50.0 )
  {
    if ( sub_6300C(v42[48], v42[49], v42[50], 0, 0, *(_DWORD *)(v43 + 408), v42 + 53, &v44) )
    {
      v36 = *(_DWORD *)(v43 + 1108);
      v45 = 0;
      if ( v36 > 0 )
      {
        do
        {
          ++v22;
          sub_39754(v42, v44, v45);
        }
        while ( *(_DWORD *)(v43 + 1108) > v22 );
      }
      v37 = *(_DWORD *)(v43 + 892);
      v42[56] = *(_DWORD *)(v43 + 888);
      v42[57] = v37;
      sub_39A1C(a2);
    }
    else
    {
      *(_DWORD *)(v43 + 916) = 6;
    }
  }
  if ( v23 > 0.0 )
    sub_41CA4(a2 + 16, (const char *)v42 + 56);
  sub_5DC4C(a2);
  v30 = **(_DWORD **)(a2 + 84);
  v31 = v30 + 316;
  v32 = v30 - 1;
  v33 = *(_DWORD *)(v32 + 921);
  result = (__int16 *)(v31 + 3);
  *(_DWORD *)(v32 + 1117) = 0;
  *(_DWORD *)(v32 + 1113) = 0;
  *(_DWORD *)(v32 + 921) = v33 & 0xC00;
  *(_DWORD *)(v32 + 1109) = 0;
  *(_DWORD *)(v32 + 1129) = 0;
  do
  {
    v34 = v32 + 16;
    do
      *(_BYTE *)++v32 = 0;
    while ( v32 != v34 );
  }
  while ( (__int16 *)v32 != result );
  v35 = *(_DWORD *)(v43 + 916);
  if ( v35 )
    result = sub_3918C((__int16 *)a2, v35);
  *(_DWORD *)(v43 + 916) = 0;
  return result;
}
