unsigned int __fastcall sub_46498(int a1, int a2)
{
  const void **v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  int v12; // r0
  const char *v13; // r4
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r4
  int v18; // r0
  bool v19; // zf
  int v20; // r0
  bool v21; // zf
  const char *v22; // r4
  int *v23; // r7
  __int64 v24; // r0
  char i; // r1
  int v26; // r3
  int v27; // r2
  double v28; // r2
  int v29; // r8
  unsigned int v30; // r3
  unsigned int v31; // r4
  bool v32; // cc
  int v33; // r1
  _BYTE *v34; // r8
  unsigned __int8 *j; // r4
  int v36; // r3
  unsigned int v37; // r3
  int v38; // r0
  int v39; // r11
  int v40; // r0
  _DWORD *v41; // r1
  int v42; // r0
  int v43; // r2
  const char *v44; // r3
  const char *v45; // r3
  char arg[4]; // [sp+0h] [bp-1Ch]
  int v47; // [sp+Ch] [bp-10h]
  double endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = (const void **)(a1 + 40);
  sub_47880(a1 + 40);
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    sub_47764(*(void **)(a1 + 64));
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
  }
  do
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( !v5 )
      v5 = sub_46284(a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    *(_DWORD *)(a1 + 60) = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_35;
  fh_buffer_putc(v2, v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_38;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_38;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      *(_DWORD *)(a1 + 60) = -1;
      if ( v5 == 45 )
      {
        v42 = sub_4640C(a1, a2);
        v41 = (_DWORD *)v42;
        if ( v42 != 48 )
        {
          if ( (unsigned int)(v42 - 48) > 9 )
            goto LABEL_118;
          goto LABEL_58;
        }
      }
      else if ( v5 != 48 )
      {
        do
LABEL_58:
          v20 = sub_4640C(a1, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
        goto LABEL_59;
      }
      v20 = sub_4640C(a1, a2);
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
LABEL_117:
        v41 = (_DWORD *)v20;
LABEL_118:
        sub_4644C((_DWORD *)a1, v41);
        return *(_DWORD *)(a1 + 60);
      }
LABEL_59:
      if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
        goto LABEL_70;
      v21 = v20 == 46;
      if ( v20 != 46 )
        v21 = v20 == 69;
      if ( v21 )
      {
LABEL_70:
        if ( v20 == 46 )
        {
          v33 = *(_DWORD *)(a1 + 20);
          if ( !v33 )
            v33 = sub_46284(a1, a2);
          if ( (unsigned int)(v33 - 48) > 9 )
          {
            sub_461C8((_DWORD *)a1, v33);
            return *(_DWORD *)(a1 + 60);
          }
          fh_buffer_putc(v2, v33);
          do
            v20 = sub_4640C(a1, a2);
          while ( (unsigned int)(v20 - 48) <= 9 );
        }
        if ( (v20 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_72;
      }
      else if ( v20 != 101 )
      {
        sub_4644C((_DWORD *)a1, (_DWORD *)v20);
        v22 = (const char *)sub_47894((int)v2);
        v23 = _errno_location();
        *v23 = 0;
        v24 = strtoll(v22, (char **)&endptr, 10);
        if ( *v23 == 34 )
        {
          if ( v24 >= 0 )
            LOWORD(v45) = 26404;
          else
            LOWORD(v45) = 26376;
          HIWORD(v45) = 5;
          sub_45F98(a2, (_DWORD *)a1, 15, v45);
          return *(_DWORD *)(a1 + 60);
        }
        else
        {
          if ( (const char *)LODWORD(endptr) != &v22[*(_DWORD *)(a1 + 44)] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x21Du, "lex_scan_number");
          v8 = 257;
          *(_QWORD *)(a1 + 64) = v24;
          *(_DWORD *)(a1 + 60) = 257;
        }
        return v8;
      }
      v20 = sub_4640C(a1, a2);
      if ( ((v20 - 43) & 0xFFFFFFFD) == 0 )
        v20 = sub_4640C(a1, a2);
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
        do
          v20 = sub_4640C(a1, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
LABEL_72:
        sub_4644C((_DWORD *)a1, (_DWORD *)v20);
        if ( sub_479C8((int)v2, &endptr) )
        {
          sub_45F98(a2, (_DWORD *)a1, 15, "real number overflow");
          return *(_DWORD *)(a1 + 60);
        }
        else
        {
          v28 = endptr;
          v8 = 258;
          *(_DWORD *)(a1 + 60) = 258;
          *(double *)(a1 + 64) = v28;
        }
        return v8;
      }
      goto LABEL_117;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      do
        v12 = sub_4640C(a1, a2);
      while ( (v12 & 0xFFFFFFDF) - 65 <= 0x19 );
      sub_4644C((_DWORD *)a1, (_DWORD *)v12);
      v13 = (const char *)sub_47894((int)v2);
      if ( !strcmp(v13, "true") )
      {
        v8 = 259;
        *(_DWORD *)(a1 + 60) = 259;
        return v8;
      }
      if ( strcmp(v13, "false") )
      {
        if ( !strcmp(v13, "null") )
        {
          v8 = 261;
          *(_DWORD *)(a1 + 60) = 261;
          return v8;
        }
        goto LABEL_35;
      }
      v5 = 260;
LABEL_38:
      *(_DWORD *)(a1 + 60) = v5;
      return v5;
    }
    for ( i = *(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8); i; i = *(_BYTE *)(a1 + v26 + 8) )
    {
      fh_buffer_putc(v2, i);
      v26 = *(_DWORD *)(a1 + 16) + 1;
      v27 = *(_DWORD *)(a1 + 36) + 1;
      *(_DWORD *)(a1 + 16) = v26;
      *(_DWORD *)(a1 + 36) = v27;
    }
LABEL_35:
    v8 = -1;
    *(_DWORD *)(a1 + 60) = -1;
    return v8;
  }
  *(_DWORD *)(a1 + 64) = v10;
  *(_DWORD *)(a1 + 60) = -1;
LABEL_40:
  v15 = a2;
  v16 = a1;
  while ( 1 )
  {
    v17 = sub_4640C(v16, v15);
LABEL_42:
    if ( v17 == 34 )
    {
      v34 = sub_4774C((void *)(*(_DWORD *)(a1 + 44) + 1));
      if ( !v34 )
        goto LABEL_55;
      *(_DWORD *)(a1 + 64) = v34;
      for ( j = (unsigned __int8 *)(sub_47894((int)v2) + 1); ; j += 2 )
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
              v43 = *(_DWORD *)(a1 + 64);
              *(_DWORD *)(a1 + 60) = 256;
              *(_DWORD *)(a1 + 68) = &v34[-v43];
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
          v38 = sub_46134(j + 1);
          v39 = v38;
          if ( v38 < 0 )
          {
            LOWORD(v44) = (unsigned __int16)"invalid Unicode escape '%.6s'";
            *(_DWORD *)arg = j;
LABEL_138:
            HIWORD(v44) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
            sub_45F98(a2, (_DWORD *)a1, 8, v44, *(_DWORD *)arg);
            goto LABEL_55;
          }
          v47 = v38 - 55296;
          if ( (unsigned int)(v38 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v38 - 56320) < 0x400 )
              goto LABEL_142;
            j += 6;
          }
          else
          {
            if ( j[6] != 92 || j[7] != 117 )
            {
LABEL_142:
              sub_45F98(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X'", v38);
              goto LABEL_55;
            }
            v40 = sub_46134(j + 7);
            if ( v40 < 0 )
            {
              LOWORD(v44) = 26284;
              *(_DWORD *)arg = j + 6;
              goto LABEL_138;
            }
            j += 12;
            if ( (unsigned int)(v40 - 56320) >= 0x400 )
            {
              sub_45F98(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v39, v40);
              goto LABEL_55;
            }
            v39 = v40 - 56320 + (v47 << 10) + 0x10000;
          }
          if ( sub_47BF8(v39, v34, &endptr) )
            _assert_fail((const char *)&word_55AAC, "load.c", 0x1C4u, "lex_scan_string");
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
LABEL_130:
              _assert_fail((const char *)&word_55AAC, "load.c", 0x1D0u, "lex_scan_string");
            goto LABEL_125;
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
                goto LABEL_130;
              LOBYTE(v37) = 12;
LABEL_125:
              *v34 = v37;
              goto LABEL_106;
            }
            if ( v37 == 114 )
            {
              *v34 = 13;
            }
            else
            {
              if ( v37 != 116 )
                goto LABEL_130;
              *v34 = 9;
            }
          }
        }
LABEL_106:
        ++v34;
      }
    }
    if ( v17 == -2 )
      goto LABEL_55;
    if ( v17 == -1 )
    {
      sub_45F98(a2, (_DWORD *)a1, 6, "premature end of input");
      goto LABEL_55;
    }
    if ( v17 <= 0x1F )
      break;
    v15 = a2;
    v16 = a1;
    if ( v17 == 92 )
    {
      v18 = sub_4640C(a1, a2);
      if ( v18 == 117 )
      {
        v29 = 4;
        v17 = sub_4640C(a1, a2);
        while ( 1 )
        {
          v30 = v17 & 0xFFFFFFDF;
          v31 = v17 - 48;
          v30 -= 65;
          v32 = v30 > 5;
          if ( v30 > 5 )
            v32 = v31 > 9;
          if ( v32 )
            break;
          --v29;
          v17 = sub_4640C(a1, a2);
          if ( !v29 )
            goto LABEL_42;
        }
LABEL_54:
        sub_45F98(a2, (_DWORD *)a1, 8, "invalid escape");
        goto LABEL_55;
      }
      v19 = v18 == 92;
      if ( v18 != 92 )
        v19 = (v18 & 0xFFFFFFBF) == 34;
      if ( !v19 && v18 != 47 && (v18 & 0xFFFFFFF7) != 0x66 && ((v18 - 114) & 0xFFFFFFFD) != 0 )
        goto LABEL_54;
      goto LABEL_40;
    }
  }
  sub_4644C((_DWORD *)a1, (_DWORD *)v17);
  if ( v17 == 10 )
    sub_45F98(a2, (_DWORD *)a1, 8, "unexpected newline");
  else
    sub_45F98(a2, (_DWORD *)a1, 8, "control character 0x%x", v17);
LABEL_55:
  sub_47764(*(void **)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return v8;
}
