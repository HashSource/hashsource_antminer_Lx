bool __fastcall sub_44E58(__int64 a1)
{
  int v1; // r8
  int v2; // r7
  char **v3; // r5
  const char *v4; // r7
  const char *v5; // r8
  int v6; // r4
  int v7; // r10
  const char *v8; // r0
  _BOOL4 v9; // r5
  int *v10; // r6
  int v11; // r9
  int v12; // r4
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r1
  char v18; // r3
  int v19; // r3
  int v20; // r2
  char v21; // r3
  int v23; // r5
  const char *v24; // r0
  int v25; // r3
  void *v26; // r0
  int v27; // [sp+Ch] [bp-88h]
  int v28; // [sp+18h] [bp-7Ch]
  int v29; // [sp+1Ch] [bp-78h]
  _BYTE v30[16]; // [sp+20h] [bp-74h] BYREF
  int v31; // [sp+30h] [bp-64h]

  v1 = HIDWORD(a1);
  v2 = *(_DWORD *)(HIDWORD(a1) + 84);
  v27 = a1;
  if ( !dword_BC574 )
  {
    v9 = dword_BC560 != 0;
    goto LABEL_7;
  }
  if ( dword_BC574 <= 0 )
  {
    v23 = dword_BC560;
    if ( dword_BC560 )
      goto LABEL_34;
LABEL_38:
    a1 = sub_64A18(3, "%s", "GPSD_JSON: failed to get socket address, giving up.");
    v23 = dword_BC560;
    goto LABEL_34;
  }
  v28 = *(_DWORD *)(HIDWORD(a1) + 84);
  v3 = off_B36C4;
  v4 = "localhost";
  v5 = "gpsd";
  v6 = 0;
  v29 = HIDWORD(a1);
  while ( 1 )
  {
    v7 = *(_DWORD *)&byte_BC564[4 * v6++];
    v8 = gai_strerror(v7);
    sub_64A18(4, "GPSD_JSON: failed to resolve '%s:%s', rc=%d (%s)", v4, v5, v7, v8);
    if ( v6 >= dword_BC574 )
      break;
    v4 = v3[2];
    v3 += 2;
    v5 = v3[1];
  }
  v2 = v28;
  v1 = v29;
  if ( !dword_BC560 )
    goto LABEL_38;
  a1 = sub_64A18(
         4,
         "GPSD_JSON: using '%s:%s' instead of '%s:%s'",
         off_B36C4[2 * v6],
         off_B36C4[2 * v6 + 1],
         "localhost",
         "gpsd");
  v23 = dword_BC560;
LABEL_34:
  v9 = v23 != 0;
  dword_BC574 = 0;
LABEL_7:
  if ( !v9 )
    return v9;
  v10 = &dword_BBD5C;
  v11 = v27 & 0x7F;
  v12 = dword_BBD5C;
  if ( dword_BBD5C )
  {
    if ( v11 == *(_DWORD *)(dword_BBD5C + 12) )
    {
LABEL_17:
      ++*(_DWORD *)(v12 + 4);
      goto LABEL_18;
    }
    while ( 1 )
    {
      v10 = (int *)v12;
      v12 = *(_DWORD *)v12;
      if ( !v12 )
        break;
      if ( *(_DWORD *)(v12 + 12) == v11 )
        goto LABEL_17;
    }
  }
  v13 = sub_637E4(0, 8796, 0, 1);
  v14 = *(_DWORD *)(v13 + 4);
  v12 = v13;
  *v10 = v13;
  *(_DWORD *)(v13 + 4) = v14 + 1;
  v15 = sub_6A02C(v1 + 16);
  v16 = sub_63948(v15);
  *(_DWORD *)(v12 + 136) = -1;
  *(_DWORD *)(v12 + 12) = v11;
  v17 = dword_BC560;
  *(_DWORD *)(v12 + 148) = 10;
  *(_DWORD *)(v12 + 140) = v17;
  *(_DWORD *)(v12 + 20) = v16;
  if ( sub_44DA8((void **)(v12 + 24), (int)"%s%u", "/dev/gps", v11) == -1 )
  {
    sub_64A18(3, "%s: clock device name too long", *(const char **)(v12 + 20));
  }
  else
  {
    if ( _xstat64(3, *(_DWORD *)(v12 + 24), v30) != -1 && (v31 & 0xF000) == 0x2000 )
    {
LABEL_18:
      *(_DWORD *)v2 = v12;
      *(_DWORD *)(v2 + 20) = v1;
      *(_DWORD *)(v2 + 764) = *(_DWORD *)"GPSD";
      *(_DWORD *)(v2 + 12) = sub_45E44;
      *(_DWORD *)(v2 + 44) = "GPSD JSON client clock";
      *(_DWORD *)(v2 + 28) = -1;
      *(_DWORD *)(v2 + 24) = 0;
      *(_BYTE *)(v2 + 56) = 0;
      *(_DWORD *)(v2 + 184) = 0;
      if ( v27 <= 127 )
        v18 = -9;
      else
        v18 = -20;
      *(_BYTE *)(v1 + 95) = v18;
      if ( *(_DWORD *)(v12 + 140) )
      {
        if ( (ntp_syslogmask & 0x100) != 0 )
        {
          v24 = (const char *)sub_6A02C(v1 + 16);
          a1 = sub_64A18(5, "%s: startup, device is '%s'", v24, (const char *)*(_DWORD *)(v12 + 24));
        }
        v19 = *(_DWORD *)(v1 + 76) & 3;
        *(_DWORD *)(v12 + 16) = v19;
        if ( v19 == 3 )
        {
          *(_DWORD *)(v12 + 16) = 0;
          if ( v27 <= 127 )
          {
            v20 = **(_DWORD **)(v1 + 84);
LABEL_30:
            *(_BYTE *)(v20 + 132) &= 0xF9u;
            return v9;
          }
        }
        else if ( v27 <= 127 )
        {
          if ( v19 == 2 )
            HIDWORD(a1) = 30;
          v20 = **(_DWORD **)(v1 + 84);
          if ( v19 == 2 )
          {
            v21 = *(_BYTE *)(v20 + 132);
            *(_DWORD *)(v20 + 72) = HIDWORD(a1);
            *(_BYTE *)(v20 + 132) = v21 & 0xEF;
          }
          goto LABEL_30;
        }
        *(_DWORD *)(v12 + 8) = v1;
        return v9;
      }
      sub_64A18(3, "%s: no GPSD socket address, giving up", *(const char **)(v12 + 20));
      goto LABEL_41;
    }
    sub_64A18(3, "%s: '%s' is not a character device", *(const char **)(v12 + 20), *(const char **)(v12 + 24));
  }
LABEL_41:
  v25 = *(_DWORD *)(v12 + 4) - 1;
  *(_DWORD *)(v12 + 4) = v25;
  if ( !v25 )
  {
    v26 = *(void **)(v12 + 24);
    *v10 = *(_DWORD *)v12;
    free(v26);
    free((void *)v12);
  }
  v9 = 0;
  *(_DWORD *)v2 = 0;
  return v9;
}
