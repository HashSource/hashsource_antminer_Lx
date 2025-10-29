int __fastcall sub_62764(const char *a1)
{
  int v1; // r0
  int v2; // r11
  unsigned __int8 *v3; // r0
  const char *v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r9
  unsigned __int8 *v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r6
  size_t v12; // r0
  size_t v13; // r4
  int v14; // r8
  unsigned __int8 *v15; // r7
  char *v16; // r6
  char *v17; // r0
  int v18; // r3
  int v19; // r11
  unsigned int v20; // r4
  char *v21; // r5
  const unsigned __int16 **v22; // r0
  char *v23; // r2
  const unsigned __int16 *v24; // r0
  int v25; // r3
  int v26; // t1
  unsigned int v27; // r3
  _BOOL4 v28; // r2
  unsigned __int8 *v29; // r6
  size_t v30; // r8
  const __int32_t *v31; // r7
  int v32; // t1
  char *v33; // r0
  bool v34; // zf
  char *v35; // r3
  char v36; // r0
  char v37; // r0
  size_t v38; // r4
  const char *v39; // r3
  _DWORD *v40; // r0
  _DWORD *v41; // r4
  int v43; // r5
  FILE *stream; // [sp+8h] [bp-274h]
  int v45; // [sp+10h] [bp-26Ch]
  int v46; // [sp+20h] [bp-25Ch]
  char *v48; // [sp+30h] [bp-24Ch] BYREF
  unsigned int v49; // [sp+34h] [bp-248h] BYREF
  unsigned __int16 v50[14]; // [sp+38h] [bp-244h] BYREF
  char src[32]; // [sp+54h] [bp-228h] BYREF
  char v52[520]; // [sp+74h] [bp-208h] BYREF

  v1 = fopen64(a1, "r");
  stream = (FILE *)v1;
  if ( !v1 )
  {
    sub_64A18(3, "authreadkeys: file '%s': %m", a1);
    return 0;
  }
  if ( !ssl_init_done )
    sub_6C30C(v1);
  v49 = 0;
  v2 = 0;
  while ( 1 )
  {
    v48 = fgets(v52, 512, stream);
    if ( !v48 || v49 > 0xF )
      break;
    v3 = sub_6255C((unsigned __int8 **)&v48);
    v4 = (const char *)v3;
    if ( v3 )
    {
      v5 = strtol((const char *)v3, 0, 10);
      v6 = v5;
      if ( v5 )
      {
        if ( v5 >= 0x10000 )
        {
          sub_62670(&v49, (int)"authreadkeys: key %s > %d reserved for Autokey", v4, 0xFFFF);
        }
        else
        {
          v7 = sub_6255C((unsigned __int8 **)&v48);
          if ( v7 )
          {
            v8 = sub_6C560(v7, 0);
            v45 = v8;
            if ( v8 )
            {
              if ( v8 != 894 )
              {
                v9 = OBJ_nid2sn(v8);
                if ( !EVP_get_digestbyname(v9) )
                {
                  sub_62670(0, (int)"authreadkeys: no algorithm for key %d", v6);
                  v45 = 0;
                }
              }
              v10 = sub_6255C((unsigned __int8 **)&v48);
              v11 = v10;
              if ( !v10 )
                goto LABEL_66;
LABEL_16:
              v12 = strlen((const char *)v10);
              v13 = v12;
              if ( v12 <= 0x14 )
              {
                v14 = sub_637E4(0, v12 + 20, 0, 0);
                *(_WORD *)(v14 + 12) = v45;
                *(_DWORD *)(v14 + 8) = v6;
                *(_WORD *)(v14 + 14) = v13;
                *(_DWORD *)(v14 + 4) = 0;
                memcpy((void *)(v14 + 16), v11, v13);
                goto LABEL_18;
              }
              v29 = v11 - 1;
              v30 = 0;
              if ( v12 >= 0x40 )
                v13 = 64;
              v31 = *_ctype_tolower_loc();
              while ( 1 )
              {
                v32 = *++v29;
                v33 = strchr("0123456789abcdef", v31[v32]);
                if ( !v33 )
                  break;
                v34 = (v30 & 1) == 0;
                v35 = &v52[(v30 >> 1) + 516];
                v36 = (_BYTE)v33 - (unsigned __int8)"0123456789abcdef";
                ++v30;
                if ( v34 )
                  v37 = 16 * v36;
                else
                  v37 = v36 | *(v35 - 548);
                *(v35 - 548) = v37;
                if ( v13 == v30 )
                  goto LABEL_55;
              }
              if ( v13 <= v30 )
              {
LABEL_55:
                v38 = v13 >> 1;
                v14 = sub_637E4(0, v38 + 20, 0, 0);
                *(_DWORD *)(v14 + 8) = v6;
                *(_WORD *)(v14 + 12) = v45;
                *(_WORD *)(v14 + 14) = v38;
                *(_DWORD *)(v14 + 4) = 0;
                memcpy((void *)(v14 + 16), src, v38);
LABEL_18:
                v15 = sub_6255C((unsigned __int8 **)&v48);
                if ( v15 )
                {
                  v46 = v2;
                  while ( 1 )
                  {
                    v16 = strchr((const char *)v15, 44);
                    if ( v16 )
                      *v16 = 0;
                    v17 = strchr((const char *)v15, 47);
                    if ( v17 )
                    {
                      v19 = (unsigned __int8)v17[1];
                      v20 = 0;
                      v21 = v17 + 1;
                      *v17 = 0;
                      if ( v19 )
                      {
                        v22 = _ctype_b_loc();
                        v23 = v21;
                        v24 = *v22;
                        do
                        {
                          v27 = ((v24[v19] ^ 0x800u) >> 11) & 1;
                          if ( v20 > 0x3E8 )
                            v27 = 1;
                          if ( v27 )
                          {
                            sub_62670(
                              &v49,
                              (int)"authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
                              v23,
                              v21,
                              v6);
                            goto LABEL_30;
                          }
                          v25 = v19 - 48;
                          v26 = (unsigned __int8)*++v23;
                          v19 = v26;
                          v20 = v25 + 10 * v20;
                        }
                        while ( v26 );
                        if ( sub_63C8C(v15, 0, v50, v25) )
                        {
                          if ( v20 != -1 )
                          {
                            if ( v50[0] == 2 )
                            {
                              if ( v20 > 0x20 )
                                goto LABEL_68;
                            }
                            else
                            {
                              v28 = v20 > 0x80;
                              if ( v50[0] != 10 )
                                v28 = 0;
                              if ( !v28 )
                                goto LABEL_42;
LABEL_68:
                              sub_62670(0, (int)"authreadkeys: excessive subnet mask <%s/%s> for key %d", v15, v21, v6);
                            }
                          }
LABEL_42:
                          *(_DWORD *)(v14 + 4) = sub_612C8(*(_DWORD *)(v14 + 4), v50, v20);
                          goto LABEL_30;
                        }
                      }
                      else if ( sub_63C8C(v15, 0, v50, v18) )
                      {
                        v20 = 0;
                        goto LABEL_42;
                      }
                    }
                    else if ( sub_63C8C(v15, 0, v50, v18) )
                    {
                      v20 = -1;
                      goto LABEL_42;
                    }
                    sub_62670(&v49, (int)"authreadkeys: invalid IP address <%s> for key %d", v15, v6);
LABEL_30:
                    if ( v16 )
                    {
                      v15 = (unsigned __int8 *)(v16 + 1);
                      if ( v16 != (char *)-1 )
                        continue;
                    }
                    v2 = v46;
                    break;
                  }
                }
                if ( v45 )
                {
                  *(_DWORD *)v14 = v2;
                  v2 = v14;
                }
                else
                {
                  sub_626F0((_DWORD *)v14);
                }
              }
              else
              {
                sub_62670(&v49, (int)"authreadkeys: invalid hex digit for key %d", v6);
              }
            }
            else
            {
              sub_62670(0, (int)"authreadkeys: invalid type for key %d", v6);
              v10 = sub_6255C((unsigned __int8 **)&v48);
              v11 = v10;
              if ( v10 )
                goto LABEL_16;
LABEL_66:
              sub_62670(&v49, (int)"authreadkeys: no key for key %d", v6);
            }
          }
          else
          {
            sub_62670(&v49, (int)"authreadkeys: no key type for key %d", v6);
          }
        }
      }
      else
      {
        sub_62670(&v49, (int)"authreadkeys: cannot change key %s", v4);
      }
    }
  }
  fclose(stream);
  if ( v49 )
  {
    if ( v49 > 0xF )
      v39 = " (emergency break)";
    else
      v39 = byte_97B44;
    sub_64A18(3, "authreadkeys: rejecting file '%s' after %u error(s)%s", a1, v49, v39);
    if ( v2 )
    {
      v40 = (_DWORD *)v2;
      do
      {
        v41 = (_DWORD *)*v40;
        sub_626F0(v40);
        v40 = v41;
      }
      while ( v41 );
    }
    return 0;
  }
  else
  {
    sub_62238();
    if ( v2 )
    {
      do
      {
        v43 = *(_DWORD *)v2;
        sub_620E8(
          *(_DWORD *)(v2 + 8),
          *(_WORD *)(v2 + 12),
          (const void *)(v2 + 16),
          *(unsigned __int16 *)(v2 + 14),
          *(_DWORD *)(v2 + 4));
        *(_DWORD *)(v2 + 4) = 0;
        sub_626F0((_DWORD *)v2);
        v2 = v43;
      }
      while ( v43 );
    }
    return 1;
  }
}
