int __fastcall sub_89D0(const char *a1)
{
  int v1; // r11
  unsigned __int8 *v2; // r0
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r3
  int v6; // r9
  unsigned __int8 *v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r3
  unsigned __int8 *v12; // r0
  int v13; // r3
  unsigned __int8 *v14; // r6
  size_t v15; // r0
  size_t v16; // r4
  int v17; // r8
  unsigned __int8 *v18; // r7
  char *v19; // r6
  char *v20; // r0
  int v21; // r11
  unsigned int v22; // r4
  int v23; // r5
  const unsigned __int16 **v24; // r0
  int v25; // r2
  const unsigned __int16 *v26; // r0
  int v27; // r3
  int v28; // t1
  unsigned int v29; // r3
  _BOOL4 v30; // r2
  unsigned __int8 *v31; // r6
  size_t v32; // r8
  const __int32_t *v33; // r7
  int v34; // t1
  char *v35; // r0
  int v36; // r3
  bool v37; // zf
  char *v38; // r3
  char v39; // r0
  char v40; // r0
  size_t v41; // r4
  const char *v42; // r3
  _DWORD *v43; // r0
  _DWORD *v44; // r4
  int v46; // r5
  FILE *stream; // [sp+8h] [bp-274h]
  int v48; // [sp+10h] [bp-26Ch]
  int v49; // [sp+20h] [bp-25Ch]
  char *v51; // [sp+30h] [bp-24Ch] BYREF
  unsigned int v52; // [sp+34h] [bp-248h] BYREF
  unsigned __int16 v53[14]; // [sp+38h] [bp-244h] BYREF
  char src[32]; // [sp+54h] [bp-228h] BYREF
  char v55[520]; // [sp+74h] [bp-208h] BYREF

  stream = (FILE *)fopen64(a1, "r");
  if ( !stream )
  {
    sub_A848(3, "authreadkeys: file '%s': %m", a1);
    return 0;
  }
  if ( !ssl_init_done )
    sub_FE18();
  v52 = 0;
  v1 = 0;
  while ( 1 )
  {
    v51 = fgets(v55, 512, stream);
    if ( !v51 || v52 > 0xF )
      break;
    v2 = sub_87C8((unsigned __int8 **)&v51);
    v3 = (int)v2;
    if ( v2 )
    {
      v4 = strtol((const char *)v2, 0, 10);
      v6 = v4;
      if ( v4 )
      {
        if ( v4 >= 0x10000 )
        {
          sub_88DC(&v52, (int)"authreadkeys: key %s > %d reserved for Autokey", v3, 0xFFFF);
        }
        else
        {
          v7 = sub_87C8((unsigned __int8 **)&v51);
          if ( v7 )
          {
            v9 = sub_1006C(v7, 0);
            v48 = v9;
            if ( v9 )
            {
              if ( v9 != 894 )
              {
                v10 = OBJ_nid2sn(v9);
                if ( !EVP_get_digestbyname(v10) )
                {
                  sub_88DC(0, (int)"authreadkeys: no algorithm for key %d", v6, v11);
                  v48 = 0;
                }
              }
              v12 = sub_87C8((unsigned __int8 **)&v51);
              v14 = v12;
              if ( !v12 )
                goto LABEL_66;
LABEL_16:
              v15 = strlen((const char *)v12);
              v16 = v15;
              if ( v15 <= 0x14 )
              {
                v17 = sub_96BC(0, v15 + 20, 0, 0);
                *(_WORD *)(v17 + 12) = v48;
                *(_DWORD *)(v17 + 8) = v6;
                *(_WORD *)(v17 + 14) = v16;
                *(_DWORD *)(v17 + 4) = 0;
                memcpy((void *)(v17 + 16), v14, v16);
                goto LABEL_18;
              }
              v31 = v14 - 1;
              v32 = 0;
              if ( v15 >= 0x40 )
                v16 = 64;
              v33 = *_ctype_tolower_loc();
              while ( 1 )
              {
                v34 = *++v31;
                v35 = strchr("0123456789abcdef", v33[v34]);
                if ( !v35 )
                  break;
                v37 = (v32 & 1) == 0;
                v38 = &v55[(v32 >> 1) + 516];
                v39 = (_BYTE)v35 - (unsigned __int8)"0123456789abcdef";
                ++v32;
                if ( v37 )
                  v40 = 16 * v39;
                else
                  v40 = v39 | *(v38 - 548);
                *(v38 - 548) = v40;
                if ( v16 == v32 )
                  goto LABEL_55;
              }
              if ( v16 <= v32 )
              {
LABEL_55:
                v41 = v16 >> 1;
                v17 = sub_96BC(0, v41 + 20, 0, 0);
                *(_DWORD *)(v17 + 8) = v6;
                *(_WORD *)(v17 + 12) = v48;
                *(_WORD *)(v17 + 14) = v41;
                *(_DWORD *)(v17 + 4) = 0;
                memcpy((void *)(v17 + 16), src, v41);
LABEL_18:
                v18 = sub_87C8((unsigned __int8 **)&v51);
                if ( v18 )
                {
                  v49 = v1;
                  while ( 1 )
                  {
                    v19 = strchr((const char *)v18, 44);
                    if ( v19 )
                      *v19 = 0;
                    v20 = strchr((const char *)v18, 47);
                    if ( v20 )
                    {
                      v21 = (unsigned __int8)v20[1];
                      v22 = 0;
                      v23 = (int)(v20 + 1);
                      *v20 = 0;
                      if ( v21 )
                      {
                        v24 = _ctype_b_loc();
                        v25 = v23;
                        v26 = *v24;
                        do
                        {
                          v29 = ((v26[v21] ^ 0x800u) >> 11) & 1;
                          if ( v22 > 0x3E8 )
                            v29 = 1;
                          if ( v29 )
                          {
                            sub_88DC(
                              &v52,
                              (int)"authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
                              v25,
                              v23);
                            goto LABEL_30;
                          }
                          v27 = v21 - 48;
                          v28 = *(unsigned __int8 *)++v25;
                          v21 = v28;
                          v22 = v27 + 10 * v22;
                        }
                        while ( v28 );
                        if ( sub_9B7C(v18, 0, v53) )
                        {
                          if ( v22 != -1 )
                          {
                            if ( v53[0] == 2 )
                            {
                              if ( v22 > 0x20 )
                                goto LABEL_68;
                            }
                            else
                            {
                              v30 = v22 > 0x80;
                              if ( v53[0] != 10 )
                                v30 = 0;
                              if ( !v30 )
                                goto LABEL_42;
LABEL_68:
                              sub_88DC(0, (int)"authreadkeys: excessive subnet mask <%s/%s> for key %d", (int)v18, v23);
                            }
                          }
LABEL_42:
                          *(_DWORD *)(v17 + 4) = sub_7534(*(_DWORD *)(v17 + 4), v53, v22);
                          goto LABEL_30;
                        }
                      }
                      else if ( sub_9B7C(v18, 0, v53) )
                      {
                        v22 = 0;
                        goto LABEL_42;
                      }
                    }
                    else if ( sub_9B7C(v18, 0, v53) )
                    {
                      v22 = -1;
                      goto LABEL_42;
                    }
                    sub_88DC(&v52, (int)"authreadkeys: invalid IP address <%s> for key %d", (int)v18, v6);
LABEL_30:
                    if ( v19 )
                    {
                      v18 = (unsigned __int8 *)(v19 + 1);
                      if ( v19 != (char *)-1 )
                        continue;
                    }
                    v1 = v49;
                    break;
                  }
                }
                if ( v48 )
                {
                  *(_DWORD *)v17 = v1;
                  v1 = v17;
                }
                else
                {
                  sub_895C((_DWORD *)v17);
                }
              }
              else
              {
                sub_88DC(&v52, (int)"authreadkeys: invalid hex digit for key %d", v6, v36);
              }
            }
            else
            {
              sub_88DC(0, (int)"authreadkeys: invalid type for key %d", v6, 0);
              v12 = sub_87C8((unsigned __int8 **)&v51);
              v14 = v12;
              if ( v12 )
                goto LABEL_16;
LABEL_66:
              sub_88DC(&v52, (int)"authreadkeys: no key for key %d", v6, v13);
            }
          }
          else
          {
            sub_88DC(&v52, (int)"authreadkeys: no key type for key %d", v6, v8);
          }
        }
      }
      else
      {
        sub_88DC(&v52, (int)"authreadkeys: cannot change key %s", v3, v5);
      }
    }
  }
  fclose(stream);
  if ( v52 )
  {
    if ( v52 > 0xF )
      v42 = " (emergency break)";
    else
      v42 = "";
    sub_A848(3, "authreadkeys: rejecting file '%s' after %u error(s)%s", a1, v52, v42);
    if ( v1 )
    {
      v43 = (_DWORD *)v1;
      do
      {
        v44 = (_DWORD *)*v43;
        sub_895C(v43);
        v43 = v44;
      }
      while ( v44 );
    }
    return 0;
  }
  else
  {
    sub_84A4();
    if ( v1 )
    {
      do
      {
        v46 = *(_DWORD *)v1;
        sub_8354(
          *(_DWORD *)(v1 + 8),
          *(_WORD *)(v1 + 12),
          (const void *)(v1 + 16),
          *(unsigned __int16 *)(v1 + 14),
          *(_DWORD *)(v1 + 4));
        *(_DWORD *)(v1 + 4) = 0;
        sub_895C((_DWORD *)v1);
        v1 = v46;
      }
      while ( v46 );
    }
    return 1;
  }
}
