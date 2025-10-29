unsigned int __fastcall sub_6C3F4(int a1, int a2)
{
  const void **v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  char i; // r1
  int v13; // r3
  int v14; // r2
  int v16; // r0
  const char *v17; // r4
  int v18; // r0
  bool v19; // zf
  int v20; // r1
  double v21; // r2
  int v22; // r1
  int v23; // r0
  unsigned int v24; // r4
  int v25; // r0
  bool v26; // zf
  unsigned int v27; // r3
  const char *v28; // r4
  int *v29; // r7
  __int64 v30; // r0
  _DWORD *v31; // r1
  int v32; // r0
  const char *v33; // r2
  _BYTE *v34; // r4
  unsigned __int8 *j; // r7
  int v36; // r3
  unsigned int v37; // r3
  int v38; // r8
  unsigned int v39; // r3
  unsigned int v40; // r4
  bool v41; // cc
  int v42; // r0
  unsigned __int8 *v43; // r11
  int v44; // r3
  int v45; // r0
  const char *v46; // r2
  int v47; // [sp+8h] [bp-1Ch]
  int v48; // [sp+Ch] [bp-18h]
  char src[4]; // [sp+14h] [bp-10h] BYREF
  double endptr; // [sp+18h] [bp-Ch] BYREF

  v2 = (const void **)(a1 + 40);
  sub_6D5E0(a1 + 40);
  if ( *(_DWORD *)(a1 + 52) == 256 )
  {
    sub_6D518(*(void **)(a1 + 56));
    *(_DWORD *)(a1 + 56) = 0;
  }
  do
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( !v5 )
      v5 = sub_6C1F0(a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    *(_DWORD *)(a1 + 52) = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_31;
  fh_buffer_putc(v2, v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_34;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_34;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      *(_DWORD *)(a1 + 52) = -1;
      if ( v5 == 45 )
      {
        v32 = sub_6C368(a1, a2);
        v31 = (_DWORD *)v32;
        if ( v32 != 48 )
        {
          if ( (unsigned int)(v32 - 48) > 9 )
            goto LABEL_86;
          goto LABEL_44;
        }
      }
      else if ( v5 != 48 )
      {
        do
LABEL_44:
          v18 = sub_6C368(a1, a2);
        while ( (unsigned int)(v18 - 48) <= 9 );
        goto LABEL_45;
      }
      v18 = sub_6C368(a1, a2);
      if ( (unsigned int)(v18 - 48) <= 9 )
      {
LABEL_85:
        v31 = (_DWORD *)v18;
LABEL_86:
        sub_6C3A8((_DWORD *)a1, v31);
        return *(_DWORD *)(a1 + 52);
      }
LABEL_45:
      v19 = v18 == 46;
      if ( v18 != 46 )
        v19 = v18 == 69;
      if ( v19 )
      {
        if ( v18 == 46 )
        {
          v20 = *(_DWORD *)(a1 + 20);
          if ( !v20 )
            v20 = sub_6C1F0(a1, a2);
          if ( (unsigned int)(v20 - 48) > 9 )
          {
            sub_6C134((_DWORD *)a1, v20);
            return *(_DWORD *)(a1 + 52);
          }
          fh_buffer_putc(v2, v20);
          do
            v18 = sub_6C368(a1, a2);
          while ( (unsigned int)(v18 - 48) <= 9 );
        }
        if ( (v18 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_56;
      }
      else if ( v18 != 101 )
      {
        sub_6C3A8((_DWORD *)a1, (_DWORD *)v18);
        v28 = (const char *)sub_6D5F4((int)v2);
        v29 = _errno_location();
        *v29 = 0;
        v30 = strtoll(v28, (char **)&endptr, 10);
        if ( *v29 == 34 )
        {
          if ( v30 >= 0 )
            LOWORD(v46) = -21576;
          else
            LOWORD(v46) = -21604;
          HIWORD(v46) = 8;
          sub_6BF34(a2, (_DWORD *)a1, v46, HIDWORD(v30));
          return *(_DWORD *)(a1 + 52);
        }
        else
        {
          if ( (const char *)LODWORD(endptr) != &v28[*(_DWORD *)(a1 + 44)] )
            _assert_fail(
              "end == saved_text + lex->saved_text.length",
              "3rdparty/jansson-2.6/src/load.c",
              0x206u,
              "lex_scan_number");
          v8 = 257;
          *(_QWORD *)(a1 + 56) = v30;
          *(_DWORD *)(a1 + 52) = 257;
        }
        return v8;
      }
      v18 = sub_6C368(a1, a2);
      if ( ((v18 - 43) & 0xFFFFFFFD) == 0 )
        v18 = sub_6C368(a1, a2);
      if ( (unsigned int)(v18 - 48) <= 9 )
      {
        do
          v18 = sub_6C368(a1, a2);
        while ( (unsigned int)(v18 - 48) <= 9 );
LABEL_56:
        sub_6C3A8((_DWORD *)a1, (_DWORD *)v18);
        if ( sub_6D750((int)v2, &endptr) )
        {
          sub_6BF34(a2, (_DWORD *)a1, "real number overflow");
          return *(_DWORD *)(a1 + 52);
        }
        else
        {
          v21 = endptr;
          v8 = 258;
          *(_DWORD *)(a1 + 52) = 258;
          *(double *)(a1 + 56) = v21;
        }
        return v8;
      }
      goto LABEL_85;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      for ( i = *(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8); i; i = *(_BYTE *)(a1 + v13 + 8) )
      {
        fh_buffer_putc(v2, i);
        v13 = *(_DWORD *)(a1 + 16) + 1;
        v14 = *(_DWORD *)(a1 + 36) + 1;
        *(_DWORD *)(a1 + 16) = v13;
        *(_DWORD *)(a1 + 36) = v14;
      }
      goto LABEL_31;
    }
    do
      v16 = sub_6C368(a1, a2);
    while ( (v16 & 0xFFFFFFDF) - 65 <= 0x19 );
    sub_6C3A8((_DWORD *)a1, (_DWORD *)v16);
    v17 = (const char *)sub_6D5F4((int)v2);
    if ( !strcmp(v17, "true") )
    {
      v8 = 259;
      *(_DWORD *)(a1 + 52) = 259;
      return v8;
    }
    if ( strcmp(v17, "false") )
    {
      if ( !strcmp(v17, "null") )
      {
        v8 = 261;
        *(_DWORD *)(a1 + 52) = 261;
        return v8;
      }
LABEL_31:
      v8 = -1;
      *(_DWORD *)(a1 + 52) = -1;
      return v8;
    }
    v5 = 260;
LABEL_34:
    *(_DWORD *)(a1 + 52) = v5;
    return v5;
  }
  *(_DWORD *)(a1 + 56) = v10;
  *(_DWORD *)(a1 + 52) = -1;
LABEL_59:
  v22 = a2;
  v23 = a1;
  while ( 1 )
  {
    v24 = sub_6C368(v23, v22);
LABEL_61:
    if ( v24 == 34 )
    {
      v34 = sub_6D500((void *)(*(_DWORD *)(a1 + 44) + 1));
      *(_DWORD *)(a1 + 56) = v34;
      if ( !v34 )
        goto LABEL_74;
      for ( j = (unsigned __int8 *)(sub_6D5F4((int)v2) + 1); ; j += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v36 = *j;
            if ( v36 == 34 )
            {
              *v34 = 0;
              v8 = 256;
              *(_DWORD *)(a1 + 52) = 256;
              return v8;
            }
            if ( v36 == 92 )
              break;
            *v34 = v36;
            ++j;
            ++v34;
          }
          v37 = j[1];
          if ( v37 != 117 )
            break;
          v42 = sub_6C088(j + 1);
          v43 = j + 6;
          v44 = v42;
          v48 = v42 - 55296;
          if ( (unsigned int)(v42 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v42 - 56320) < 0x400 )
              goto LABEL_145;
            if ( !v42 )
            {
              sub_6BF34(a2, (_DWORD *)a1, "\\u0000 is not allowed", 0);
              goto LABEL_74;
            }
          }
          else
          {
            if ( j[6] != 92 || j[7] != 117 )
            {
LABEL_145:
              sub_6BF34(a2, (_DWORD *)a1, "invalid Unicode '\\u%04X'", v42);
              goto LABEL_74;
            }
            v47 = v42;
            v45 = sub_6C088(j + 7);
            v43 = j + 12;
            if ( (unsigned int)(v45 - 56320) >= 0x400 )
            {
              sub_6BF34(a2, (_DWORD *)a1, "invalid Unicode '\\u%04X\\u%04X'", v47, v45);
              goto LABEL_74;
            }
            v44 = v45 - 56320 + (v48 << 10) + 0x10000;
          }
          if ( sub_6D94C(v44, src, &endptr) )
            _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1AEu, "lex_scan_string");
          j = v43;
          memcpy(v34, src, LODWORD(endptr));
          v34 += LODWORD(endptr);
        }
        if ( v37 == 98 )
        {
          *v34 = 8;
        }
        else
        {
          if ( v37 <= 0x62 )
          {
            if ( v37 != 47 && v37 != 92 && v37 != 34 )
LABEL_123:
              _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1BCu, "lex_scan_string");
            goto LABEL_118;
          }
          if ( v37 == 110 )
          {
            *v34 = 10;
          }
          else
          {
            if ( v37 <= 0x6E )
            {
              if ( v37 != 102 )
                goto LABEL_123;
              LOBYTE(v37) = 12;
LABEL_118:
              *v34 = v37;
              goto LABEL_108;
            }
            if ( v37 == 114 )
            {
              *v34 = 13;
            }
            else
            {
              if ( v37 != 116 )
                goto LABEL_123;
              *v34 = 9;
            }
          }
        }
LABEL_108:
        ++v34;
      }
    }
    if ( v24 == -2 )
      goto LABEL_74;
    if ( v24 == -1 )
    {
      sub_6BF34(a2, (_DWORD *)a1, "premature end of input");
      goto LABEL_74;
    }
    if ( v24 <= 0x1F )
      break;
    v22 = a2;
    v23 = a1;
    if ( v24 == 92 )
    {
      v25 = sub_6C368(a1, a2);
      if ( v25 == 117 )
      {
        v38 = 4;
        v24 = sub_6C368(a1, a2);
        while ( 1 )
        {
          v39 = v24 & 0xFFFFFFDF;
          v40 = v24 - 48;
          v27 = v39 - 65;
          v41 = v27 > 5;
          if ( v27 > 5 )
            v41 = v40 > 9;
          if ( v41 )
            break;
          --v38;
          v24 = sub_6C368(a1, a2);
          if ( !v38 )
            goto LABEL_61;
        }
LABEL_73:
        sub_6BF34(a2, (_DWORD *)a1, "invalid escape", v27);
        goto LABEL_74;
      }
      v26 = v25 == 92;
      if ( v25 != 92 )
        v26 = (v25 & 0xFFFFFFBF) == 34;
      if ( !v26 && v25 != 47 && (v25 & 0xFFFFFFF7) != 0x66 )
      {
        v27 = (v25 - 114) & 0xFFFFFFFD;
        if ( v27 )
          goto LABEL_73;
      }
      goto LABEL_59;
    }
  }
  sub_6C3A8((_DWORD *)a1, (_DWORD *)v24);
  if ( v24 == 10 )
    LOWORD(v33) = -21748;
  else
    LOWORD(v33) = -21728;
  HIWORD(v33) = 8;
  sub_6BF34(a2, (_DWORD *)a1, v33, v24);
LABEL_74:
  sub_6D518(*(void **)(a1 + 56));
  return *(_DWORD *)(a1 + 52);
}
