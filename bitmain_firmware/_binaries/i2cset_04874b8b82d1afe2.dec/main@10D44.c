void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // r2
  int v4; // r5
  int v6; // r1
  int v7; // r9
  int v8; // lr
  int v9; // r8
  int v10; // r7
  int v11; // r4
  const char *i; // r11
  int v13; // r10
  unsigned int v14; // r0
  unsigned int v15; // r10
  char *v16; // r6
  size_t v17; // r0
  unsigned int v18; // r2
  int v19; // r1
  int v20; // r6
  size_t v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r4
  _BOOL4 v25; // r3
  size_t v26; // r0
  unsigned int v27; // r2
  int v28; // r0
  char *v29; // r1
  int v30; // r2
  int v31; // r0
  int v32; // r5
  int byte; // r0
  int v34; // r1
  size_t v35; // r0
  int v36; // r0
  int v37; // r2
  size_t v38; // r0
  size_t v39; // r0
  size_t v40; // r0
  _BOOL4 v41; // r2
  bool v42; // zf
  size_t v43; // r0
  const char **v44; // r4
  const char *v45; // t1
  int v46; // r0
  int v47; // r3
  int v48; // r0
  int word_data; // r7
  int v50; // r3
  int v51; // r1
  FILE *v52; // r4
  int *v53; // r0
  char *v54; // r0
  FILE *v55; // r4
  int *v56; // r0
  char *v57; // r0
  bool v58; // zf
  const char *v59; // r2
  const char *v60; // r3
  const char *v61; // r2
  int v62; // r5
  const char *j; // r4
  int v64; // r2
  const char *v65; // r2
  FILE *v66; // r4
  int *v67; // r0
  char *v68; // r0
  int status; // [sp+18h] [bp-5Ch]
  int statusa; // [sp+18h] [bp-5Ch]
  int v71; // [sp+1Ch] [bp-58h]
  int v72; // [sp+1Ch] [bp-58h]
  char **v73; // [sp+20h] [bp-54h]
  int v74; // [sp+20h] [bp-54h]
  const char **v75; // [sp+24h] [bp-50h]
  int v76; // [sp+28h] [bp-4Ch]
  int v77; // [sp+2Ch] [bp-48h]
  int v78; // [sp+2Ch] [bp-48h]
  char *endptr; // [sp+34h] [bp-40h] BYREF
  int v80; // [sp+38h] [bp-3Ch] BYREF
  char s[20]; // [sp+3Ch] [bp-38h] BYREF
  unsigned __int8 v82[36]; // [sp+50h] [bp-24h] BYREF

  if ( a1 > 1 )
  {
    v3 = a2[1];
    v4 = a1;
    if ( *v3 == 45 )
    {
      v6 = 0;
      a1 = 1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      i = 0;
      do
      {
        switch ( v3[1] )
        {
          case 'V':
            a1 = v11;
            v8 = 1;
            break;
          case 'a':
            a1 = v11;
            v6 = 1;
            break;
          case 'f':
            a1 = v11;
            v10 = 1;
            break;
          case 'm':
            v22 = v11 + 2;
            if ( v22 < v4 )
              i = a2[v22];
            break;
          case 'r':
            a1 = v11;
            v7 = 1;
            break;
          case 'y':
            a1 = v11;
            v9 = 1;
            break;
          default:
            v23 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v3);
            sub_11BAC(v23);
        }
        v11 = a1 + 1;
        a1 += 2;
        if ( a1 >= v4 )
          break;
        v3 = a2[a1];
      }
      while ( *v3 == 45 );
      if ( v8 )
      {
        fprintf((FILE *)stderr, "i2cset version %s\n", "4.1");
        exit(0);
      }
    }
    else
    {
      i = 0;
      v11 = 0;
      v10 = 0;
      v6 = 0;
      v9 = 0;
      v7 = 0;
    }
    if ( v11 + 3 < v4 )
    {
      status = v6;
      v13 = v11 + 1;
      a1 = sub_12498(a2[v13]);
      v71 = a1;
      if ( a1 >= 0 )
      {
        v73 = &a2[v13];
        a1 = sub_11CC8(a2[v13 + 1], status);
        statusa = a1;
        if ( a1 >= 0 )
        {
          v75 = (const char **)&a2[v13 + 2];
          v14 = strtol(*v75, &endptr, 0);
          v15 = v14;
          if ( !*endptr && v14 <= 0xFF )
          {
            if ( v11 + 4 == v4 )
            {
              v20 = 1;
              v24 = -1;
              v76 = (unsigned __int8)*endptr;
              goto LABEL_41;
            }
            v77 = v11 + 5;
            if ( v11 + 5 == v4 )
            {
              v29 = v73[3];
              if ( *v29 == 99 )
              {
                v30 = (unsigned __int8)v29[1];
                if ( !v29[1] || v30 == 112 && !v29[2] )
                {
                  v20 = 1;
                  v24 = -1;
                  v76 = v30 == 112;
                  goto LABEL_41;
                }
                v20 = 2;
                v76 = 0;
              }
              else
              {
                v20 = 2;
                v76 = (unsigned __int8)*endptr;
              }
LABEL_91:
              v36 = strtol(v73[3], &endptr, 0);
              if ( *endptr )
                v37 = 1;
              else
                v37 = (unsigned int)v36 >> 31;
              v24 = v36;
              if ( v37 )
              {
LABEL_95:
                v38 = fwrite("Error: Data value invalid!\n", 1u, 0x1Bu, (FILE *)stderr);
                sub_11BAC(v38);
              }
              v41 = v20 == 2;
              if ( v36 <= 255 )
                v41 = 0;
              if ( v41 )
                goto LABEL_117;
              v42 = v36 == 0x10000;
              if ( v36 >= 0x10000 )
                v42 = v20 == 3;
              if ( v42 )
              {
LABEL_117:
                v43 = fwrite("Error: Data value out of range!\n", 1u, 0x20u, (FILE *)stderr);
                sub_11BAC(v43);
              }
LABEL_41:
              if ( !i )
              {
                v74 = (int)i;
                goto LABEL_56;
              }
              v74 = strtol(i, &endptr, 0);
              v25 = v74 == 0;
              if ( *endptr )
                v25 = 1;
              if ( v25 )
              {
                v26 = fwrite("Error: Data value mask invalid!\n", 1u, 0x20u, (FILE *)stderr);
                sub_11BAC(v26);
              }
              if ( v20 == 3 )
              {
                if ( v74 >= 0x10000 )
                  goto LABEL_89;
              }
              else if ( v74 > 255 )
              {
LABEL_89:
                v35 = fwrite("Error: Data value mask out of range!\n", 1u, 0x25u, (FILE *)stderr);
                sub_11BAC(v35);
              }
              i = 0;
              goto LABEL_56;
            }
            v16 = (&a2[v4])[-1];
            v17 = strlen(v16);
            if ( v17 > 2 )
              goto LABEL_51;
            if ( v17 == 2 )
            {
              v19 = (unsigned __int8)v16[1];
              if ( v19 != 112 )
                goto LABEL_51;
              v27 = (unsigned __int8)*v16;
              if ( v27 != 105 )
              {
                if ( v27 > 0x69 )
                {
                  if ( v27 == 115 )
                    goto LABEL_105;
                  if ( v27 == 119 )
                    goto LABEL_25;
                  goto LABEL_51;
                }
                if ( v27 != 98 )
                  goto LABEL_51;
LABEL_99:
                v20 = 2;
                v76 = v19 == 112;
LABEL_26:
                if ( v11 + 6 != v4 )
                  goto LABEL_27;
                goto LABEL_91;
              }
            }
            else
            {
              v18 = (unsigned __int8)*v16;
              if ( v18 != 105 )
              {
                if ( v18 > 0x69 )
                {
                  if ( v18 == 115 )
                  {
                    v19 = (unsigned __int8)v16[1];
LABEL_105:
                    v20 = 5;
                    v76 = v19 == 112;
                    goto LABEL_106;
                  }
                  if ( v18 == 119 )
                  {
                    v19 = (unsigned __int8)v16[1];
LABEL_25:
                    v20 = 3;
                    v76 = v19 == 112;
                    goto LABEL_26;
                  }
LABEL_51:
                  v28 = fprintf((FILE *)stderr, "Error: Invalid mode '%s'!\n", v16);
                  sub_11BAC(v28);
                }
                if ( v18 != 98 )
                  goto LABEL_51;
                v19 = (unsigned __int8)v16[1];
                goto LABEL_99;
              }
              if ( v16[1] != 112 )
              {
                v20 = 8;
                v76 = 0;
LABEL_106:
                if ( i )
                {
                  v39 = fwrite("Error: Mask not supported for block writes!\n", 1u, 0x2Cu, (FILE *)stderr);
                  sub_11BAC(v39);
                }
                if ( v11 + 37 >= v4 )
                {
                  v44 = v75;
                  for ( i = 0; (int)&i[v77] < v4; ++i )
                  {
                    v45 = v44[1];
                    ++v44;
                    v46 = strtol(v45, &endptr, 0);
                    if ( *endptr )
                      v47 = 1;
                    else
                      v47 = (unsigned int)v46 >> 31;
                    if ( v47 )
                      goto LABEL_95;
                    if ( v46 > 255 )
                      goto LABEL_117;
                    v82[(_DWORD)i] = v46;
                  }
                  v24 = -1;
                  v74 = 0;
LABEL_56:
                  v31 = sub_11D80(v71, s, 0x14u);
                  v32 = v31;
                  if ( v31 >= 0 )
                  {
                    if ( ioctl(v31, 0x705u, &v80) < 0 )
                    {
                      v66 = (FILE *)stderr;
                      v67 = _errno_location();
                      v68 = strerror(*v67);
                      fprintf(v66, "Error: Could not get the adapter functionality matrix: %s\n", v68);
                    }
                    else
                    {
                      switch ( v20 )
                      {
                        case 1:
                          if ( (v80 & 0x40000) != 0 )
                            goto LABEL_59;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                          break;
                        case 2:
                          if ( (v80 & 0x100000) != 0 )
                            goto LABEL_59;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write byte");
                          break;
                        case 3:
                          if ( (v80 & 0x400000) != 0 )
                            goto LABEL_59;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write word");
                          break;
                        case 5:
                          if ( (v80 & 0x2000000) != 0 )
                            goto LABEL_59;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus block write");
                          break;
                        case 8:
                          if ( (v80 & 0x8000000) != 0 )
                          {
LABEL_59:
                            if ( v76 && (v80 & 9) == 0 )
                              fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
                            if ( !sub_125EC(v32, statusa, v10) )
                            {
                              if ( !v9 )
                              {
                                fwrite(
                                  "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                                  1u,
                                  0x4Bu,
                                  (FILE *)stderr);
                                if ( (unsigned int)(statusa - 80) <= 7 )
                                {
                                  v72 = 1;
                                  fwrite(
                                    "DANGEROUS! Writing to a serial EEPROM on a memory DIMM\n"
                                    "may render your memory USELESS and make your system UNBOOTABLE!\n",
                                    1u,
                                    0x77u,
                                    (FILE *)stderr);
                                }
                                else
                                {
                                  v72 = 0;
                                }
                                fprintf(
                                  (FILE *)stderr,
                                  "I will write to device file %s, chip address 0x%02x, data address\n0x%02x, ",
                                  s,
                                  statusa,
                                  v15);
                                if ( v20 == 1 )
                                {
                                  fwrite("no data.\n", 1u, 9u, (FILE *)stderr);
                                }
                                else
                                {
                                  v58 = v20 == 8;
                                  if ( v20 != 8 )
                                    v58 = v20 == 5;
                                  if ( v58 )
                                  {
                                    fwrite("data", 1u, 4u, (FILE *)stderr);
                                    v78 = v32;
                                    v62 = v24;
                                    for ( j = 0; j != i; ++j )
                                    {
                                      v64 = v82[(_DWORD)j];
                                      fprintf((FILE *)stderr, " 0x%02x", v64);
                                    }
                                    v65 = "smbus block";
                                    if ( v20 != 5 )
                                      v65 = "i2c block";
                                    v24 = v62;
                                    v32 = v78;
                                    fprintf((FILE *)stderr, ", mode %s.\n", v65);
                                  }
                                  else
                                  {
                                    v59 = "word";
                                    if ( v20 == 2 )
                                      v59 = "byte";
                                    if ( v74 )
                                      v60 = " (masked)";
                                    else
                                      v60 = "";
                                    fprintf((FILE *)stderr, "data 0x%02x%s, mode %s.\n", v24, v60, v59);
                                  }
                                }
                                if ( v76 )
                                  fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
                                v61 = "Y/n";
                                if ( v72 )
                                  v61 = "y/N";
                                fprintf((FILE *)stderr, "Continue? [%s] ", v61);
                                fflush((FILE *)stderr);
                                if ( !sub_12660(v72 ^ 1) )
                                {
                                  fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                  exit(0);
                                }
                              }
                              if ( v74 )
                              {
                                if ( v20 == 1 )
                                {
                                  byte = i2c_smbus_read_byte(v32);
                                }
                                else if ( v20 == 3 )
                                {
                                  byte = i2c_smbus_read_word_data(v32, (unsigned __int8)v15);
                                }
                                else
                                {
                                  byte = i2c_smbus_read_byte_data(v32, (unsigned __int8)v15);
                                }
                                if ( byte < 0 )
                                {
                                  fwrite("Error: Failed to read old value\n", 1u, 0x20u, (FILE *)stderr);
                                  exit(1);
                                }
                                v24 = (v24 ^ byte) & v74 ^ byte;
                                if ( !v9 )
                                {
                                  v34 = v20 == 3 ? 4 : 2;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\n",
                                    v34,
                                    byte,
                                    v34,
                                    v74,
                                    v34,
                                    v24,
                                    v15);
                                  fwrite("Continue? [Y/n] ", 1u, 0x10u, (FILE *)stderr);
                                  fflush((FILE *)stderr);
                                  if ( !sub_12660(1) )
                                  {
                                    fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                    exit(0);
                                  }
                                }
                              }
                              if ( v76 && ioctl(v32, 0x708u, 1) < 0 )
                              {
                                v55 = (FILE *)stderr;
                                v56 = _errno_location();
                                v57 = strerror(*v56);
                                fprintf(v55, "Error: Could not set PEC: %s\n", v57);
                              }
                              else
                              {
                                switch ( v20 )
                                {
                                  case 1:
                                    v48 = i2c_smbus_write_byte(v32, (unsigned __int8)v15);
                                    break;
                                  case 3:
                                    v48 = i2c_smbus_write_word_data(v32, (unsigned __int8)v15, (unsigned __int16)v24);
                                    break;
                                  case 5:
                                    v48 = i2c_smbus_write_block_data(v32, (unsigned __int8)v15, (unsigned __int8)i, v82);
                                    break;
                                  case 8:
                                    v48 = i2c_smbus_write_i2c_block_data(
                                            v32,
                                            (unsigned __int8)v15,
                                            (unsigned __int8)i,
                                            v82);
                                    break;
                                  default:
                                    v48 = i2c_smbus_write_byte_data(v32, (unsigned __int8)v15, (unsigned __int8)v24);
                                    break;
                                }
                                if ( v48 < 0 )
                                {
                                  fwrite("Error: Write failed\n", 1u, 0x14u, (FILE *)stderr);
                                  close(v32);
                                  exit(1);
                                }
                                if ( !v76 || ioctl(v32, 0x708u, 0) >= 0 )
                                {
                                  if ( v7 )
                                  {
                                    if ( v20 == 1 )
                                    {
                                      v24 = v15;
                                      word_data = i2c_smbus_read_byte(v32);
                                    }
                                    else if ( v20 == 3 )
                                    {
                                      word_data = i2c_smbus_read_word_data(v32, (unsigned __int8)v15);
                                    }
                                    else
                                    {
                                      word_data = i2c_smbus_read_byte_data(v32, (unsigned __int8)v15);
                                    }
                                    close(v32);
                                    if ( word_data < 0 )
                                    {
                                      puts("Warning - readback failed");
                                    }
                                    else if ( word_data == v24 )
                                    {
                                      if ( v20 == 3 )
                                        v51 = 4;
                                      else
                                        v51 = 2;
                                      printf("Value 0x%0*x written, readback matched\n", v51, word_data);
                                    }
                                    else
                                    {
                                      if ( v20 == 3 )
                                        v50 = 4;
                                      else
                                        v50 = 2;
                                      printf("Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\n", v50, v24);
                                    }
                                    exit(0);
                                  }
                                  close(v32);
                                  exit(0);
                                }
                                v52 = (FILE *)stderr;
                                v53 = _errno_location();
                                v54 = strerror(*v53);
                                fprintf(v52, "Error: Could not clear PEC: %s\n", v54);
                              }
                              close(v32);
                            }
                          }
                          else
                          {
                            fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "I2C block write");
                          }
                          break;
                      }
                    }
                  }
                  exit(1);
                }
LABEL_27:
                v21 = fwrite("Error: Too many arguments!\n", 1u, 0x1Bu, (FILE *)stderr);
                sub_11BAC(v21);
              }
            }
            v40 = fwrite("Error: PEC not supported for I2C block writes!\n", 1u, 0x2Fu, (FILE *)stderr);
            sub_11BAC(v40);
          }
          a1 = fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
        }
      }
    }
  }
  sub_11BAC(a1);
}
