unsigned int __fastcall sub_ECF4(int a1, unsigned int a2, unsigned __int8 *a3, int *a4)
{
  int v4; // lr
  int v6; // lr
  unsigned int v7; // r6
  int v8; // r12
  unsigned int v9; // r1
  int v10; // r8
  int v11; // r3
  unsigned __int8 *v12; // r4
  signed int v14; // r0
  unsigned int v15; // r9
  int v16; // r3
  unsigned int v17; // r0
  int v18; // r4
  int v19; // r3
  unsigned int v21; // r9
  unsigned int v22; // lr
  bool v23; // zf
  bool v24; // zf
  int v25; // r3
  unsigned int v26; // r1
  unsigned int v27; // r5
  unsigned int v28; // r1
  unsigned int v29; // r5
  int v30; // r3
  int v31; // r0
  __int64 v32; // r8
  __int64 *v33; // r2
  int v34; // r3
  int v35; // r3
  int v36; // t1
  const char *v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r2
  __int64 v40; // r8
  __int64 *v41; // r3
  int *v42; // r0
  unsigned int v43; // [sp+24h] [bp-10h] BYREF
  int v44; // [sp+28h] [bp-Ch] BYREF

  v4 = a2;
  if ( a2 )
    v4 = 1;
  if ( a1 )
    v4 = 0;
  v23 = v4 == 0;
  v43 = 0;
  v6 = 0;
  if ( v23 )
    v7 = a2;
  else
    v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = *a3;
  v44 = 0;
  v12 = a3 + 1;
  v14 = -1;
  while ( v11 )
  {
LABEL_10:
    switch ( v6 )
    {
      case 1:
        switch ( v11 )
        {
          case ' ':
            v11 = *v12;
            v9 |= 4u;
            ++v12;
            continue;
          case '#':
            v11 = *v12;
            v9 |= 8u;
            ++v12;
            continue;
          case '\'':
            v11 = *v12;
            v9 |= 0x20u;
            ++v12;
            continue;
          case '+':
            v11 = *v12;
            v9 |= 2u;
            ++v12;
            continue;
          case '-':
            v9 |= 1u;
            goto LABEL_16;
          case '0':
            v11 = *v12;
            v9 |= 0x10u;
            ++v12;
            continue;
          default:
            v6 = 2;
            continue;
        }
      case 2:
        v21 = (unsigned __int8)(v11 - 48);
        if ( v21 > 9 )
        {
          if ( v11 == 42 )
          {
            v8 = *a4;
            v6 = 3;
            v11 = *v12;
            ++a4;
            ++v12;
            if ( v8 < 0 )
            {
              v9 |= 1u;
              v8 = -v8;
            }
          }
          else
          {
            v6 = 3;
          }
          continue;
        }
        if ( v8 <= (int)((0x7FFFFFFF - v21) / 0xA) )
        {
          v11 = *v12;
          v8 = v21 + 10 * v8;
          ++v12;
          continue;
        }
LABEL_114:
        v16 = 1;
        v44 = 1;
        goto LABEL_18;
      case 3:
        if ( v11 != 46 )
          goto LABEL_28;
        v11 = *v12;
        v6 = 4;
        ++v12;
        continue;
      case 4:
        v15 = (unsigned __int8)(v11 - 48);
        if ( v14 != -1 )
        {
          if ( v15 > 9 )
            goto LABEL_80;
          if ( v14 > (int)((0x7FFFFFFF - v15) / 0xA) )
            goto LABEL_114;
          v14 = v15 + 10 * v14;
LABEL_16:
          v11 = *v12++;
          if ( !v11 )
            goto LABEL_17;
          goto LABEL_10;
        }
        if ( v15 <= 9 )
        {
          v14 = (unsigned __int8)(v11 - 48);
          goto LABEL_16;
        }
        v14 = 0;
LABEL_80:
        if ( v11 == 42 )
        {
          v31 = *a4;
          v6 = 5;
          v11 = *v12;
          ++a4;
          ++v12;
          v14 = v31 | (v31 >> 31);
        }
        else
        {
LABEL_28:
          v6 = 5;
        }
        break;
      case 5:
        switch ( v11 )
        {
          case 'L':
            v10 = v6;
            v11 = *v12;
            v6 = 6;
            ++v12;
            break;
          case 'h':
            v11 = *v12;
            v24 = v11 == 104;
            if ( v11 == 104 )
              v11 = v12[1];
            else
              ++v12;
            v6 = 6;
            if ( v24 )
            {
              v12 += 2;
              v10 = 1;
            }
            else
            {
              v10 = 2;
            }
            break;
          case 'j':
            v11 = *v12;
            v6 = 6;
            ++v12;
            v10 = 8;
            break;
          case 'l':
            v11 = *v12;
            v23 = v11 == 108;
            if ( v11 == 108 )
              v11 = v12[1];
            else
              ++v12;
            v6 = 6;
            if ( v23 )
            {
              v12 += 2;
              v10 = 4;
            }
            else
            {
              v10 = 3;
            }
            break;
          case 't':
            v11 = *v12;
            v6 = 6;
            ++v12;
            v10 = 7;
            break;
          case 'z':
            v6 = 6;
            v11 = *v12;
            v10 = 6;
            ++v12;
            break;
          default:
            v6 = 6;
            break;
        }
        continue;
      case 6:
        switch ( v11 )
        {
          case '%':
            v38 = v43++;
            if ( v43 < v7 )
              *(_BYTE *)(a1 + v38) = 37;
            break;
          case 'A':
          case 'F':
            v9 |= 0x40u;
            goto LABEL_74;
          case 'E':
            v9 |= 0x40u;
            goto LABEL_70;
          case 'G':
            v9 |= 0x40u;
            goto LABEL_65;
          case 'X':
            v9 |= 0x40u;
            goto LABEL_62;
          case 'a':
          case 'f':
LABEL_74:
            v30 = v8;
            v29 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            goto LABEL_71;
          case 'c':
            v39 = v43++;
            if ( v43 < v7 )
              v14 = *a4;
            ++a4;
            if ( v43 < v7 )
              *(_BYTE *)(a1 + v39) = v14;
            break;
          case 'd':
          case 'i':
            switch ( v10 )
            {
              case 1:
                LODWORD(v40) = *(char *)a4++;
                v40 = (int)v40;
                break;
              case 2:
                LODWORD(v40) = *(__int16 *)a4++;
                v40 = (int)v40;
                break;
              case 4:
              case 8:
                v41 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                a4 = (int *)(v41 + 1);
                v40 = *v41;
                break;
              case 6:
                v40 = (unsigned int)*a4++;
                break;
              default:
                LODWORD(v40) = *a4++;
                v40 = (int)v40;
                break;
            }
            sub_DC94(a1, &v43, v7, 10, v40, 0xAu, v8, v14, v9);
            break;
          case 'e':
LABEL_70:
            v9 |= 0x200u;
            v29 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            v30 = v8;
LABEL_71:
            sub_E104(COERCE_DOUBLE(__PAIR64__(&v43, a1)), v7, v30, v14, v9, &v44);
            v16 = v44;
            a4 = (int *)(v29 + 8);
            if ( v44 )
              goto LABEL_18;
            break;
          case 'g':
LABEL_65:
            v27 = ((unsigned int)a4 + 7) & 0xFFFFFFF8;
            v28 = v9 | 0x100;
            if ( !v14 )
              v14 = 1;
            sub_E104(COERCE_DOUBLE(__PAIR64__(&v43, a1)), v7, v8, v14, v28, &v44);
            v16 = v44;
            a4 = (int *)(v27 + 8);
            if ( !v44 )
              break;
            goto LABEL_18;
          case 'n':
            v36 = *a4++;
            v35 = v36;
            switch ( v10 )
            {
              case 1:
                *(_BYTE *)v35 = v43;
                break;
              case 2:
                *(_WORD *)v35 = v43;
                break;
              case 4:
              case 8:
                *(_DWORD *)v35 = v43;
                *(_DWORD *)(v35 + 4) = 0;
                break;
              default:
                *(_DWORD *)v35 = v43;
                break;
            }
            break;
          case 'o':
            v25 = 8;
            goto LABEL_63;
          case 'p':
            v34 = *a4++;
            if ( v34 )
              sub_DC94(a1, &v43, v7, v34, (unsigned int)v34, 0x10u, v8, v14, v9 | 0x88);
            else
              sub_DAF8(a1, &v43, v7, "(nil)", v8, -1, v9);
            break;
          case 's':
            v37 = (const char *)*a4++;
            sub_DAF8(a1, &v43, v7, v37, v8, v14, v9);
            break;
          case 'u':
            v25 = 10;
            goto LABEL_63;
          case 'x':
LABEL_62:
            v25 = 16;
LABEL_63:
            v26 = v9 | 0x80;
            switch ( v10 )
            {
              case 1:
                v32 = *(unsigned __int8 *)a4++;
                break;
              case 2:
                v32 = *(unsigned __int16 *)a4++;
                break;
              case 4:
              case 8:
                v33 = (__int64 *)(((unsigned int)a4 + 7) & 0xFFFFFFF8);
                a4 = (int *)(v33 + 1);
                v32 = *v33;
                break;
              case 7:
                LODWORD(v32) = *a4++;
                v32 = (int)v32;
                break;
              default:
                LODWORD(v32) = *a4++;
                v32 = (unsigned int)v32;
                break;
            }
            sub_DC94(a1, &v43, v7, v25, v32, v25, v8, v14, v26);
            break;
          default:
            break;
        }
        v6 = 0;
        v11 = *v12;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        ++v12;
        v14 = -1;
        continue;
      default:
        if ( v11 == 37 )
        {
          v6 = 1;
        }
        else
        {
          v22 = v43++;
          if ( v43 < v7 )
            *(_BYTE *)(a1 + v22) = v11;
          v6 = 0;
        }
        goto LABEL_16;
    }
  }
LABEL_17:
  v16 = v44;
LABEL_18:
  v17 = v43;
  if ( v43 >= v7 )
  {
    if ( v7 )
      *(_BYTE *)(a1 + v7 - 1) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + v43) = 0;
  }
  if ( v16 )
  {
    v18 = 75;
    goto LABEL_122;
  }
  if ( v17 > 0x7FFFFFFE )
  {
    v18 = 34;
LABEL_122:
    v42 = _errno_location();
    v19 = -1;
    *v42 = v18;
    return v19;
  }
  return v17;
}
