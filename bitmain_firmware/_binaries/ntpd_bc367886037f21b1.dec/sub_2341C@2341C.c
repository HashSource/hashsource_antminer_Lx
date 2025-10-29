void sub_2341C()
{
  char v0; // r5
  unsigned int v1; // r0
  int v2; // r8
  unsigned int v3; // r0
  unsigned int v4; // r7
  unsigned int v5; // r11
  char *i; // r5
  unsigned int v7; // r3
  unsigned __int16 *v8; // r0
  unsigned __int16 *v9; // r0
  int v10; // r0
  int v11; // r6
  unsigned int v12; // r0
  int v13; // r9
  unsigned int v14; // r3
  unsigned __int16 *v15; // r0
  _BYTE *v16; // r4
  char *v18; // r6
  char *v19; // r4
  int v21; // r6
  int v23; // r3
  const char *v24; // r9
  size_t v25; // r0
  int v26; // r0
  unsigned __int8 *v27; // r4
  int v28; // t1
  int v29; // r4
  __int16 j; // r3
  size_t v31; // r0
  int v32; // r0
  unsigned __int8 *v33; // r4
  int v34; // t1
  int v35; // [sp+Ch] [bp-50h] BYREF
  const char *v36; // [sp+10h] [bp-4Ch] BYREF
  size_t v37; // [sp+14h] [bp-48h]
  _BYTE v38[60]; // [sp+18h] [bp-44h] BYREF

  v0 = word_B86C8;
  if ( !word_B86C8 )
  {
    v1 = sub_23340();
    v2 = 0;
    if ( byte_B88DD )
      byte_B88DF = v0;
    word_B84A0 = __rev16(v1);
    v3 = sub_1F6FC(dword_B88D8);
    v4 = v3 + 102;
    v5 = v3;
    for ( i = (char *)sub_637E4(0, v3 + 102, 0, 1); ; i[v7] = 1 )
    {
      v8 = (unsigned __int16 *)sub_1E5B0((int)&unk_B3148, &v35);
      if ( !v8 )
        break;
      if ( (v8[1] & 0x80) != 0 )
      {
        v9 = (unsigned __int16 *)sub_1E5B0(dword_B88D8, &v35);
        if ( !v9 )
        {
          sub_1F270(6);
          free(i);
          return;
        }
        if ( (v9[1] & 0x80) != 0 )
        {
          sub_1F270(5);
          free(i);
          return;
        }
        v7 = *v9 + 102;
        if ( v4 <= v7 )
          sub_6E8F0("ntp_control.c", 3369, 2, "n < wants_count");
      }
      else
      {
        v7 = *v8;
        if ( v4 <= v7 )
          sub_6E8F0("ntp_control.c", 3353, 2, "v->code < wants_count");
      }
      v2 = 1;
    }
    if ( v2 )
    {
      v18 = i + 101;
      v19 = i;
      do
      {
        while ( !*++v19 )
        {
          if ( v19 == v18 )
            goto LABEL_31;
        }
        sub_21628(v19 - i);
      }
      while ( v19 != v18 );
LABEL_31:
      if ( v4 != 102 )
      {
        v21 = 0;
        do
        {
          while ( !*++v19 )
          {
            if ( ++v21 == v5 )
              goto LABEL_36;
          }
          v23 = dword_B88D8 + 8 * v21++;
          v24 = *(const char **)(v23 + 4);
          v25 = strlen(v24);
          v36 = v24;
          v37 = v25;
          sub_1EC64((char *)&v36, 1, 0);
        }
        while ( v21 != v5 );
      }
    }
    else
    {
      v26 = 17;
      v27 = (unsigned __int8 *)&unk_937B8;
      do
      {
        sub_21628(v26);
        v28 = *++v27;
        v26 = v28;
      }
      while ( v28 );
      v29 = dword_B88D8;
      if ( dword_B88D8 )
      {
        for ( j = *(_WORD *)(dword_B88D8 + 2); (j & 0x80) == 0; j = *(_WORD *)(v29 + 2) )
        {
          if ( (j & 0x20) != 0 )
          {
            v31 = strlen(*(const char **)(v29 + 4));
            v36 = *(const char **)(v29 + 4);
            v37 = v31;
            sub_1EC64((char *)&v36, 1, 0);
          }
          v29 += 8;
          if ( !v29 )
            break;
        }
      }
    }
LABEL_36:
    free(i);
LABEL_37:
    sub_1E934(0);
    return;
  }
  v10 = sub_3197C((unsigned __int16)word_B86C8);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_2329C(v10);
    v13 = 0;
    if ( byte_B88DD )
      *(_BYTE *)(v11 + 74) = 0;
    memset(v38, 0, 59);
    word_B84A0 = __rev16(v12);
    while ( 1 )
    {
      v15 = (unsigned __int16 *)sub_1E5B0((int)&unk_B2F68, &v35);
      if ( !v15 )
        break;
      if ( (v15[1] & 0x80) != 0 )
      {
        sub_1F270(5);
        return;
      }
      v14 = *v15;
      if ( v14 > 0x3A )
        sub_6E8F0("ntp_control.c", 3310, 2, "v->code < (sizeof(wants) / sizeof((wants)[0]))");
      v13 = 1;
      v38[v14] = 1;
    }
    if ( v13 )
    {
      v16 = v38;
      do
      {
        if ( *++v16 )
          sub_20594(v16 - v38, v11);
      }
      while ( &v38[58] != v16 );
    }
    else
    {
      v32 = 4;
      v33 = (unsigned __int8 *)&unk_9378C;
      do
      {
        sub_20594(v32, v11);
        v34 = *++v33;
        v32 = v34;
      }
      while ( v34 );
    }
    goto LABEL_37;
  }
  sub_1F270(4);
}
