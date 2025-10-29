int __fastcall sub_324A8(int a1, __useconds_t *a2)
{
  int v3; // r0
  unsigned int v4; // r3
  __useconds_t v5; // r1
  char v6; // r11
  int v7; // r6
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r3
  unsigned int v14; // r0
  int i; // r4
  int v16; // r0
  int v17; // r4
  signed int v18; // r5
  int v19; // r10
  int v20; // r0
  int v21; // r0
  __useconds_t v22; // r5
  int v23; // r6
  int v24; // r4
  unsigned int v25; // r0
  int v26; // r4
  int v27; // r9
  int v28; // r7
  char *v29; // r10
  char *v30; // r5
  int v31; // r4
  int v32; // t1
  char *v33; // r9
  bool v35; // cc
  int v36[34]; // [sp+0h] [bp-8A4h] BYREF
  int *v37; // [sp+88h] [bp-81Ch]
  void *v38; // [sp+8Ch] [bp-818h]
  __useconds_t useconds; // [sp+90h] [bp-814h]
  char *v40; // [sp+94h] [bp-810h]
  __int16 v41; // [sp+9Ch] [bp-808h]
  char v42; // [sp+9Eh] [bp-806h]
  char s[2052]; // [sp+A0h] [bp-804h] BYREF

  v37 = &dword_9E31C;
  v3 = sub_24858();
  v4 = dword_9E31C;
  v5 = *a2;
  v6 = BYTE2(v3);
  v41 = v3;
  v38 = (void *)BYTE1(v3);
  useconds = v5;
  v42 = BYTE2(v3);
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Send work, max_freq = %d\n", useconds);
    sub_47AB4(4, s, 0);
    v4 = *v37;
  }
  v7 = 3;
  while ( 1 )
  {
    if ( v4 > 4 )
    {
      strcpy(s, "[DEBUG] Set start nonce offset invalid.\n");
      sub_47AB4(4, s, 0);
    }
    sub_66908(24, 0);
    v8 = sub_6F79C();
    v9 = 0;
    sub_6F7C4(v8 & 0xFFFF70FF | 0x8400);
    do
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * v9 + 4) != 1 )
      {
        if ( ++v9 == 16 )
          goto LABEL_10;
      }
      v10 = (unsigned __int8)v9++;
      sub_74DD0(v10, 1, 0);
    }
    while ( v9 != 16 );
LABEL_10:
    if ( (unsigned int)*v37 > 4 )
    {
      strcpy(s, "[DEBUG] Send null work.\n");
      sub_47AB4(4, s, 0);
    }
    v11 = 0;
    memset(s, 0, 0x94u);
    s[0] = 1;
    do
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * v11 + 4) != 1 )
      {
        if ( ++v11 == 16 )
          goto LABEL_15;
      }
      while ( (sub_6FF04() & (1 << v11)) == 0 )
        sub_4A804();
      s[1] = v11++ | 0x80;
      memcpy(v36, &s[16], 0x84u);
      sub_1B010(
        *(unsigned int *)s,
        *(int *)&s[4],
        *(int *)&s[8],
        *(int *)&s[12],
        v36[0],
        v36[1],
        v36[2],
        v36[3],
        v36[4],
        v36[5],
        v36[6],
        v36[7],
        v36[8],
        v36[9],
        v36[10],
        v36[11],
        v36[12],
        v36[13],
        v36[14],
        v36[15],
        v36[16],
        v36[17],
        v36[18],
        v36[19],
        v36[20],
        v36[21],
        v36[22],
        v36[23],
        v36[24],
        v36[25],
        v36[26],
        v36[27],
        v36[28]);
      sub_4A804();
    }
    while ( v11 != 16 );
LABEL_15:
    sleep(1u);
    v12 = sub_6F79C();
    sub_6F7C4(v12 & 0xFFFF70FF | 0x8100);
    usleep((__useconds_t)&loc_186A0);
    if ( !--v7 )
      break;
    v4 = *v37;
  }
  sub_1B298(255, 1);
  sub_1B138(255, (char)v38, v6, 1);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  v13 = dword_A0D68;
  do
  {
    while ( *(_DWORD *)(v13 + 4 * v7 + 4) != 1 )
    {
      if ( ++v7 == 16 )
        goto LABEL_25;
    }
    v14 = (unsigned __int8)v7++;
    sub_75458(v14, 0);
    v13 = dword_A0D68;
  }
  while ( v7 != 16 );
LABEL_25:
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(v13 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_29;
    }
    v16 = (unsigned __int8)i;
    sub_7561C(v16);
    v13 = dword_A0D68;
  }
LABEL_29:
  v17 = 3;
  v18 = 30000 - (useconds - 250) / 0x14;
  do
  {
    v19 = 0;
    while ( *(_DWORD *)(v13 + 4 * v19 + 4) != 1 )
    {
      if ( ++v19 == 16 )
        goto LABEL_35;
LABEL_32:
      v13 = dword_A0D68;
    }
    v20 = (unsigned __int8)v19++;
    sub_756F4(v20, v18 / 333);
    if ( v19 != 16 )
      goto LABEL_32;
LABEL_35:
    usleep((__useconds_t)&loc_186A0);
    --v17;
    v13 = dword_A0D68;
  }
  while ( v17 );
  if ( *(_DWORD *)(dword_A0D68 + 4) == 1 )
    goto LABEL_39;
  while ( ++v17 != 16 )
  {
    while ( *(_DWORD *)(v13 + 4 * v17 + 4) == 1 )
    {
LABEL_39:
      v21 = (unsigned __int8)v17++;
      sub_75718(v21, 8);
      v13 = dword_A0D68;
      if ( v17 == 16 )
        goto LABEL_40;
    }
  }
LABEL_40:
  v22 = v18 + 1000;
  v23 = 8;
  while ( 2 )
  {
    v24 = 0;
    while ( 2 )
    {
      if ( *(_DWORD *)(v13 + 4 * v24 + 4) != 1 )
      {
        if ( ++v24 == 16 )
          break;
        goto LABEL_43;
      }
      v25 = (unsigned __int8)v24++;
      sub_7575C(v25);
      if ( v24 != 16 )
      {
LABEL_43:
        v13 = dword_A0D68;
        continue;
      }
      break;
    }
    usleep(v22);
    if ( --v23 )
    {
      v13 = dword_A0D68;
      continue;
    }
    break;
  }
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_1B138(255, (char)v38, v6, 0);
  if ( (unsigned int)*v37 > 4 )
  {
    strcpy(s, "[DEBUG] Get nonce counter, chain.\n");
    sub_47AB4(4, s, 0);
    v35 = (unsigned int)*v37 > 4;
    v38 = *(void **)(dword_1AEA64 + 4);
    if ( v35 )
    {
      snprintf(s, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      sub_47AB4(4, s, 0);
    }
  }
  else
  {
    v38 = *(void **)(dword_1AEA64 + 4);
  }
  memset(v38, 0, 0x4E0u);
  v26 = 5;
  sub_1AD6C(255, 1, 0, 224);
  while ( !sub_32450() )
  {
    usleep((__useconds_t)&loc_186A0);
    if ( !--v26 )
    {
      v40 = s;
      v27 = 95;
      useconds = (__useconds_t)&loc_186A0;
      while ( 1 )
      {
        v28 = 0;
        v29 = (char *)v38 - 1;
        do
        {
          while ( *(_DWORD *)(dword_A0D68 + 4 * v28 + 4) != 1 )
          {
            if ( ++v28 == 16 )
              goto LABEL_62;
          }
          v30 = &v29[78 * v28];
          LOBYTE(v31) = 0;
          do
          {
            v32 = (unsigned __int8)*++v30;
            if ( v32 != 1 )
              sub_1AD6C((unsigned __int8)v28, 0, v31, 224);
            v31 = (unsigned __int8)(v31 + 3);
          }
          while ( v31 != 234 );
          ++v28;
        }
        while ( v28 != 16 );
LABEL_62:
        usleep(useconds);
        if ( sub_32450() )
          return 0;
        if ( !--v27 )
        {
          v33 = v40;
          if ( (unsigned int)*v37 > 3 )
          {
            snprintf(v40, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            sub_47AB4(3, v33, 0);
          }
          return -1;
        }
      }
    }
  }
  return 0;
}
