_DWORD *sub_11784()
{
  _DWORD *v0; // r11
  int v1; // r9
  int v2; // r8
  char *v3; // r0
  const char *v4; // r10
  char *v5; // r0
  const char *v6; // r6
  char *v7; // r0
  const char *v8; // r7
  _DWORD *v9; // r5
  char *v10; // r0
  const char *v11; // r1
  char *v12; // r6
  FILE *v14; // r7
  FILE *v15; // r5
  DIR *v16; // r6
  int v17; // r0
  const char *v18; // r4
  FILE *v19; // r3
  char *v20; // r9
  char *v21; // r0
  int v22; // r9
  FILE *v23; // r2
  char *v24; // r0
  int *v25; // r4
  char *v26; // r0
  DIR *v27; // r9
  int v28; // r0
  int v29; // r12
  FILE *v30; // r3
  int v31; // lr
  const char *v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r4
  FILE *v36; // [sp+Ch] [bp-3B0h]
  FILE *v37; // [sp+Ch] [bp-3B0h]
  FILE *v38; // [sp+Ch] [bp-3B0h]
  FILE *v39; // [sp+Ch] [bp-3B0h]
  char *v40; // [sp+10h] [bp-3ACh]
  char *format; // [sp+14h] [bp-3A8h]
  FILE *stream; // [sp+18h] [bp-3A4h]
  int v43; // [sp+24h] [bp-398h] BYREF
  int v44; // [sp+28h] [bp-394h] BYREF
  char v45[20]; // [sp+2Ch] [bp-390h] BYREF
  char s[120]; // [sp+40h] [bp-37Ch] BYREF
  char s1[256]; // [sp+B8h] [bp-304h] BYREF
  char name[256]; // [sp+1B8h] [bp-204h] BYREF
  char v49[260]; // [sp+2B8h] [bp-104h] BYREF

  v0 = calloc(8u, 0x10u);
  if ( v0 )
  {
    stream = (FILE *)fopen64("/proc/bus/i2c", "r");
    if ( stream )
    {
      v1 = 0;
      v2 = 0;
      while ( 1 )
      {
        ++v2;
        if ( !fgets(s, 120, stream) )
          break;
        v3 = strrchr(s, 9);
        v4 = v3 + 1;
        *v3 = 0;
        format = (char *)sub_114AC(v3 + 1);
        v5 = strrchr(s, 9);
        v6 = v5 + 1;
        *v5 = 0;
        v36 = (FILE *)sub_114AC(v5 + 1);
        v7 = strrchr(s, 9);
        v8 = v7 + 1;
        *v7 = 0;
        v40 = (char *)v36 + sub_114AC(v7 + 1);
        _isoc99_sscanf(s, "i2c-%d", v49);
        if ( (v2 & 7) == 0 )
        {
          v0 = sub_11554(v0, v2);
          if ( !v0 )
            return 0;
        }
        v9 = &v0[v1];
        v10 = (char *)malloc((size_t)&v40[(_DWORD)format]);
        v11 = v6;
        v12 = v10;
        if ( !v10 )
          goto LABEL_11;
        v0[v1] = *(_DWORD *)v49;
        v1 += 4;
        v9[1] = strcpy(v10, v11);
        v9[2] = strcpy((char *)v36 + (_DWORD)v12, v8);
        v9[3] = strcpy(&v40[(_DWORD)v12], v4);
      }
      fclose(stream);
    }
    else
    {
      v14 = (FILE *)fopen64("/proc/mounts", "r");
      if ( v14 )
      {
        do
        {
          if ( !fgets(v49, 255, v14) )
          {
            fclose(v14);
            return v0;
          }
          ((void (*)(void))_isoc99_sscanf)();
        }
        while ( strcasecmp(s1, "sysfs") );
        v15 = 0;
        fclose(v14);
        strcat(name, "/class/i2c-dev");
        v16 = opendir(name);
        if ( v16 )
        {
LABEL_19:
          while ( 1 )
          {
            v17 = readdir64(v16);
            if ( !v17 )
              break;
            while ( *(_BYTE *)(v17 + 19) != 46
                 || *(_BYTE *)(v17 + 20) && (*(_BYTE *)(v17 + 20) != 46 || *(_BYTE *)(v17 + 21)) )
            {
              v18 = (const char *)(v17 + 19);
              if ( snprintf(v49, 0xFFu, "%s/%s/name", name, (const char *)(v17 + 19)) > 254 )
                goto LABEL_39;
              v19 = (FILE *)fopen64(v49, "r");
              if ( !v19 )
              {
                if ( snprintf(v49, 0xFFu, "%s/%s/device/name", name, v18) > 254 )
                  goto LABEL_39;
                v19 = (FILE *)fopen64(v49, "r");
                if ( !v19 )
                {
                  if ( snprintf(v49, 0xFFu, "%s/%s/device", name, v18) > 254 )
                  {
LABEL_39:
                    fprintf((FILE *)stderr, "%s: path truncated\n", v49);
                  }
                  else
                  {
                    v27 = opendir(v49);
                    if ( v27 )
                    {
                      while ( 1 )
                      {
                        v28 = readdir64(v27);
                        v29 = v28;
                        v30 = (FILE *)(v28 + 19);
                        if ( !v28 )
                          break;
                        v31 = *(unsigned __int8 *)(v28 + 19);
                        v32 = (const char *)(v28 + 19);
                        if ( v31 != 46 || *(_BYTE *)(v29 + 20) && (*(_BYTE *)(v29 + 20) != 46 || *(_BYTE *)(v29 + 21)) )
                        {
                          v39 = v30;
                          if ( !strncmp(v32, "i2c-", 4u) )
                          {
                            if ( snprintf(v49, 0xFFu, "%s/%s/device/%s/name", name, v18, v39) <= 254 )
                            {
                              v33 = fopen64(v49, "r");
                              if ( v33 )
                              {
                                v19 = (FILE *)v33;
                                goto LABEL_23;
                              }
                            }
                            else
                            {
                              fprintf((FILE *)stderr, "%s: path truncated\n", v49);
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_19;
                }
              }
LABEL_23:
              v37 = v19;
              v20 = fgets(s, 120, v19);
              fclose(v37);
              if ( !v20 )
              {
                fprintf((FILE *)stderr, "%s: read error\n", v49);
                goto LABEL_19;
              }
              v21 = strchr(s, 10);
              if ( v21 )
                *v21 = 0;
              if ( !_isoc99_sscanf(v18, "i2c-%d", &v43) )
                goto LABEL_19;
              if ( !strncmp(s, "ISA ", 4u) )
              {
                v22 = 1;
              }
              else
              {
                v34 = sub_11654(v43, v45, 0x14u, 1);
                v35 = v34;
                if ( v34 >= 0 )
                {
                  if ( ioctl(v34, 0x705u, &v44) >= 0 )
                  {
                    if ( (v44 & 1) != 0 )
                    {
                      v22 = 2;
                    }
                    else if ( (v44 & 0x7E0000) != 0 )
                    {
                      v22 = 3;
                    }
                    else
                    {
                      v22 = 0;
                    }
                  }
                  else
                  {
                    v22 = 4;
                  }
                  close(v35);
                }
                else
                {
                  v22 = 4;
                }
              }
              v23 = (FILE *)((char *)&v15->_flags + 1);
              if ( (((unsigned int)&v15->_flags + 1) & 7) == 0 )
              {
                v24 = sub_11554(v0, (int)&v15->_flags + 1);
                v23 = (FILE *)((char *)&v15->_flags + 1);
                v0 = v24;
                if ( !v24 )
                  return 0;
              }
              v38 = v23;
              v25 = &v0[4 * (_DWORD)v15];
              *v25 = v43;
              v26 = _strdup(s);
              v25[1] = (int)v26;
              if ( !v26 )
              {
LABEL_11:
                sub_1151C(v0);
                return 0;
              }
              v15 = v38;
              *((_QWORD *)v25 + 1) = *(_QWORD *)&off_125AC[2 * v22];
              v17 = readdir64(v16);
              if ( !v17 )
                goto LABEL_34;
            }
          }
LABEL_34:
          closedir(v16);
        }
      }
    }
  }
  return v0;
}
