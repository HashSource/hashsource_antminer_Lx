unsigned int __fastcall sub_831F4(unsigned int result, _DWORD *a2, const char **a3, unsigned int a4)
{
  const char **v5; // r5
  unsigned int v7; // r8
  char *v8; // r4
  int v9; // r11
  int v10; // r3
  int v11; // t1
  unsigned int v12; // r3
  int v13; // r11
  const char *v14; // r9
  char *v15; // r0
  int v16; // t1
  int v17; // r3
  int v18; // t1
  size_t v19; // r5
  int v20; // r3
  unsigned int v21; // t1
  int v22; // r3
  unsigned int v23; // r4
  unsigned int v24; // r8
  size_t v25; // r11
  int v26; // r9
  char *v27; // r0
  char *v28; // r6
  int v29; // r3
  size_t v30; // r8
  char *v31; // r2
  unsigned int v32; // r4
  int v33; // r8
  int v34; // r3
  int v35; // r9
  FILE *v36; // r1
  int v37; // r3
  char *v38; // r9
  int v39; // r3
  int v40; // t1
  bool v41; // zf
  unsigned __int8 *v42; // r9
  int v43; // r3
  int v44; // t1
  unsigned __int8 *v45; // r9
  int v46; // r3
  int v47; // t1
  int v48; // [sp+10h] [bp-A4h]
  const char **v49; // [sp+20h] [bp-94h]
  int v50; // [sp+24h] [bp-90h]
  char *endptr; // [sp+28h] [bp-8Ch] BYREF
  char dest[136]; // [sp+2Ch] [bp-88h] BYREF

  v5 = a3;
  if ( result != 2 )
  {
    v7 = result;
    if ( result == 3 )
    {
      v22 = a2[7];
      v23 = v22 & ~(-1 << a4);
      if ( v23 )
      {
        v24 = v22 & ~(-1 << a4);
        v25 = 1;
        v26 = 0;
        do
        {
          if ( (v24 & 1) != 0 )
            v25 += strlen(v5[v26]) + 4;
          if ( a4 <= ++v26 )
            break;
          v24 >>= 1;
        }
        while ( v24 );
        v27 = (char *)malloc(v25);
        v28 = v27;
        if ( v27 )
        {
          a2[6] = v27;
          while ( 1 )
          {
            v29 = v23 & 1;
            v23 >>= 1;
            if ( v29 )
            {
              v30 = strlen(*v5);
              result = (unsigned int)memcpy(v28, *v5, v30);
              v31 = &v28[v30];
              if ( !v23 )
              {
                *v31 = 0;
                return result;
              }
              *(_WORD *)&v28[v30] = 11040;
              v28 = v31 + 3;
              v31[2] = 32;
            }
            ++v5;
          }
        }
      }
      else
      {
        result = (unsigned int)malloc(1u);
        if ( result )
        {
          a2[6] = result;
          *(_BYTE *)result = 0;
          return result;
        }
        v25 = 1;
      }
      sub_C610(v25);
    }
    if ( result == 1 )
      return sub_7C530(1u, a2, a3, a4);
    if ( (a2[4] & 8) != 0 )
      return result;
    v8 = (char *)a2[6];
    v9 = a2[7];
    result = dword_106334;
    if ( !dword_106334 )
      result = (unsigned int)sub_7DEE8(12);
    v10 = (unsigned __int8)*v8;
    if ( *(_BYTE *)(result + v10) )
    {
      do
      {
        v11 = (unsigned __int8)*++v8;
        v10 = v11;
      }
      while ( *(_BYTE *)(result + v11) );
    }
    if ( !v10 )
      goto LABEL_69;
    v48 = v9;
    switch ( v10 )
    {
      case '=':
        v45 = (unsigned __int8 *)(v8 + 1);
        result = dword_106334;
        if ( !dword_106334 )
          result = (unsigned int)sub_7DEE8(12);
        v46 = (unsigned __int8)v8[1];
        if ( *(_BYTE *)(result + v46) )
        {
          do
          {
            v47 = *++v45;
            v46 = v47;
          }
          while ( *(_BYTE *)(result + v47) );
        }
        if ( v46 == 61 )
          goto LABEL_69;
        if ( v46 != 94 )
        {
          if ( v46 != 44 )
          {
            v8 = (char *)v45;
            v50 = 0;
            v48 = 0;
            goto LABEL_15;
          }
          goto LABEL_69;
        }
        v8 = (char *)v45;
        v48 = 0;
        break;
      case '^':
        break;
      case ',':
        goto LABEL_69;
      default:
        v50 = 0;
LABEL_15:
        v12 = (unsigned __int8)*v8;
        v49 = v5;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v12 )
            {
LABEL_94:
              if ( v50 )
                v48 = ~v48;
              if ( a4 <= 0x1F )
                v48 &= ~(-1 << a4);
              a2[7] = v48;
              return result;
            }
            if ( v12 != 44 )
              break;
            v38 = v8 + 1;
            result = dword_106334;
            if ( !dword_106334 )
              result = (unsigned int)sub_7DEE8(12);
            v39 = (unsigned __int8)v8[1];
            if ( *(_BYTE *)(result + v39) )
            {
              do
              {
                v40 = (unsigned __int8)*++v38;
                v39 = v40;
              }
              while ( *(_BYTE *)(result + v40) );
            }
            v41 = v39 == 124;
            if ( v39 != 124 )
              v41 = v39 == 44;
            if ( v41 )
              goto LABEL_69;
            v12 = (unsigned __int8)*v38;
            v8 = v38;
          }
          if ( v12 > 0x2C )
          {
            if ( v12 == 45 )
            {
LABEL_90:
              v13 = 1;
              goto LABEL_22;
            }
            if ( v12 != 124 )
            {
LABEL_81:
              v14 = v8;
              v13 = 0;
              goto LABEL_26;
            }
          }
          else
          {
            if ( v12 == 33 )
              goto LABEL_90;
            if ( v12 != 43 )
              goto LABEL_81;
          }
          v13 = 0;
LABEL_22:
          v14 = v8 + 1;
          v15 = (char *)dword_106334;
          if ( !dword_106334 )
            v15 = sub_7DEE8(12);
          if ( v15[(unsigned __int8)v8[1]] )
          {
            do
              v16 = *(unsigned __int8 *)++v14;
            while ( v15[v16] );
          }
LABEL_26:
          result = dword_1063AC;
          if ( !dword_1063AC )
            result = (unsigned int)sub_7DEE8(42);
          if ( !*v14 || *(_BYTE *)(result + *(unsigned __int8 *)v14) )
            goto LABEL_94;
          v8 = (char *)v14;
          do
          {
            v18 = (unsigned __int8)*++v8;
            v17 = v18;
          }
          while ( v18 && !*(_BYTE *)(result + v17) );
          v19 = v8 - v14;
          if ( v8 == v14 )
            goto LABEL_94;
          if ( v19 == 3 )
          {
            if ( !strncmp(v14, "all", 3u) )
            {
              v48 = v13 - 1;
              goto LABEL_40;
            }
          }
          else if ( v19 == 4 && !strncmp(v14, "none", 4u) )
          {
            v20 = v48;
            if ( !v13 )
              v20 = 0;
            v48 = v20;
            goto LABEL_40;
          }
          result = strtoul(v14, &endptr, 0);
          if ( endptr != v8 )
          {
            memcpy(dest, endptr, v19);
            dest[v19] = 0;
            result = sub_7C83C(dest, v7, a2, v49, a4);
            if ( a4 <= result )
              goto LABEL_69;
            result = 1 << result;
            if ( !result )
              goto LABEL_69;
          }
          if ( v13 )
            v37 = v48 & ~result;
          else
            v37 = v48 | result;
          v48 = v37;
LABEL_40:
          result = dword_106334;
          if ( !dword_106334 )
            result = (unsigned int)sub_7DEE8(12);
          v12 = (unsigned __int8)*v8;
          if ( *(_BYTE *)(result + v12) )
          {
            do
            {
              v21 = (unsigned __int8)*++v8;
              v12 = v21;
            }
            while ( *(_BYTE *)(result + v21) );
          }
        }
    }
    v42 = (unsigned __int8 *)(v8 + 1);
    result = dword_106334;
    if ( !dword_106334 )
      result = (unsigned int)sub_7DEE8(12);
    v43 = (unsigned __int8)v8[1];
    if ( *(_BYTE *)(result + v43) )
    {
      do
      {
        v44 = *++v42;
        v43 = v44;
      }
      while ( *(_BYTE *)(result + v44) );
    }
    if ( v43 != 44 )
    {
      v8 = (char *)v42;
      v50 = 1;
      goto LABEL_15;
    }
LABEL_69:
    a2[7] = 0;
    return result;
  }
  v32 = a2[7] & ~(-1 << a4);
  if ( v32 )
  {
    v33 = 0;
    v34 = 0;
    do
    {
      if ( (v32 & 1) != 0 )
      {
        v35 = v34 + 1;
        v36 = stdout;
        if ( v34 )
        {
          fwrite(" | ", 1u, 3u, stdout);
          v36 = stdout;
        }
        result = fputs(v5[v33], v36);
        v34 = v35;
      }
      if ( a4 <= ++v33 )
        break;
      v32 >>= 1;
    }
    while ( v32 );
  }
  return result;
}
