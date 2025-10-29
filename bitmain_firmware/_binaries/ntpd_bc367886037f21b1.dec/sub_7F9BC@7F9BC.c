_DWORD *__fastcall sub_7F9BC(_DWORD *result, unsigned __int16 *a2, int a3)
{
  _DWORD *v4; // r4
  int *v6; // r10
  int v7; // r3
  int v8; // t1
  int *v9; // r10
  int v10; // r3
  int v11; // t1
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r3
  void (__fastcall *v17)(unsigned int, int); // r6
  bool v18; // zf
  size_t v19; // r10
  int v20; // r8
  int v21; // r7
  __int16 v22; // r3
  size_t v23; // r0
  int v24; // r8
  int v25; // r7
  __int16 v26; // r3
  int v27; // r3
  const char *v28; // r2
  char *v29; // r0
  int v30; // r3
  int v31; // t1
  const char *v32; // r3
  int v33; // r3
  char v34; // r2
  const char *v35; // [sp+14h] [bp-70h]
  char v36[12]; // [sp+20h] [bp-64h] BYREF
  _BYTE v37[80]; // [sp+2Ch] [bp-58h] BYREF

  v4 = result;
  if ( (result[3] & 0x40000) == 0 || a2[3] != 87 )
  {
    if ( !*((_DWORD *)a2 + 8) && !*((_DWORD *)a2 + 9) )
    {
      if ( !*((_DWORD *)a2 + 14) )
        goto LABEL_16;
      goto LABEL_15;
    }
    result = (_DWORD *)fputs(&ao_strs_strtable[dword_1063C8 + 203], (FILE *)option_usage_fp);
    v6 = (int *)*((_DWORD *)a2 + 8);
    if ( v6 )
    {
      if ( v6[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B75E0[0], *(_DWORD *)(v4[17] + (*v6 << 6) + 52));
      }
      else
      {
        fputs(off_B75E4[0], (FILE *)option_usage_fp);
        v7 = *v6;
        do
        {
          result = (_DWORD *)fprintf(
                               (FILE *)option_usage_fp,
                               &ao_strs_strtable[dword_1063C8 + 229],
                               *(_DWORD *)(v4[17] + (v7 << 6) + 52));
          v8 = v6[1];
          ++v6;
          v7 = v8;
        }
        while ( v8 != 0x8000 );
      }
      if ( !*((_DWORD *)a2 + 9) )
        goto LABEL_14;
      result = (_DWORD *)fputs(&ao_strs_strtable[dword_1063C8 + 217], (FILE *)option_usage_fp);
    }
    v9 = (int *)*((_DWORD *)a2 + 9);
    if ( v9 )
    {
      if ( v9[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B75B8[0], *(_DWORD *)(v4[17] + (*v9 << 6) + 52));
        if ( !*((_DWORD *)a2 + 14) )
        {
LABEL_16:
          v12 = *((_DWORD *)a2 + 4);
          v13 = (unsigned __int16)v12 >> 12;
          if ( v13 == 5 )
          {
            v17 = (void (__fastcall *)(unsigned int, int))*((_DWORD *)a2 + 10);
            v18 = v17 == 0;
            if ( v17 )
              v18 = v17 == optionNumericVal;
            if ( !v18 )
            {
              result = (_DWORD *)((int (__fastcall *)(int, unsigned __int16 *))v17)(1, a2);
              v12 = *((_DWORD *)a2 + 4);
            }
          }
          else if ( v13 == 7 )
          {
            result = (_DWORD *)(*((int (__fastcall **)(int, unsigned __int16 *))a2 + 10))(1, a2);
            if ( (*((_DWORD *)a2 + 4) & 0x800) == 0 )
              goto LABEL_19;
            goto LABEL_39;
          }
          if ( (v12 & 0x800) == 0 )
          {
LABEL_19:
            v14 = a2[4];
            if ( v14 != 0x8000 && a2[2] != v14 )
              return (_DWORD *)fprintf(
                                 (FILE *)option_usage_fp,
                                 &off_B7544[0][dword_1063C8],
                                 *(_DWORD *)(v4[17] + (v14 << 6) + 52));
            v15 = *((_DWORD *)a2 + 4);
            if ( (v15 & 0x100) != 0 && (v4[13] || v4[8]) && *a2 < (int)v4[26] )
            {
              result = (_DWORD *)fputs(&off_B758C[0][dword_1063C8], (FILE *)option_usage_fp);
              v15 = *((_DWORD *)a2 + 4);
            }
            if ( (unsigned __int16)v15 >> 12 == 4 )
            {
              result = (_DWORD *)fputs(&off_B757C[0][dword_1063C8], (FILE *)option_usage_fp);
            }
            else
            {
              v16 = a2[6];
              if ( a2[5] > 1u )
              {
                result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B7580[0][dword_1063C8]);
              }
              else if ( v16 != 1 )
              {
                if ( a2[6] )
                {
                  if ( v16 == 0xFFFF )
                    result = (_DWORD *)fputs(&off_B7588[0][dword_1063C8], (FILE *)option_usage_fp);
                  else
                    result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B75F4[0][dword_1063C8], a2[6]);
                }
                else
                {
                  result = (_DWORD *)fputs(&off_B75AC[0][dword_1063C8], (FILE *)option_usage_fp);
                }
              }
            }
            if ( (v4[3] & 3) == 0 && *((unsigned __int16 *)v4 + 49) == *a2 )
              return (_DWORD *)fputs(&off_B754C[0][dword_1063C8], (FILE *)option_usage_fp);
            return result;
          }
LABEL_39:
          result = (_DWORD *)fputs(&off_B755C[0][dword_1063C8], (FILE *)option_usage_fp);
          goto LABEL_19;
        }
LABEL_15:
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B7550[0][dword_1063C8]);
        goto LABEL_16;
      }
      fputs(off_B75B4[0], (FILE *)option_usage_fp);
      v10 = *v9;
      do
      {
        result = (_DWORD *)fprintf(
                             (FILE *)option_usage_fp,
                             &ao_strs_strtable[dword_1063C8 + 229],
                             *(_DWORD *)(v4[17] + (v10 << 6) + 52));
        v11 = v9[1];
        ++v9;
        v10 = v11;
      }
      while ( v11 != 0x8000 );
    }
LABEL_14:
    if ( !*((_DWORD *)a2 + 14) )
      goto LABEL_16;
    goto LABEL_15;
  }
  v19 = 0;
  v20 = result[26];
  v21 = result[17];
  fprintf((FILE *)option_usage_fp, &ao_strs_strtable[dword_1063C8 + 229], off_B7600);
  do
  {
    if ( (*(_DWORD *)(v21 + 16) & 0x6280000) == 0 )
    {
      v22 = *(_WORD *)(v21 + 2);
      if ( (v22 & 0x80) != 0 || (dword_9ED4C[(unsigned __int8)v22] & 0x4000) == 0 )
      {
        v23 = strlen(*(const char **)(v21 + 52));
        if ( v19 < v23 )
          v19 = v23;
      }
    }
    --v20;
    v21 += 64;
  }
  while ( v20 > 0 );
  result = (_DWORD *)sub_6BCB0((int)v36, 0xCu, "%%-%us %%s\n", v19 + 4);
  v24 = v4[26];
  v25 = v4[17];
  if ( dword_1063C8 )
    --dword_1063C8;
  do
  {
    if ( (*(_DWORD *)(v25 + 16) & 0x6280000) == 0 )
    {
      v26 = *(_WORD *)(v25 + 2);
      if ( (v26 & 0x80) != 0 || (dword_9ED4C[(unsigned __int8)v26] & 0x4000) == 0 )
      {
        sub_7DD9C(v4 + 3, (unsigned __int16 *)(v25 + 2), (const char **)&dword_1062F4, (const char **)&dword_1062F8);
        v27 = *(_DWORD *)(v25 + 16);
        if ( (v27 & 0x10000) != 0 )
        {
          v28 = (const char *)dword_1062E8;
        }
        else
        {
          switch ( (unsigned __int16)v27 >> 12 )
          {
            case 0:
              v28 = (const char *)dword_1062EC;
              break;
            case 1:
              v28 = (const char *)dword_1062C8;
              break;
            case 2:
              v28 = (const char *)dword_1062D8;
              break;
            case 3:
              v28 = (const char *)dword_1062E0;
              break;
            case 4:
              v28 = (const char *)dword_1062DC;
              break;
            case 5:
              v28 = (const char *)dword_1062D0;
              break;
            case 6:
              v28 = (const char *)dword_1062E4;
              break;
            case 7:
              v28 = (const char *)dword_1062D4;
              break;
            case 8:
              v28 = (const char *)dword_106300;
              break;
            default:
              fprintf(stderr, off_B74D8[0], v4[7], *(_DWORD *)(v25 + 52));
              sub_7CAC8((int)off_B7490[0]);
          }
        }
        v29 = (char *)dword_106334;
        if ( !dword_106334 )
        {
          v35 = v28;
          v29 = sub_7DEE8(12);
          v28 = v35;
        }
        v30 = *(unsigned __int8 *)v28;
        if ( v29[v30] )
        {
          do
          {
            v31 = *(unsigned __int8 *)++v28;
            v30 = v31;
          }
          while ( v29[v31] );
        }
        v18 = v30 == 0;
        v32 = *(const char **)(v25 + 52);
        if ( v18 )
          sub_6BCB0((int)v37, 0x50u, "%s", v32);
        else
          sub_6BCB0((int)v37, 0x50u, "%s=%s", v32, v28);
        fprintf((FILE *)option_usage_fp, v36, v37, *(_DWORD *)(v25 + 44));
        v33 = (unsigned __int16)*(_DWORD *)(v25 + 16) >> 12;
        if ( v33 == 2 || v33 == 4 )
        {
          if ( *(_DWORD *)(v25 + 40) )
            v34 = 1;
          else
            v34 = byte_1063CC;
          byte_1063CC = v34;
        }
        result = (_DWORD *)sub_7F9BC(v4, v25, a3);
      }
    }
    --v24;
    v25 += 64;
  }
  while ( v24 > 0 );
  return result;
}
