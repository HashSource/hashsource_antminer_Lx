void __fastcall __noreturn sub_89774(int a1, int a2)
{
  int *v4; // r0
  char *v5; // r0
  FILE *v6; // r2
  int v7; // r3
  unsigned int v8; // r0
  int v9; // r8
  int v10; // r3
  int v11; // r3
  int v12; // r3
  const char *v13; // r0
  FILE *v14; // r0
  int v15; // r0
  char *v16; // r1
  char *v17; // r2
  int v18; // r9
  _DWORD *v19; // r0
  int v20; // r3
  int v21; // r2
  int v22; // r12
  int v23; // r3
  int v24; // r0
  char *v25; // r3
  int v26; // r0
  __int16 v27; // r2
  int v28; // r9
  int v29; // r7
  int v30; // r3
  const char *v31; // r1
  char *s; // [sp+0h] [bp-24h] BYREF
  char dest[24]; // [sp+4h] [bp-20h] BYREF

  v4 = (int *)(a1 + 12);
  if ( a2 == 10064 )
  {
    byte_1063CC = 0;
    sub_8694C(v4, 0);
  }
  else
  {
    byte_1063CC = 0;
    sub_8694C(v4, 0);
    if ( a2 )
    {
      if ( *(int *)a1 >= 122880 )
        v5 = *(char **)(a1 + 112);
      else
        v5 = 0;
      v6 = (FILE *)option_usage_fp;
      if ( option_usage_fp )
      {
        v7 = *(_DWORD *)(a1 + 12);
        if ( (v7 & 0x100000) != 0 )
        {
LABEL_9:
          fprintf(v6, *(const char **)(a1 + 56), *(_DWORD *)(a1 + 28));
          v8 = *(_DWORD *)(a1 + 12);
          if ( ((v8 >> 14) & 1) != 0 )
          {
            if ( *(int *)a1 < 155648 )
            {
              v26 = *(_DWORD *)(a1 + 12) & 3;
              if ( v26 == 2 )
              {
                v25 = dest;
                strcpy(dest, "-h");
              }
              else if ( v26 == 3 || v26 == 1 )
              {
                v25 = dest;
                strcpy(dest, "--help");
              }
              else
              {
                v25 = dest;
                strcpy(dest, "help");
              }
            }
            else
            {
              v20 = *(_DWORD *)(a1 + 104);
              v21 = *(_DWORD *)(a1 + 68) + (v20 << 6);
              if ( *(_DWORD *)(v21 + 20) != 3 )
              {
                v22 = *(_DWORD *)(a1 + 100);
                v23 = v20 + 1;
                if ( v23 >= v22 )
LABEL_102:
                  sub_7CAC8((int)off_B7488[0]);
                while ( 1 )
                {
                  v21 += 64;
                  if ( *(_DWORD *)(v21 + 20) == 3 )
                    break;
                  if ( ++v23 == v22 )
                    goto LABEL_102;
                }
              }
              v24 = *(_DWORD *)(a1 + 12) & 3;
              if ( v24 == 2 )
              {
                dest[0] = 45;
                v27 = *(_WORD *)(v21 + 2);
                dest[2] = 0;
                v25 = dest;
                dest[1] = v27;
              }
              else if ( v24 == 3 || v24 == 1 )
              {
                v31 = *(const char **)(v21 + 52);
                *(_WORD *)dest = 11565;
                strncpy(&dest[2], v31, 0x14u);
                v25 = dest;
              }
              else
              {
                v25 = strncpy(dest, *(const char **)(v21 + 52), 0x14u);
              }
            }
            v9 = a2;
            fprintf((FILE *)option_usage_fp, off_B7524[0], *(_DWORD *)(a1 + 28), v25);
            goto LABEL_43;
          }
          s = 0;
          if ( (v8 & 0x1000) != 0 )
          {
            v9 = a2;
LABEL_13:
            v18 = sub_7D028(v8, &s);
            sprintf(byte_1063D0, "%%-%ds %%s\n", v18);
            fputc(10, (FILE *)option_usage_fp);
            goto LABEL_14;
          }
          v9 = a2;
          v18 = sub_7D190(v8, &s);
          sprintf(byte_1063D0, "%%-%ds %%s\n", v18);
          goto LABEL_55;
        }
      }
      else
      {
        v6 = stderr;
        v7 = *(_DWORD *)(a1 + 12);
        option_usage_fp = (int)stderr;
        if ( (v7 & 0x100000) != 0 )
          goto LABEL_9;
      }
      if ( !v5 )
        goto LABEL_9;
      v9 = a2;
LABEL_41:
      if ( (v7 & 0x2000) != 0 )
        sub_895C8(v5, 1, v6);
      else
        fputs(v5, v6);
      goto LABEL_43;
    }
  }
  if ( *(int *)a1 < 122880 )
    v5 = 0;
  else
    v5 = *(char **)(a1 + 108);
  v6 = (FILE *)option_usage_fp;
  if ( option_usage_fp )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v9 = v7 & 0x100000;
    if ( (v7 & 0x100000) != 0 )
      goto LABEL_51;
  }
  else
  {
    if ( byte_1062C4 )
      v6 = stderr;
    else
      v6 = stdout;
    v7 = *(_DWORD *)(a1 + 12);
    option_usage_fp = (int)v6;
    v9 = v7 & 0x100000;
    if ( (v7 & 0x100000) != 0 )
      goto LABEL_51;
  }
  if ( v5 )
    goto LABEL_41;
LABEL_51:
  fprintf(v6, *(const char **)(a1 + 56), *(_DWORD *)(a1 + 28));
  v8 = *(_DWORD *)(a1 + 12);
  s = 0;
  v9 = (v8 >> 12) & 1;
  if ( v9 )
  {
    v9 = 0;
    goto LABEL_13;
  }
  v18 = sub_7D190(v8, &s);
  sprintf(byte_1063D0, "%%-%ds %%s\n", v18);
  if ( !a2 )
  {
    v9 = 0;
    if ( (*(_DWORD *)(*(_DWORD *)(a1 + 68) + 16) & 0x200000) != 0 )
    {
LABEL_14:
      v10 = v18 + 15;
      if ( v18 + 15 < 0 )
        v10 = v18 + 22;
      v11 = 4 - (v10 >> 3);
      if ( v11 > 0 )
        dword_1063C8 = v11;
      sub_802A4((_DWORD *)a1, a2, (int)s);
      v12 = *(_DWORD *)(a1 + 12);
      if ( (v12 & 3) == 1 )
      {
        fputs(off_B7584[0], (FILE *)option_usage_fp);
        v12 = *(_DWORD *)(a1 + 12);
      }
      else if ( (v12 & 3) != 0 )
      {
        if ( (v12 & 3) == 3 )
        {
          fputs(off_B7570[0], (FILE *)option_usage_fp);
          v12 = *(_DWORD *)(a1 + 12);
          if ( (v12 & 0x20) == 0 )
          {
LABEL_23:
            if ( (v12 & 0x800) == 0 )
              goto LABEL_24;
LABEL_64:
            fputs(off_B75DC[0], (FILE *)option_usage_fp);
LABEL_24:
            v13 = *(const char **)(a1 + 60);
            if ( v13 )
              fputs(v13, (FILE *)option_usage_fp);
            if ( a2 )
              goto LABEL_27;
            v19 = *(_DWORD **)(a1 + 52);
            if ( v19 )
            {
              sub_83E3C(v19, *(const char **)(a1 + 36), *(const char **)(a1 + 24));
              if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
              {
LABEL_69:
                v14 = (FILE *)option_usage_fp;
LABEL_70:
                if ( byte_1063CC )
                {
                  v28 = *(_DWORD *)(a1 + 100);
                  v29 = *(_DWORD *)(a1 + 68);
                  fputc(10, v14);
                  fflush((FILE *)option_usage_fp);
                  do
                  {
                    v30 = (unsigned __int16)*(_DWORD *)(v29 + 16) >> 12;
                    if ( v30 == 2 || v30 == 4 )
                      (*(void (__fastcall **)(int, int))(v29 + 40))(1, v29);
                    --v28;
                    v29 += 64;
                  }
                  while ( v28 > 0 );
                  v14 = (FILE *)option_usage_fp;
                }
                if ( !*(_DWORD *)(a1 + 64) )
                {
LABEL_28:
                  if ( *(int *)a1 >= 139264 && *(_DWORD *)(a1 + 128) )
                  {
                    fputs(*(const char **)(a1 + 128), v14);
                    v14 = (FILE *)option_usage_fp;
                  }
                  else if ( *(_DWORD *)(a1 + 72) )
                  {
                    fprintf(v14, off_B75A8[0]);
                    v14 = (FILE *)option_usage_fp;
                  }
                  fflush(v14);
                  if ( ferror((FILE *)option_usage_fp) )
                  {
                    v15 = *(_DWORD *)(a1 + 28);
                    v16 = off_B7534[0];
                    if ( (struct _IO_FILE *)option_usage_fp != stderr )
                    {
LABEL_33:
                      v17 = off_B752C[0];
                      goto LABEL_46;
                    }
LABEL_45:
                    v17 = off_B7530[0];
LABEL_46:
                    sub_7CB20(v15, (int)v16, (int)v17);
                  }
LABEL_43:
                  fflush((FILE *)option_usage_fp);
                  if ( !ferror((FILE *)option_usage_fp) )
                    sub_7CA64(v9);
                  v15 = *(_DWORD *)(a1 + 28);
                  v16 = off_B7534[0];
                  if ( (struct _IO_FILE *)option_usage_fp == stdout )
                    goto LABEL_33;
                  goto LABEL_45;
                }
                fputs(*(const char **)(a1 + 64), v14);
LABEL_27:
                v14 = (FILE *)option_usage_fp;
                goto LABEL_28;
              }
            }
            else
            {
              v14 = (FILE *)option_usage_fp;
              if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
                goto LABEL_70;
              fputs(off_B75B0[0], (FILE *)option_usage_fp);
            }
            fprintf((FILE *)option_usage_fp, off_B7564[0], *(_DWORD *)(a1 + 32));
            goto LABEL_69;
          }
LABEL_63:
          fputs(off_B759C[0], (FILE *)option_usage_fp);
          if ( (*(_DWORD *)(a1 + 12) & 0x800) == 0 )
            goto LABEL_24;
          goto LABEL_64;
        }
      }
      else
      {
        fputs(off_B75A0[0], (FILE *)option_usage_fp);
        v12 = *(_DWORD *)(a1 + 12);
      }
      if ( (v12 & 0x20) == 0 )
        goto LABEL_23;
      goto LABEL_63;
    }
  }
LABEL_55:
  fputs(s, (FILE *)option_usage_fp);
  goto LABEL_14;
}
