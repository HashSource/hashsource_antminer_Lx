int __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // r7
  int v6; // r11
  int v7; // r10
  int v8; // r0
  int v9; // r4
  char **v10; // r2
  char *v11; // r4
  char *v12; // r0
  _BOOL4 v13; // r2
  unsigned int v14; // r6
  int v16; // r3
  int v17; // [sp+Ch] [bp-90h]
  int v18; // [sp+10h] [bp-8Ch]
  int v19; // [sp+14h] [bp-88h]
  int v20; // [sp+18h] [bp-84h] BYREF
  int v21; // [sp+1Ch] [bp-80h] BYREF
  _BYTE v22[16]; // [sp+20h] [bp-7Ch] BYREF
  _BYTE v23[104]; // [sp+30h] [bp-6Ch] BYREF

  v3 = 0;
  v6 = 0;
  v7 = 0;
  dword_230A8 = 0;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v8 = getopt(a1, a2, "1:8fr:qhw:xd");
    if ( v8 == -1 )
      break;
    if ( v8 == 102 )
    {
      ++v17;
    }
    else if ( v8 > 102 )
    {
      switch ( v8 )
      {
        case 'q':
          ++dword_230A8;
          break;
        case 'x':
          ++v18;
          break;
        case 'h':
          sub_10E18(203);
        default:
LABEL_8:
          if ( v7 )
            sub_10E48("Both read and write requested", 206);
          v7 = v8;
          v19 = optarg;
          break;
      }
    }
    else
    {
      switch ( v8 )
      {
        case '8':
          if ( v3 )
            sub_10E48("EEPROM type switch (-8 or -16) used twice", 193);
          v3 = 1;
          break;
        case 'd':
          ++v6;
          break;
        case '1':
          if ( *(_BYTE *)optarg != 54 || strlen((const char *)optarg) != 1 )
            sub_10E18(182);
          if ( v3 )
            sub_10E48("EEPROM type switch (-8 or -16) used twice", 183);
          v3 = 2;
          break;
        default:
          goto LABEL_8;
      }
    }
  }
  if ( !v3 )
    v3 = 1;
  if ( !v7 )
    sub_10E18(214);
  v9 = a1 - optind;
  if ( v9 == 1 )
  {
    if ( _xstat64(3, a2[optind], v23) == -1 )
    {
      v11 = getenv("EEPROG_DEV");
      v12 = a2[optind];
    }
    else
    {
      v11 = a2[optind];
      v12 = getenv("EEPROG_I2C_ADDR");
    }
  }
  else if ( v9 == 2 )
  {
    v10 = &a2[optind];
    v11 = *v10;
    ++optind;
    v12 = v10[1];
  }
  else
  {
    if ( v9 )
      sub_10E18(238);
    v11 = getenv("EEPROG_DEV");
    v12 = getenv("EEPROG_I2C_ADDR");
  }
  v13 = v12 == 0;
  if ( !v11 )
    v13 = 1;
  if ( v13 )
    sub_10E18(240);
  v14 = strtoul(v12, 0, 0);
  if ( !dword_230A8 )
  {
    fprintf((FILE *)stderr, "eeprog %s, a 24Cxx EEPROM reader/writer\n", "0.7.5");
    if ( !dword_230A8 )
    {
      fwrite("Copyright (c) 2003 by Stefano Barbato - All rights reserved.\n", 1u, 0x3Du, (FILE *)stderr);
      if ( !dword_230A8 )
      {
        if ( v3 == 1 )
          v16 = 8;
        else
          v16 = 16;
        fprintf((FILE *)stderr, "  Bus: %s, Address: 0x%x, Mode: %dbit\n", v11, v14, v16);
      }
    }
  }
  if ( v6 )
  {
    fwrite("Dummy mode selected, nothing done.\n", 1u, 0x23u, (FILE *)stderr);
  }
  else
  {
    if ( sub_1118C(v11, v14, v3, v22) < 0 )
      sub_10E48("unable to open eeprom device file (check that the file exists and that it's readable)", 254);
    if ( v7 == 114 )
    {
      if ( !v17 )
        sub_10EF8();
      v21 = 1;
      sub_10EA0(v19, &v20, &v21);
      if ( !dword_230A8 )
        fprintf((FILE *)stderr, "  Reading %d bytes from 0x%x\n", v21, v20);
      sub_10F34(v22, v20, v21, v18);
    }
    else
    {
      if ( v7 != 119 )
        sub_10E18(274);
      if ( !v17 )
        sub_10EF8();
      sub_10EA0(v19, &v20, &v21);
      if ( !dword_230A8 )
        fprintf((FILE *)stderr, "  Writing stdin starting at address 0x%x\n", v20);
      sub_11070(v22, v20);
    }
    sub_11338(v22);
  }
  return 0;
}
