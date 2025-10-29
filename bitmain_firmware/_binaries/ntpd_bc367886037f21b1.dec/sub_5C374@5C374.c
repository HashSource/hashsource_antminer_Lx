__int16 *__fastcall sub_5C374(__int16 *result)
{
  int v1; // r12
  int v2; // lr
  int v3; // r9
  __int16 *v4; // r4
  _BYTE **v5; // r5
  int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r3
  __int16 *i; // r4
  int v11; // t1
  bool v12; // zf
  char *v13; // r3
  int v14; // r3
  bool v15; // zf
  unsigned int v16; // r0
  char *v17; // r10
  unsigned int v18; // r11
  __int16 *v19; // r10
  char v20; // r3
  unsigned int v21; // r4
  char v22; // r3
  int v23; // r2
  const char *v24; // r3
  int v25; // r1
  int v26; // r3
  char *v27; // r2
  char v28; // r3
  int v29; // r3
  const unsigned __int16 **v30; // r0
  int v31; // r10
  unsigned int v32; // r4
  char v33; // r7
  unsigned int v34; // r10
  bool v35; // cc
  int v36; // r3
  bool v37; // zf
  int v38; // r3
  int v39; // r7
  int v40; // r3
  int v41; // r3
  _BYTE *v42; // r10
  int v43; // r11
  int v44; // r2
  _BYTE *v45; // r7
  int v46; // r1
  int v47; // r1
  int v48; // r3
  char v49; // r3
  char v50; // r3
  int v51; // r3
  _BYTE *v52; // r0
  _BYTE *v53; // r1
  int v54; // r12
  __int64 v55; // r0
  int v56; // r3
  unsigned int v57; // r4
  struct tm *v58; // r0
  struct tm *v59; // r4
  int v60; // r3
  int tm_mday; // r2
  int v62; // r0
  int v63; // r0
  __int64 v64; // r2
  __int16 *v65; // [sp+4h] [bp-48h]
  int v66; // [sp+Ch] [bp-40h] BYREF
  time_t v67[2]; // [sp+10h] [bp-3Ch] BYREF
  struct tm tp; // [sp+18h] [bp-34h] BYREF

  v3 = *((_DWORD *)result + 1);
  v4 = result;
  v5 = *(_BYTE ***)(v3 + 84);
  v6 = (int *)*v5;
  if ( *((_DWORD *)*v5 + 6)
    && !*((_BYTE *)v6 + 31)
    && !*((_BYTE *)v6 + 30)
    && !*((_BYTE *)v6 + 29)
    && !*((_BYTE *)v6 + 28) )
  {
    result = (__int16 *)sub_5C130(*v5, "g\r");
  }
  v7 = (int)v5[46];
  v8 = *((_DWORD *)v4 + 21);
  v9 = *((unsigned __int8 *)v4 + 88);
  if ( *((_BYTE *)v5 + 56) == 111 )
  {
    v15 = v7 == 1;
    if ( v7 == 1 )
      v15 = v9 == 13;
    if ( v15 )
    {
      if ( v8 > 0 )
        goto LABEL_12;
      return result;
    }
    v1 = v7 + v8 - 1;
    if ( v1 > 0 )
    {
      if ( v1 > 16 )
        goto LABEL_77;
      v16 = *((_DWORD *)v4 + 19);
      v2 = *v6;
      v17 = &aV1320030221[4 * v1];
      v1 = *((_DWORD *)v4 + 18);
      v18 = *((_DWORD *)v17 + 4);
      v19 = (__int16 *)v6[1];
      if ( v16 < v18 )
        --v1;
      v65 = (__int16 *)(v16 - v18);
      if ( !(v2 | (unsigned int)v19) || v2 + 0x80000000 > v1 + 0x80000000 )
        goto LABEL_38;
      result = (__int16 *)(v16 - v18);
      v37 = v65 == v19;
      if ( v65 <= v19 )
        v37 = v1 == v2;
      if ( v37 )
      {
LABEL_38:
        result = v65;
        *v6 = v1;
        v6[1] = (int)v65;
      }
    }
  }
  if ( v7 > 15 )
  {
LABEL_9:
    v5[46] = 0;
    return result;
  }
  if ( v8 > 0 )
  {
LABEL_12:
    result = (__int16 *)(-87 - (_DWORD)v4);
    for ( i = v4 + 44; ; i = (__int16 *)((char *)i + 1) )
    {
      v12 = v9 == 13;
      if ( v9 != 13 )
        v12 = v9 == 104;
      if ( v12 )
      {
        v7 = (int)v5[46];
      }
      else
      {
        v1 = v7 + 1;
        v2 = (int)v5 + v7;
        v5[46] = (_BYTE *)(v7 + 1);
      }
      if ( !v12 )
      {
        v7 = v1;
        *(_BYTE *)(v2 + 56) = v9;
      }
      v12 = v9 == 111;
      v13 = (char *)i + (_DWORD)result;
      if ( v12 && v7 == 1 )
      {
        v6[1] = 0;
        *v6 = 0;
        if ( v8 <= (int)v13 )
        {
          v14 = *((unsigned __int8 *)v5 + 56);
          if ( v14 == 103 )
            return result;
LABEL_41:
          if ( v14 != 111 )
            goto LABEL_77;
          if ( v7 <= 15 )
            return result;
          if ( !*(_QWORD *)v6 )
          {
            v5[46] = (_BYTE *)(*v6 | v6[1]);
            return sub_3918C((__int16 *)v3, 2);
          }
          v26 = v6[3];
          v27 = (char *)v5 + v7;
          v27[57] = 0;
          v28 = v26 == -1 ? 54 : v26 + 48;
          v27[56] = v28;
          v29 = *((unsigned __int8 *)v5 + 56);
          v5[52] = 0;
          if ( v29 != 111 )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 57, v5 + 49) )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 59, v5 + 50) )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 61, v5 + 51) )
            goto LABEL_77;
          v30 = _ctype_b_loc();
          v31 = *((unsigned __int8 *)v5 + 63);
          if ( ((*v30)[v31] & 0x800) == 0 )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 64, v5 + 48) )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 66, &v66) )
            goto LABEL_77;
          if ( !sub_5BD38((unsigned __int8 *)v5 + 68, v5 + 47) )
            goto LABEL_77;
          v32 = *((unsigned __int8 *)v5 + 70);
          v33 = *((_BYTE *)v5 + 71);
          if ( (unsigned int)v5[49] > 0x17 || (unsigned int)v5[50] > 0x3B )
            goto LABEL_77;
          v34 = v31 - 49;
          v35 = v34 > 6;
          if ( v34 <= 6 )
            v35 = (unsigned int)v5[51] > 0x3C;
          if ( v35
            || (unsigned int)(v5[48] - 1) > 0x1E
            || (unsigned int)(v66 - 1) > 0xB
            || (v36 = (int)v5[47], (unsigned int)v36 > 0x63)
            || !*(_DWORD *)(v3 + 76) && ((v32 >> 1) & 1) != (((v32 ^ 4) >> 2) & 1) )
          {
LABEL_77:
            v5[46] = 0;
            return sub_3918C((__int16 *)v3, 2);
          }
          if ( (*((_BYTE *)v5 + 71) & 8) != 0 )
          {
            sub_64A18(5, "ARCRON: battery low");
            v36 = (int)v5[47];
          }
          if ( v36 <= 97 )
          {
            v36 += 100;
            v5[47] = (_BYTE *)v36;
          }
          v38 = v36 + 1900;
          v5[47] = (_BYTE *)v38;
          if ( v38 >= 2096 )
            sub_64A18(5, "ARCRON: fix me!  EITHER YOUR DATE IS BADLY WRONG or else I will break soon!");
          v39 = v33 & 7;
          *((_BYTE *)v5 + 40) = 0;
          v40 = v6[2];
          if ( v39 == 3 )
          {
            if ( v40 != 3 )
              sub_64A18(5, "ARCRON: signal acquired");
          }
          else if ( v39 != v40 )
          {
            sub_64A18(5, "ARCRON: signal lost");
            *((_BYTE *)v5 + 40) = 3;
            v6[2] = v39;
            v5[46] = 0;
            return sub_3918C((__int16 *)v3, 3);
          }
          v41 = *(_DWORD *)(v3 + 76);
          v42 = v5[47];
          v6[2] = v39;
          v43 = v66;
          v44 = (int)v5[48];
          if ( !v41 )
          {
            v45 = (_BYTE *)(v44 + *(_DWORD *)&aV1320030221[4 * v66 + 80]);
            v5[48] = v45;
            if ( ((unsigned __int8)v42 & 3) == 0 )
            {
              sub_8B734(v42, 100);
              if ( v46 || (sub_8B734(v42, 400), !v47) )
              {
                if ( v43 > 2 )
                  v5[48] = v45 + 1;
              }
            }
            if ( (v32 & 2) != 0 )
            {
              v48 = (int)(v5[49] - 1);
              v5[49] = (_BYTE *)v48;
              if ( v48 < 0 )
              {
                v56 = (int)v5[48];
                v5[49] = (_BYTE *)(&dword_14 + 3);
                v5[48] = (_BYTE *)--v56;
                if ( v56 < 0 )
                  goto LABEL_120;
              }
            }
            v49 = *((_BYTE *)v5 + 768);
LABEL_111:
            if ( v6[3] == -1 )
            {
              *(_BYTE *)(v3 + 95) = -4;
              goto LABEL_117;
            }
LABEL_113:
            if ( (v49 & 4) != 0 )
              v50 = -5;
            else
              v50 = -4;
            *(_BYTE *)(v3 + 95) = v50;
LABEL_117:
            v51 = *((unsigned __int8 *)v5 + 768);
            v52 = (_BYTE *)*v6;
            v53 = (_BYTE *)v6[1];
            if ( v6[9] != v51 )
              v6[9] = v51;
            v5[58] = v52;
            v5[59] = v53;
            if ( sub_399D0(v5) )
            {
              sub_41CA4(v3 + 16, (const char *)v5 + 56);
              return (__int16 *)sub_39A1C(v3);
            }
LABEL_120:
            v5[46] = 0;
            return sub_3918C((__int16 *)v3, 6);
          }
          if ( ((_BYTE)v5[192] & 1) != 0 )
          {
            memset(&tp.tm_wday, 0, 20);
            tp.tm_year = (int)(v42 - 1900);
            v54 = (int)v5[49];
            v55 = *((_QWORD *)v5 + 25);
            tp.tm_mon = v66 - 1;
            tp.tm_mday = v44;
            tp.tm_hour = v54;
            tp.tm_sec = HIDWORD(v55);
            tp.tm_min = v55;
            switch ( v41 )
            {
              case 2:
                goto LABEL_139;
              case 3:
                v57 = v32 & 3;
                if ( v57 )
                {
                  if ( v57 > 2 )
                    tp.tm_isdst = 1;
                  else
                    tp.tm_isdst = -1;
                }
                break;
              case 1:
LABEL_139:
                tp.tm_isdst = v32 & 2;
                break;
              default:
                return (__int16 *)sub_64A18(5, "ARCRON: Invalid mode %d", v41);
            }
            v67[0] = mktime(&tp);
            v58 = gmtime(v67);
            v59 = v58;
            if ( !v58 )
            {
              v5[46] = 0;
              return sub_3918C((__int16 *)v3, 3);
            }
            v60 = v58->tm_mon + 1;
            tm_mday = v58->tm_mday;
            v62 = v58->tm_year + 1888;
            v66 = v60;
            v62 += 12;
            v5[47] = (_BYTE *)v62;
            v63 = sub_6E898(v62, v60, tm_mday);
            LODWORD(v64) = v59->tm_min;
            HIDWORD(v64) = v59->tm_sec;
            v5[49] = (_BYTE *)v59->tm_hour;
            *((_QWORD *)v5 + 25) = v64;
            v5[48] = (_BYTE *)v63;
          }
          else
          {
            v5[48] = (_BYTE *)sub_6E898(v42, v66, v44);
          }
          v49 = *((_BYTE *)v5 + 768);
          if ( !*(_DWORD *)(v3 + 76) || v39 != 3 || ((_BYTE)v5[192] & 2) == 0 )
            goto LABEL_111;
          goto LABEL_113;
        }
      }
      else
      {
        if ( v8 <= (int)v13 )
          break;
        if ( v7 > 15 )
          goto LABEL_40;
      }
      v11 = *((unsigned __int8 *)i + 1);
      v9 = v11;
    }
  }
  if ( !v7 )
    return result;
LABEL_40:
  v14 = *((unsigned __int8 *)v5 + 56);
  if ( v14 != 103 )
    goto LABEL_41;
  if ( v7 > 2 )
  {
    v20 = *((_BYTE *)v5 + 58);
    if ( (v20 & 0x70) == 0x30 )
    {
      v21 = v20 & 0xF;
      if ( v21 <= 5 )
      {
        v22 = *((_BYTE *)v5 + 57);
        if ( (v22 & 0x70) == 0x30 )
        {
          if ( (v22 & 0x7F) == 0x33 )
          {
            if ( v6[4] < (unsigned int)current_time )
            {
              sub_5F334(v67);
              sub_62D6C(v67[0]);
              dword_105F10 = 0;
              v6[4] = current_time + 65 - LOBYTE(tp.tm_hour);
              dword_105F14 = 0;
            }
            dword_105F10 += v21;
            result = (__int16 *)sub_8B4A0(dword_105F10, ++dword_105F14);
            dword_105F18 = (int)result;
          }
          else if ( v6[6] )
          {
            v23 = dword_105F18;
            v12 = dword_105F18 == -1;
            v6[3] = dword_105F18;
            if ( v12 )
              v24 = "UNKNOWN, will use clock anyway";
            else
              v24 = v23 > 2 ? "OK, will use clock" : "TOO POOR, will not use clock";
            result = (__int16 *)sub_64A18(5, "ARCRON: sync finished, signal quality %d: %s", v23, v24);
            v25 = v6[3];
            v6[6] = 0;
            dword_105F18 = 0;
            dword_105F10 = 0;
            dword_105F14 = 0;
            if ( v25 <= 2 )
              v6[5] = current_time + 1620;
          }
          goto LABEL_9;
        }
      }
    }
  }
  return result;
}
