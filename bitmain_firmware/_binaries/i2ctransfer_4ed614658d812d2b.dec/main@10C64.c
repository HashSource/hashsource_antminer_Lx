void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v4; // r3
  char *v6; // r2
  int v7; // r4
  char **v8; // r1
  int v9; // r8
  int v10; // r0
  int v11; // r7
  int v12; // r6
  int v13; // r9
  char *v14; // t1
  int v15; // r0
  int v16; // r0
  int v17; // r11
  int v18; // r2
  unsigned int v19; // r7
  int v20; // r9
  const char *v21; // r10
  int v22; // r3
  const char *v23; // r10
  size_t v24; // r8
  _WORD *v25; // r2
  FILE *v26; // r3
  const void *v27; // r0
  unsigned int v28; // r0
  char v29; // r3
  unsigned int v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r0
  int v33; // r4
  _DWORD *v34; // r3
  void *v35; // r0
  bool v36; // zf
  int v37; // r0
  int v38; // r4
  unsigned int v39; // r2
  int v40; // r4
  _DWORD *v41; // r3
  FILE *v42; // r4
  int *v43; // r0
  char *v44; // r0
  FILE *v45; // r4
  int *v46; // r0
  char *v47; // r0
  int fd; // [sp+4h] [bp-238h]
  int v49; // [sp+8h] [bp-234h]
  int v50; // [sp+Ch] [bp-230h]
  const char **v51; // [sp+10h] [bp-22Ch]
  const char **v52; // [sp+14h] [bp-228h]
  int v53; // [sp+18h] [bp-224h]
  int v54; // [sp+1Ch] [bp-220h]
  char *endptr[2]; // [sp+24h] [bp-218h] BYREF
  char s[20]; // [sp+2Ch] [bp-210h] BYREF
  _DWORD v57[126]; // [sp+40h] [bp-1FCh] BYREF
  char v58; // [sp+238h] [bp-4h] BYREF

  v4 = (char *)v57;
  do
  {
    *((_DWORD *)v4 + 2) = 0;
    v4 += 12;
  }
  while ( &v58 != v4 );
  if ( a1 <= 1 )
  {
    if ( a1 == 1 )
    {
LABEL_39:
      LOWORD(v27) = 8416;
      v26 = (FILE *)stderr;
LABEL_36:
      HIWORD(v27) = (unsigned int)"Usage: i2ctransfer [-f] [-y] [-v] [-V] [-a] I2CBUS DESC [DATA] [DESC [DATA]]...\n"
                                  "  I2CBUS is an integer or an I2C bus name\n"
                                  "  DESC describes the transfer in the form: {r|w}LENGTH[@address]\n"
                                  "    1) read/write-flag 2) LENGTH (range 0-65535) 3) I2C address (use last one if omitt"
                                  "ed)\n"
                                  "  DATA are LENGTH bytes for a write message. They can be shortened by a suffix:\n"
                                  "    = (keep value constant until LENGTH)\n"
                                  "    + (increase value by 1 until LENGTH)\n"
                                  "    - (decrease value by 1 until LENGTH)\n"
                                  "    p (use pseudo random generator until LENGTH with value as seed)\n"
                                  "\n"
                                  "Example (bus 0, read 8 byte at offset 0x64 from EEPROM at 0x50):\n"
                                  "  # i2ctransfer 0 w1@0x50 0x64 r8\n"
                                  "Example (same EEPROM, at offset 0x42 write 0xff 0xfe ... 0xf0):\n"
                                  "  # i2ctransfer 0 w17@0x50 0x42 0xff-\n" >> 16;
      fwrite(v27, 1u, 0x2EEu, v26);
      goto LABEL_37;
    }
    v7 = 0;
  }
  else
  {
    v6 = a2[1];
    v7 = 0;
    if ( *v6 == 45 )
    {
      v8 = a2 + 1;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 1;
      while ( 2 )
      {
        switch ( v6[1] )
        {
          case 'V':
            v10 = 1;
            goto LABEL_8;
          case 'a':
            v7 = 1;
            goto LABEL_8;
          case 'f':
            v12 = 1;
            goto LABEL_8;
          case 'v':
            v9 = 1;
            goto LABEL_8;
          case 'y':
            v11 = 1;
LABEL_8:
            if ( a1 == ++v13 )
            {
              if ( !v10 )
                goto LABEL_39;
LABEL_40:
              fprintf((FILE *)stderr, "i2ctransfer version %s\n", "4.1");
              exit(0);
            }
            v14 = v8[1];
            ++v8;
            v6 = v14;
            if ( *v14 == 45 )
              continue;
            if ( v10 )
              goto LABEL_40;
            break;
          default:
            fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v6);
            v26 = (FILE *)stderr;
            LOWORD(v27) = (unsigned __int16)"Usage: i2ctransfer [-f] [-y] [-v] [-V] [-a] I2CBUS DESC [DATA] [DESC [DATA]]"
                                            "...\n"
                                            "  I2CBUS is an integer or an I2C bus name\n"
                                            "  DESC describes the transfer in the form: {r|w}LENGTH[@address]\n"
                                            "    1) read/write-flag 2) LENGTH (range 0-65535) 3) I2C address (use last on"
                                            "e if omitted)\n"
                                            "  DATA are LENGTH bytes for a write message. They can be shortened by a suff"
                                            "ix:\n"
                                            "    = (keep value constant until LENGTH)\n"
                                            "    + (increase value by 1 until LENGTH)\n"
                                            "    - (decrease value by 1 until LENGTH)\n"
                                            "    p (use pseudo random generator until LENGTH with value as seed)\n"
                                            "\n"
                                            "Example (bus 0, read 8 byte at offset 0x64 from EEPROM at 0x50):\n"
                                            "  # i2ctransfer 0 w1@0x50 0x64 r8\n"
                                            "Example (same EEPROM, at offset 0x42 write 0xff 0xfe ... 0xf0):\n"
                                            "  # i2ctransfer 0 w17@0x50 0x42 0xff-\n";
            goto LABEL_36;
        }
        goto LABEL_11;
      }
    }
  }
  v13 = 1;
  v9 = 0;
  v11 = 0;
  v12 = 0;
LABEL_11:
  v15 = sub_11DC0(a2[v13]);
  if ( v15 < 0 )
    goto LABEL_37;
  v16 = sub_116A8(v15, s, 0x14u);
  fd = v16;
  if ( v16 < 0 )
    goto LABEL_37;
  if ( ioctl(v16, 0x705u, endptr) < 0 )
  {
    v45 = (FILE *)stderr;
    v46 = _errno_location();
    v47 = strerror(*v46);
    fprintf(v45, "Error: Could not get the adapter functionality matrix: %s\n", v47);
    goto LABEL_37;
  }
  if ( ((int)endptr[0] & 1) == 0 )
  {
    fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "I2C transfers");
    goto LABEL_37;
  }
  v53 = v11;
  v51 = (const char **)&a2[v13 + 1];
  v17 = 0;
  v18 = v13 + 1;
  v19 = 0;
  v20 = 0;
  v50 = v18;
  v54 = v9;
  v49 = -1;
  while ( 1 )
  {
    if ( v50 >= a1 )
    {
      if ( !v20 )
        v17 = 1;
      if ( v17 )
      {
        fwrite("Error: Incomplete message\n", 1u, 0x1Au, (FILE *)stderr);
        goto LABEL_59;
      }
      if ( v53
        || (fwrite(
              "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
              1u,
              0x4Bu,
              (FILE *)stderr),
            fprintf((FILE *)stderr, "I will send the following messages to device file %s:\n", s),
            sub_10B28((int)v57, v20, 0xDu),
            fwrite("Continue? [y/N] ", 1u, 0x10u, (FILE *)stderr),
            fflush((FILE *)stderr),
            sub_11F88(0)) )
      {
        endptr[1] = (char *)v20;
        endptr[0] = (char *)v57;
        v37 = ioctl(fd, 0x707u, endptr);
        v38 = v37;
        if ( v37 < 0 )
        {
          v42 = (FILE *)stderr;
          v43 = _errno_location();
          v44 = strerror(*v43);
          fprintf(v42, "Error: Sending messages failed: %s\n", v44);
          goto LABEL_59;
        }
        if ( v20 > v37 )
          fprintf((FILE *)stderr, "Warning: only %d/%d messages were sent\n", v37, v20);
        if ( v54 )
          v39 = 14;
        else
          v39 = 2;
        sub_10B28((int)v57, v38, v39);
      }
      else
      {
        fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
      }
      v40 = 0;
      close(fd);
      do
      {
        v41 = &v57[3 * v40++];
        free((void *)v41[2]);
      }
      while ( v20 > v40 );
      exit(0);
    }
    v52 = v51;
    v21 = *v51++;
    if ( v20 > 42 )
    {
      fprintf((FILE *)stderr, "Error: Too many messages (max: %d)\n", 42);
      goto LABEL_59;
    }
    if ( v17 == 1 )
    {
      v28 = strtoul(v21, endptr, 0);
      if ( v28 > 0xFF || endptr[0] == v21 )
      {
        fwrite("Error: Invalid data byte\n", 1u, 0x19u, (FILE *)stderr);
        goto LABEL_63;
      }
      v29 = v28;
      v30 = v19;
      v31 = LOWORD(v57[3 * v20 + 1]);
      while ( v19 < v31 )
      {
        ++v19;
        *(_BYTE *)(v57[3 * v20 + 2] + v30) = v29;
        v32 = (unsigned __int8)*endptr[0];
        if ( !*endptr[0] )
          break;
        if ( v32 == 45 )
        {
          --v29;
        }
        else if ( v32 <= 0x2D )
        {
          if ( v32 != 43 )
          {
LABEL_65:
            fwrite("Error: Invalid data byte suffix\n", 1u, 0x20u, (FILE *)stderr);
            goto LABEL_63;
          }
          ++v29;
        }
        else if ( v32 != 61 )
        {
          if ( v32 != 112 )
            goto LABEL_65;
          v29 = ((unsigned __int8)((v29 ^ 0x1B) + 13) >> 7) | (2 * ((v29 ^ 0x1B) + 13));
        }
        v30 = v19;
      }
      if ( v19 == v31 )
        goto LABEL_29;
    }
    else
    {
      v22 = *(unsigned __int8 *)v21;
      v23 = v21 + 1;
      if ( v22 == 114 )
      {
        v17 = 1;
      }
      else
      {
        if ( v22 != 119 )
        {
          fwrite("Error: Invalid direction\n", 1u, 0x19u, (FILE *)stderr);
          goto LABEL_63;
        }
        v17 = 0;
      }
      v24 = strtoul(v23, endptr, 0);
      if ( v24 >= 0x10000 || endptr[0] == v23 )
      {
        fwrite("Error: Length invalid\n", 1u, 0x16u, (FILE *)stderr);
LABEL_63:
        fprintf((FILE *)stderr, "Error: faulty argument is '%s'\n", *v52);
LABEL_59:
        v33 = 0;
        close(fd);
        do
        {
          v34 = &v57[3 * v33++];
          free((void *)v34[2]);
        }
        while ( v20 >= v33 );
LABEL_37:
        exit(1);
      }
      if ( *endptr[0] )
      {
        if ( *endptr[0] != 64 )
        {
          fwrite("Error: Unknown separator after length\n", 1u, 0x26u, (FILE *)stderr);
          goto LABEL_63;
        }
        v49 = sub_115F0(endptr[0] + 1, v7);
        if ( v49 < 0 || !v12 && sub_11F14(fd, v49, 0) )
          goto LABEL_63;
      }
      else if ( v49 == -1 )
      {
        fwrite("Error: No address given\n", 1u, 0x18u, (FILE *)stderr);
        goto LABEL_63;
      }
      v25 = &v57[3 * v20];
      *v25 = v49;
      v25[1] = v17;
      v25[2] = v24;
      if ( !v24 )
        goto LABEL_29;
      v35 = calloc(v24, 1u);
      if ( !v35 )
      {
        fwrite("Error: No memory for buffer\n", 1u, 0x1Cu, (FILE *)stderr);
        goto LABEL_63;
      }
      v36 = v17 == 0;
      if ( !v17 )
      {
        v19 = 0;
        v17 = 1;
      }
      v57[3 * v20 + 2] = v35;
      if ( !v36 )
      {
LABEL_29:
        ++v20;
        v17 = 0;
      }
    }
    ++v50;
  }
}
