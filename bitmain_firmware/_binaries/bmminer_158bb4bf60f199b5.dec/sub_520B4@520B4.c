char *__fastcall sub_520B4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  const char *v5; // r0
  char *v6; // r10
  char *v7; // r5
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r3
  char *v11; // r3
  _DWORD *v12; // r0
  char *v13; // r0
  _BYTE *v15; // r0
  int v16; // r0
  _DWORD *v17; // r10
  unsigned int v18; // r5
  _DWORD *v19; // r0
  int v20; // r0
  _DWORD *v22; // [sp+10h] [bp-814h]
  char *v23; // [sp+10h] [bp-814h]
  char *v24; // [sp+14h] [bp-810h]
  char *v25; // [sp+14h] [bp-810h]
  _DWORD *v26; // [sp+18h] [bp-80Ch]
  char *v27; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a2 && !dword_1AEEB4 )
    dword_1AEEB4 = 1;
  if ( dword_9E54C == 16 )
    goto LABEL_28;
  if ( (dword_9E54C & 8) != 0 )
LABEL_53:
    _assert_fail("!(opt->type & OPT_SUBTABLE)", "cgminer.c", 0x79Fu, "parse_config");
  v3 = &unk_9E564;
  while ( 1 )
  {
    v5 = (const char *)*(v3 - 7);
    if ( !v5 )
    {
      v4 = v3[1];
      if ( v4 == 16 )
        break;
      goto LABEL_8;
    }
    v6 = _strdup(v5);
    v7 = strtok(v6, "|");
    if ( !v7 )
      goto LABEL_27;
    while ( 2 )
    {
      if ( v7[1] != 45 )
        goto LABEL_12;
      v8 = (_DWORD *)sub_6DFCC(a1, v7 + 2);
      if ( !v8 )
        goto LABEL_12;
      v9 = *(v3 - 6);
      v10 = *v8;
      if ( (v9 & 6) == 0 )
      {
LABEL_18:
        if ( (unsigned int)(v10 - 5) > 1 )
        {
          v11 = "Invalid value";
          goto LABEL_21;
        }
        v15 = (_BYTE *)*(v3 - 2);
        if ( (v9 & 1) == 0 )
        {
          if ( v10 == 5 )
            sub_6428C(v15);
          else
            sub_6429C(v15);
          goto LABEL_12;
        }
        v11 = (char *)((int (__fastcall *)(_BYTE *))*(v3 - 5))(v15);
        goto LABEL_33;
      }
      if ( v10 == 2 )
      {
        v22 = sub_6E350(v8);
        v16 = ((int (__fastcall *)(_DWORD *, _DWORD))*(v3 - 4))(v22, *(v3 - 2));
        v11 = (char *)v16;
        if ( *(v3 - 6) == 4 )
        {
          v24 = (char *)v16;
          sub_64370((int)v22, (_DWORD *)*(v3 - 2));
          v11 = v24;
        }
LABEL_33:
        if ( !v11 )
          goto LABEL_12;
        if ( a2 )
          goto LABEL_22;
LABEL_35:
        snprintf(::s, 0xC8u, "Parsing JSON option %s: %s", v7, v11);
        return ::s;
      }
      if ( v10 != 1 )
        goto LABEL_18;
      v23 = v6;
      v17 = v8;
      v25 = v7;
      v18 = 0;
      if ( !sub_6E1A8(v8) )
      {
LABEL_46:
        v6 = v23;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v19 = sub_6E1C4(v17, v18);
        if ( !v19 )
          goto LABEL_46;
        if ( *v19 == 2 )
          break;
        if ( !*v19 )
        {
          v11 = sub_520B4(v19, 0);
          goto LABEL_49;
        }
LABEL_45:
        if ( (unsigned int)sub_6E1A8(v17) <= ++v18 )
          goto LABEL_46;
      }
      v26 = sub_6E350(v19);
      v20 = ((int (__fastcall *)(_DWORD *, _DWORD))*(v3 - 4))(v26, *(v3 - 2));
      v11 = (char *)v20;
      if ( *(v3 - 6) == 4 )
      {
        v27 = (char *)v20;
        sub_64370((int)v26, (_DWORD *)*(v3 - 2));
        v11 = v27;
      }
LABEL_49:
      if ( !v11 )
        goto LABEL_45;
      v6 = v23;
      v7 = v25;
LABEL_21:
      if ( !a2 )
        goto LABEL_35;
LABEL_22:
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
      {
        snprintf(s, 0x800u, "Invalid config option %s: %s", v7, v11);
        sub_47AB4(3, s, 0);
      }
      dword_1AEEB4 = -1;
LABEL_12:
      v7 = strtok(0, "|");
      if ( v7 )
        continue;
      break;
    }
LABEL_27:
    free(v6);
    v4 = v3[1];
    if ( v4 == 16 )
      break;
LABEL_8:
    v3 += 7;
    if ( (v4 & 8) != 0 )
      goto LABEL_53;
  }
LABEL_28:
  v12 = (_DWORD *)sub_6DFCC(a1, "include");
  if ( !v12 || *v12 != 2 )
    return 0;
  v13 = (char *)sub_6E350(v12);
  return sub_51FC0(v13);
}
