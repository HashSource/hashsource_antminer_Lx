void __fastcall sub_4469C(int a1, int a2)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r6
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r3
  bool v14; // zf
  const char *v15; // r2
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v23; // r3
  bool v24; // zf
  const char *v25; // r2
  int v26; // r1
  int v27; // r2
  char v28; // r3
  char v29; // r3
  int v30; // r3
  bool v31; // zf
  const char *v32; // r2
  int v33; // r0
  int v34; // r3
  bool v35; // zf
  const char *v36; // r2
  int v37; // r3
  bool v38; // zf
  const char *v39; // r2
  int v40; // r3
  bool v41; // zf
  const char *v42; // r2
  int v43; // [sp+8h] [bp-Ch] BYREF

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  if ( *(_DWORD *)(*v2 + 8) == a2 )
  {
    v20 = *(_DWORD *)(v3 + 76);
    if ( v20 < 1 )
      v20 = 1;
    v21 = v20 - 1;
    *(_DWORD *)(v3 + 76) = v21;
    if ( !v21 )
    {
      if ( v2[54] != v2[55] )
      {
        sub_3918C((__int16 *)a2, 1);
        v2[54] = v2[55];
      }
      *(_DWORD *)(a2 + 68) &= ~0x80u;
    }
    return;
  }
  v4 = *(_DWORD *)(v3 + 180);
  if ( v4 )
    *(_DWORD *)(v3 + 180) = v4 - 1;
  v5 = *(_DWORD *)(v3 + 144);
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(v3 + 144) = v6;
    if ( v6 )
    {
      v14 = v6 == 4;
      v7 = v2[7];
      if ( v14 )
      {
        if ( v7 != -1 )
        {
          sub_44330(v2, "send", "?VERSION;\r\n", 11);
          write(v2[7], "?VERSION;\r\n", 0xBu);
          return;
        }
LABEL_9:
        if ( *(_DWORD *)(v3 + 136) == -1 )
          return;
        goto LABEL_10;
      }
      if ( v7 == -1 )
        goto LABEL_9;
      return;
    }
  }
  if ( v2[7] != -1 )
  {
    if ( (v2[192] & 4) != 0 )
      goto LABEL_45;
    v23 = *(_DWORD *)(v3 + 180);
    v24 = v23 == 0;
    if ( v23 )
      v24 = v23 == 3600;
    if ( v24 )
    {
LABEL_45:
      v25 = *(const char **)(v3 + 20);
      *(_DWORD *)(v3 + 180) = 3600;
      sub_64A18(6, "%s: closing socket to GPSD, fd=%d", v25, v2[7]);
    }
    sub_18C18((int)(v2 + 2));
    v26 = *(_DWORD *)(v3 + 148);
    v2[7] = -1;
    v27 = v26 + 5;
    v28 = *(_BYTE *)(v3 + 132);
    *(_DWORD *)(v3 + 144) = v26;
    v29 = v28 & 0xD9;
    if ( (unsigned int)(v26 + 5) >= 0x78 )
      v27 = 120;
    *(_DWORD *)(v3 + 148) = v27;
    *(_BYTE *)(v3 + 132) = v29 & 0xBF;
    return;
  }
  if ( *(_DWORD *)(v3 + 136) != -1 )
  {
LABEL_10:
    sub_444D8((int)v2);
    return;
  }
  if ( dword_BC560 )
  {
    v8 = *(_DWORD *)(v3 + 140);
    if ( !v8 )
      v8 = dword_BC560;
    v9 = *(_DWORD *)(v8 + 12);
    v10 = *(_DWORD *)(v8 + 8);
    v11 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v3 + 140) = *(_DWORD *)(v8 + 28);
    v12 = socket(v11, v10, v9);
    *(_DWORD *)(v3 + 136) = v12;
    if ( v12 == -1 )
    {
      if ( (v2[192] & 4) == 0 )
      {
        v13 = *(_DWORD *)(v3 + 180);
        v14 = v13 == 3600;
        if ( v13 != 3600 )
          v14 = v13 == 0;
        if ( !v14 )
        {
          v16 = v2[7];
          if ( v16 == -1 )
          {
LABEL_28:
            v18 = *(_DWORD *)(v3 + 148);
            v2[7] = -1;
            v19 = v18 + 5;
            *(_DWORD *)(v3 + 136) = -1;
            *(_DWORD *)(v3 + 144) = v18;
            if ( (unsigned int)(v18 + 5) >= 0x78 )
              v19 = 120;
            *(_DWORD *)(v3 + 148) = v19;
            return;
          }
LABEL_25:
          close(v16);
LABEL_26:
          v17 = *(_DWORD *)(v3 + 136);
          if ( v17 != -1 )
            close(v17);
          goto LABEL_28;
        }
      }
      v15 = *(const char **)(v3 + 20);
      *(_DWORD *)(v3 + 180) = 3600;
      sub_64A18(3, "%s: cannot create GPSD socket: %m", v15);
    }
    else if ( fcntl(v12, 4, 2048, 1) == -1 )
    {
      if ( (v2[192] & 4) != 0 )
        goto LABEL_55;
      v30 = *(_DWORD *)(v3 + 180);
      v31 = v30 == 3600;
      if ( v30 != 3600 )
        v31 = v30 == 0;
      if ( v31 )
      {
LABEL_55:
        v32 = *(const char **)(v3 + 20);
        *(_DWORD *)(v3 + 180) = 3600;
        sub_64A18(3, "%s: cannot set GPSD socket to non-blocking: %m", v32);
      }
    }
    else
    {
      v33 = *(_DWORD *)(v3 + 136);
      v43 = 1;
      if ( setsockopt(v33, 6, 1, &v43, 4u) == -1 )
      {
        if ( (v2[192] & 4) != 0 )
          goto LABEL_79;
        v40 = *(_DWORD *)(v3 + 180);
        v41 = v40 == 0;
        if ( v40 )
          v41 = v40 == 3600;
        if ( v41 )
        {
LABEL_79:
          v42 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64A18(6, "%s: cannot disable TCP nagle: %m", v42);
        }
      }
      if ( connect(*(_DWORD *)(v3 + 136), *(const struct sockaddr **)(v8 + 20), *(_DWORD *)(v8 + 16)) == -1 )
      {
        if ( *_errno_location() == 115 )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_64;
        v34 = *(_DWORD *)(v3 + 180);
        v35 = v34 == 0;
        if ( v34 )
          v35 = v34 == 3600;
        if ( v35 )
        {
LABEL_64:
          v36 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64A18(3, "%s: cannot connect GPSD socket: %m", v36);
        }
      }
      else
      {
        v2[7] = *(_DWORD *)(v3 + 136);
        *(_DWORD *)(v3 + 136) = -1;
        if ( sub_18BA4(v2 + 2) )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_71;
        v37 = *(_DWORD *)(v3 + 180);
        v38 = v37 == 3600;
        if ( v37 != 3600 )
          v38 = v37 == 0;
        if ( v38 )
        {
LABEL_71:
          v39 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64A18(3, "%s: failed to register with I/O engine", v39);
        }
      }
    }
    v16 = v2[7];
    if ( v16 == -1 )
      goto LABEL_26;
    goto LABEL_25;
  }
}
