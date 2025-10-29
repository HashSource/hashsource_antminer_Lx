void *__fastcall sub_2951C(int a1, int a2, int a3, int a4, unsigned int *a5, unsigned int a6)
{
  int v7; // r4
  int v9; // r4
  int v10; // r10
  int v11; // r11
  unsigned int v12; // r0
  int v13; // r5
  unsigned int v14; // r3
  unsigned int v15; // r2
  bool v16; // cc
  unsigned int v17; // r2
  bool v18; // cc
  int v19; // r2
  int v20; // r5
  unsigned __int16 v21; // r3
  unsigned int v22; // r1
  int v23; // r0
  int v24; // r8
  int v25; // r5
  int v26; // r6
  int v27; // r10
  int v28; // r0
  int v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r6
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r4
  unsigned int v35; // r3
  int v36; // r5
  unsigned __int16 v37; // r3
  unsigned int v38; // r8
  int v39; // r4
  int v40; // r6
  int v41; // r8
  int v42; // r10
  void *v43; // r4
  unsigned int v44; // r0
  unsigned int v45; // r3
  int v46; // r5
  unsigned int v47; // r3
  int v48; // r0
  int v49; // r6
  int v50; // r0
  int v51; // r0
  int v52; // r1
  int v53; // r3
  int v54; // r5
  int v55; // r0
  int v56; // r0
  int v57; // r1
  int v58; // r0
  int v59; // r0
  int v60; // r4
  int v61; // r0
  unsigned int v62; // r4
  int v63; // r12
  unsigned int v64; // r12
  int v65; // r1
  int v66; // r0
  int v67; // r1
  void ***v68; // r3
  int v70; // r3
  int v71; // r5
  int v72; // r0
  int v73; // r0
  int v74; // r1
  int v75; // r0
  int v76; // r0
  int v77; // r4
  int v78; // r0
  unsigned int v79; // r4
  int v80; // r12
  unsigned int v81; // r12
  int v82; // r1
  int v83; // r0
  int v84; // r1
  int v85; // r11
  const char *v86; // r0
  int v87; // r5
  int v88; // r3
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r1
  int v93; // r0
  int v94; // r0
  int v95; // r4
  int v96; // r0
  unsigned int v97; // r4
  int v98; // r12
  unsigned int v99; // r12
  int v100; // r1
  int v101; // r0
  int v102; // r1
  unsigned int v103; // r12
  unsigned int v104; // r3
  int v105; // r0
  unsigned __int16 v106; // r3
  unsigned int v107; // r1
  int v108; // r0
  int v109; // r6
  int v110; // r5
  int v111; // r10
  int v112; // r8
  int v113; // r0
  unsigned int v114; // r12
  unsigned int v115; // r4
  unsigned int v116; // r1
  unsigned int v117; // lr
  int v118; // r1
  int v119; // r5
  unsigned __int16 v120; // r3
  unsigned int v121; // r1
  int v122; // r0
  int v123; // r8
  int v124; // r5
  int v125; // r6
  int v126; // r10
  unsigned int v127; // r0
  unsigned int v128; // r5
  unsigned int v129; // r4
  unsigned int v130; // r1
  unsigned int v131; // r12
  void *v132; // r0
  unsigned __int16 v133; // r3
  unsigned int v134; // r2
  int v135; // r0
  int v136; // r10
  int version; // r0
  int v138; // r0
  int v139; // r5
  int v140; // r0
  int v141; // r0
  int issuer_name; // r5
  size_t v143; // r0
  int subject_name; // r0
  int ext_count; // r0
  int v146; // r4
  int v147; // r5
  int ext; // r0
  int v149; // r6
  int v150; // r0
  const char *v151; // r0
  int v152; // r0
  const char *v153; // r0
  int v154; // r0
  const char *v155; // r0
  int v156; // r0
  const char *v157; // r0
  int v158; // r0
  const char *v159; // r0
  int v160; // r0
  const char *v161; // r0
  int error; // r0
  const char *v163; // r0
  int v164; // r0
  const char *v165; // r0
  int v166; // r0
  const char *v167; // r0
  int v168; // r0
  const char *v169; // r0
  int v170; // r1
  int v171; // r0
  int v172; // r0
  unsigned int v173; // r12
  unsigned int v174; // r0
  int v175; // r1
  int v176; // r4
  int v177; // r0
  const char *v178; // r0
  unsigned __int16 v179; // [sp+18h] [bp-274h]
  int v180; // [sp+1Ch] [bp-270h]
  _DWORD *v181; // [sp+20h] [bp-26Ch]
  int v182; // [sp+24h] [bp-268h]
  unsigned int v184; // [sp+28h] [bp-264h]
  int v185; // [sp+2Ch] [bp-260h]
  int v186; // [sp+2Ch] [bp-260h]
  int v187; // [sp+30h] [bp-25Ch]
  int v188; // [sp+30h] [bp-25Ch]
  int pubkey; // [sp+30h] [bp-25Ch]
  int v190; // [sp+34h] [bp-258h]
  int v191; // [sp+34h] [bp-258h]
  int v192; // [sp+38h] [bp-254h]
  int v193; // [sp+3Ch] [bp-250h]
  unsigned int v194; // [sp+44h] [bp-248h] BYREF
  unsigned int v195; // [sp+48h] [bp-244h] BYREF
  unsigned int v196; // [sp+4Ch] [bp-240h] BYREF
  unsigned int v197; // [sp+50h] [bp-23Ch] BYREF
  unsigned int v198; // [sp+54h] [bp-238h] BYREF
  unsigned int v199; // [sp+58h] [bp-234h] BYREF
  int v200; // [sp+5Ch] [bp-230h] BYREF
  int v201; // [sp+60h] [bp-22Ch]
  unsigned __int64 v202; // [sp+68h] [bp-224h] BYREF
  __int64 v203; // [sp+70h] [bp-21Ch]
  void *ptr_4[2]; // [sp+78h] [bp-214h]
  char v205[524]; // [sp+80h] [bp-20Ch] BYREF

  v7 = a4 + 3;
  if ( a4 >= 0 )
    v7 = a4;
  v9 = v7 >> 2;
  v10 = a1;
  v181 = (_DWORD *)(a2 + 4 * v9);
  v11 = bswap32(*a5);
  if ( a1 )
  {
    if ( v11 >= 0 )
      *(_DWORD *)(a1 + 128) = *a5;
    v180 = a1 + 16;
  }
  else
  {
    v180 = a3 + 4;
  }
  v12 = a5[1];
  v13 = 0;
  v14 = HIWORD(v11) << 16;
  v202 = 0;
  *(_DWORD *)(a2 + 4 * v9) = bswap32(v14 | 8);
  *(_DWORD *)(a2 + 4 * v9 + 4) = v12;
  v179 = bswap32(v12);
  if ( sys_leap != 3 )
  {
    sub_5F334(&v202);
    v13 = v202;
    v14 = HIWORD(v11) << 16;
  }
  if ( v14 == -2113863680 )
    goto LABEL_169;
  LOWORD(v15) = 0;
  if ( v14 <= 0x82010000 )
  {
    HIWORD(v15) = 518;
    if ( v14 == v15 )
    {
      sub_6636C(&v200, v13, 0);
      v87 = cert_host;
      if ( sub_2664C((unsigned __int8 *)&v200, (unsigned __int8 *)(cert_host + 28)) >= 0
        && sub_2664C((unsigned __int8 *)&v200, (unsigned __int8 *)(v87 + 38)) <= 0 )
      {
        return sub_26128(v181, (void **)(v87 + 60), a4);
      }
      v36 = 266;
      goto LABEL_115;
    }
    if ( v14 > v15 )
    {
      switch ( v14 )
      {
        case 0x2080000u:
          if ( !v10 )
            return byte_8;
          v53 = *(_DWORD *)(v10 + 172);
          if ( v53 )
          {
            v54 = EVP_PKEY_get0_RSA(*(_DWORD *)(v53 + 4));
            if ( v54 )
            {
              v55 = *(_DWORD *)(v10 + 176);
              if ( v55 )
                v55 = BN_free(v55);
              *(_DWORD *)(v10 + 176) = BN_new(v55);
              RSA_get0_key(v54, &v199, 0, 0);
              v56 = BN_num_bits(v199);
              v57 = v56 + 7;
              if ( v56 + 7 < 0 )
                v57 = v56 + 14;
              v58 = *(_DWORD *)(v10 + 176);
              v198 = v57 >> 3;
              v59 = BN_rand(v58, 8 * (v57 >> 3), -1, 1);
              v60 = BN_CTX_new(v59);
              BN_div(0, *(_DWORD *)(v10 + 176), *(_DWORD *)(v10 + 176), v199, v60);
              v61 = BN_CTX_free(v60);
              v202 = 0;
              v203 = 0;
              v201 = 0;
              v200 = 0;
              if ( sys_leap == 3 )
                v61 = 0;
              *(_QWORD *)ptr_4 = 0;
              if ( sys_leap == 3 )
              {
                v62 = v61;
              }
              else
              {
                sub_5F334(&v200);
                v62 = v200;
                v61 = bswap32(v200);
              }
              v63 = *(_DWORD *)(v10 + 172);
              LODWORD(v202) = v61;
              v64 = *(_DWORD *)(v63 + 12);
              LODWORD(v203) = bswap32(v198);
              HIDWORD(v202) = bswap32(v64);
              v65 = sub_637E4(0, v198, 0, 0);
              v66 = *(_DWORD *)(v10 + 176);
              HIDWORD(v203) = v65;
              BN_bn2bin(v66, v65);
              if ( !v62 )
                goto LABEL_167;
              ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
              v34 = EVP_MD_CTX_new(ptr_4[1], v67);
              EVP_DigestInit(v34, dword_B88E8);
              EVP_DigestUpdate(v34, &v202, 12);
              EVP_DigestUpdate(v34, HIDWORD(v203), v198);
              if ( !EVP_SignFinal(v34, ptr_4[1], &v198, dword_B88E0) )
                goto LABEL_154;
              v35 = v198;
              if ( v198 > dword_B88E4 )
                sub_6E8F0("ntp_crypto.c", 2554, 2, "len <= sign_siglen");
              goto LABEL_153;
            }
            v36 = 260;
            sub_64A18(5, "crypto_alice2: defective key");
            goto LABEL_115;
          }
          break;
        case 0x2090000u:
          if ( !v10 )
            return byte_8;
          v88 = *(_DWORD *)(v10 + 172);
          if ( v88 )
          {
            v89 = EVP_PKEY_get0_DSA(*(_DWORD *)(v88 + 4));
            if ( v89 )
            {
              DSA_get0_pqg(v89, &v199, 0);
              v90 = *(_DWORD *)(v10 + 176);
              if ( v90 )
                v90 = BN_free(v90);
              *(_DWORD *)(v10 + 176) = BN_new(v90);
              v91 = BN_num_bits(v199);
              v92 = v91 + 7;
              if ( v91 + 7 < 0 )
                v92 = v91 + 14;
              v93 = *(_DWORD *)(v10 + 176);
              v198 = v92 >> 3;
              v94 = BN_rand(v93, 8 * (v92 >> 3), -1, 1);
              v95 = BN_CTX_new(v94);
              BN_div(0, *(_DWORD *)(v10 + 176), *(_DWORD *)(v10 + 176), v199, v95);
              v96 = BN_CTX_free(v95);
              v202 = 0;
              v203 = 0;
              v201 = 0;
              v200 = 0;
              if ( sys_leap == 3 )
                v96 = 0;
              *(_QWORD *)ptr_4 = 0;
              if ( sys_leap == 3 )
              {
                v97 = v96;
              }
              else
              {
                sub_5F334(&v200);
                v97 = v200;
                v96 = bswap32(v200);
              }
              v98 = *(_DWORD *)(v10 + 172);
              LODWORD(v202) = v96;
              v99 = *(_DWORD *)(v98 + 12);
              LODWORD(v203) = bswap32(v198);
              HIDWORD(v202) = bswap32(v99);
              v100 = sub_637E4(0, v198, 0, 0);
              v101 = *(_DWORD *)(v10 + 176);
              HIDWORD(v203) = v100;
              BN_bn2bin(v101, v100);
              if ( !v97 )
                goto LABEL_167;
              ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
              v34 = EVP_MD_CTX_new(ptr_4[1], v102);
              EVP_DigestInit(v34, dword_B88E8);
              EVP_DigestUpdate(v34, &v202, 12);
              EVP_DigestUpdate(v34, HIDWORD(v203), v198);
              if ( !EVP_SignFinal(v34, ptr_4[1], &v198, dword_B88E0) )
                goto LABEL_154;
              v35 = v198;
              if ( v198 > dword_B88E4 )
                sub_6E8F0("ntp_crypto.c", 2898, 2, "len <= sign_siglen");
              goto LABEL_153;
            }
            v36 = 260;
            sub_64A18(5, "crypto_alice3: defective key");
            goto LABEL_115;
          }
          break;
        case 0x2070000u:
          if ( !v10 )
            return byte_8;
          v70 = *(_DWORD *)(v10 + 172);
          if ( v70 )
          {
            v71 = EVP_PKEY_get0_DSA(*(_DWORD *)(v70 + 4));
            if ( v71 )
            {
              v72 = *(_DWORD *)(v10 + 176);
              if ( v72 )
                v72 = BN_free(v72);
              *(_DWORD *)(v10 + 176) = BN_new(v72);
              DSA_get0_pqg(v71, 0, &v199);
              v73 = BN_num_bits(v199);
              v74 = v73 + 7;
              if ( v73 + 7 < 0 )
                v74 = v73 + 14;
              v75 = *(_DWORD *)(v10 + 176);
              v198 = v74 >> 3;
              v76 = BN_rand(v75, 8 * (v74 >> 3), -1, 1);
              v77 = BN_CTX_new(v76);
              BN_div(0, *(_DWORD *)(v10 + 176), *(_DWORD *)(v10 + 176), v199, v77);
              v78 = BN_CTX_free(v77);
              v202 = 0;
              v203 = 0;
              v201 = 0;
              v200 = 0;
              if ( sys_leap == 3 )
                v78 = 0;
              *(_QWORD *)ptr_4 = 0;
              if ( sys_leap == 3 )
              {
                v79 = v78;
              }
              else
              {
                sub_5F334(&v200);
                v79 = v200;
                v78 = bswap32(v200);
              }
              v80 = *(_DWORD *)(v10 + 172);
              LODWORD(v202) = v78;
              v81 = *(_DWORD *)(v80 + 12);
              LODWORD(v203) = bswap32(v198);
              HIDWORD(v202) = bswap32(v81);
              v82 = sub_637E4(0, v198, 0, 0);
              v83 = *(_DWORD *)(v10 + 176);
              HIDWORD(v203) = v82;
              BN_bn2bin(v83, v82);
              if ( !v79 )
                goto LABEL_167;
              ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
              v34 = EVP_MD_CTX_new(ptr_4[1], v84);
              EVP_DigestInit(v34, dword_B88E8);
              EVP_DigestUpdate(v34, &v202, 12);
              EVP_DigestUpdate(v34, HIDWORD(v203), v198);
              if ( !EVP_SignFinal(v34, ptr_4[1], &v198, dword_B88E0) )
                goto LABEL_154;
              v35 = v198;
              if ( v198 > dword_B88E4 )
                sub_6E8F0("ntp_crypto.c", 2224, 2, "len <= sign_siglen");
              goto LABEL_153;
            }
            v36 = 260;
            sub_64A18(5, "crypto_alice: defective key");
          }
          else
          {
            v36 = 270;
            sub_64A18(5, "crypto_alice: scheme unavailable");
          }
          goto LABEL_115;
        default:
          goto LABEL_39;
      }
      goto LABEL_189;
    }
    if ( v14 == 33685504 )
    {
      v103 = a5[2];
      v104 = a5[4];
      HIDWORD(v202) = a5[3];
      *(_QWORD *)ptr_4 = 0;
      LODWORD(v202) = v103;
      LODWORD(v203) = v104;
      HIDWORD(v203) = a5 + 5;
      return sub_26128(v181, (void **)&v202, a4);
    }
    if ( v14 == 33751040 )
    {
      v68 = (void ***)&pubkey_ptr;
      return sub_26128(v181, *v68, a4);
    }
    if ( v14 != 33619968 )
      goto LABEL_39;
LABEL_169:
    v132 = sub_26128(v181, (void **)&hostval, a4);
    v181[3] = bswap32(crypto_flags);
    return v132;
  }
  HIWORD(v15) = -32251;
  v16 = v14 > v15;
  if ( v14 == v15 )
  {
    v68 = (void ***)&tai_leap_ptr;
    return sub_26128(v181, *v68, a4);
  }
  LOWORD(v17) = 0;
  if ( !v16 )
  {
    HIWORD(v17) = -32253;
    if ( v14 != v17 )
    {
      if ( v14 == -2113667072 )
      {
        if ( v10 || (v10 = sub_3197C(v179)) != 0 )
        {
          *(_DWORD *)(v10 + 68) &= ~0x8000u;
          return sub_26128(v181, (void **)(v10 + 272), a4);
        }
LABEL_40:
        v36 = 271;
        goto LABEL_115;
      }
      if ( v14 == -2113798144 )
      {
        v37 = bswap32(*a5);
        if ( v37 > 0x13u )
        {
          v38 = bswap32(a5[4]);
          if ( v38 <= (unsigned int)v37 - 20 && v38 - 1 < 0x200 )
          {
            _memcpy_chk(v205, a5 + 5);
            v205[v38] = 0;
            v39 = cinfo;
            if ( cinfo )
            {
              v40 = 0;
              v41 = 0;
              do
              {
                v42 = *(_DWORD *)(v39 + 4);
                if ( (v42 & 0x88) == 0 && !strcmp(v205, *(const char **)(v39 + 48)) )
                {
                  if ( !strcmp(v205, *(const char **)(v39 + 52)) )
                  {
                    if ( (v42 & 1) != 0 )
                      v41 = v39;
                  }
                  else
                  {
                    v40 = v39;
                  }
                }
                v39 = *(_DWORD *)v39;
              }
              while ( v39 );
              if ( !v41 )
              {
                if ( !v40 )
                  return byte_8;
                v41 = v40;
              }
              if ( v13 )
                return sub_26128(v181, (void **)(v41 + 60), a4);
            }
            return byte_8;
          }
        }
        goto LABEL_114;
      }
LABEL_39:
      if ( v11 >= 0 )
        return byte_8;
      goto LABEL_40;
    }
    v44 = bswap32(a5[4]);
    if ( v44 - 1 <= 0xFFE5 )
    {
      v45 = (unsigned __int16)v11;
      if ( (unsigned __int16)v11 >= v44 + 24 )
      {
        v199 = v44;
        if ( v10 )
          v45 = *(_DWORD *)(v10 + 164);
        v198 = (unsigned int)(a5 + 5);
        if ( v10 )
          a6 = v45;
        v46 = d2i_PublicKey(6, 0, &v198, v44);
        if ( v46 )
        {
          v47 = 0;
          v202 = 0;
          v203 = 0;
          v201 = 0;
          if ( sys_leap == 3 )
            v10 = 0;
          v200 = 0;
          *(_QWORD *)ptr_4 = 0;
          if ( sys_leap != 3 )
          {
            sub_5F334(&v200);
            v10 = v200;
            v47 = bswap32(v200);
          }
          v202 = __PAIR64__(hostval, v47);
          v199 = EVP_PKEY_size(v46);
          LODWORD(v203) = bswap32(v199);
          v48 = sub_637E4(0, v199, 0, 0);
          v200 = bswap32(a6);
          v49 = v48;
          HIDWORD(v203) = v48;
          v50 = EVP_PKEY_get0_RSA(v46);
          v51 = RSA_public_encrypt(4, &v200, v49, v50, 4);
          if ( v51 > 0 )
          {
            EVP_PKEY_free(v46);
            if ( v10 )
            {
              ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
              v34 = EVP_MD_CTX_new(ptr_4[1], v52);
              EVP_DigestInit(v34, dword_B88E8);
              EVP_DigestUpdate(v34, &v202, 12);
              EVP_DigestUpdate(v34, HIDWORD(v203), v199);
              if ( EVP_SignFinal(v34, ptr_4[1], &v199, dword_B88E0) )
              {
                v35 = v199;
                if ( v199 > dword_B88E4 )
                  sub_6E8F0("ntp_crypto.c", 1631, 2, "vallen <= sign_siglen");
LABEL_153:
                ptr_4[0] = (void *)bswap32(v35);
                goto LABEL_154;
              }
              goto LABEL_154;
            }
            goto LABEL_167;
          }
          error = ERR_get_error(v51);
          v163 = (const char *)ERR_error_string(error, 0);
          sub_64A18(3, "crypto_encrypt: %s", v163);
          free((void *)HIDWORD(v203));
          EVP_PKEY_free(v46);
          v36 = 267;
        }
        else
        {
          v158 = ERR_get_error(0);
          v159 = (const char *)ERR_error_string(v158, 0);
          v36 = 260;
          sub_64A18(3, "crypto_encrypt: %s", v159);
        }
        goto LABEL_115;
      }
    }
    goto LABEL_114;
  }
  HIWORD(v17) = -32249;
  v18 = v14 > v17;
  if ( v14 == v17 )
  {
    if ( !iffkey_info )
    {
      v36 = 270;
      sub_64A18(5, "crypto_bob: scheme unavailable");
      goto LABEL_115;
    }
    v119 = EVP_PKEY_get0_DSA(*(_DWORD *)(iffkey_info + 4));
    DSA_get0_pqg(v119, &v196, &v197);
    DSA_get0_key(v119, 0, &v199);
    v120 = bswap32(*a5);
    if ( v120 > 0x13u )
    {
      v121 = bswap32(a5[4]);
      if ( v121 <= (unsigned int)v120 - 20 )
      {
        v195 = v121;
        if ( v121 - 1 <= 0xFFE6 )
        {
          v122 = BN_bin2bn(a5 + 5, v121, 0);
          v186 = v122;
          if ( v122 )
          {
            v123 = BN_CTX_new(v122);
            v124 = ((int (*)(void))BN_new)();
            v125 = ((int (*)(void))BN_new)();
            v126 = DSA_SIG_new();
            BN_rand(v124, 8 * v195, -1, 1);
            BN_mod_mul(v125, v199, v186, v197, v123);
            BN_add(v125, v125, v124);
            BN_div(0, v125, v125, v197, v123);
            BN_mod_exp(v124, v198, v124, v196, v123);
            sub_262EC(v124, v124);
            DSA_SIG_set0(v126, v125, v124);
            BN_CTX_free(v123);
            BN_free(v186);
            v127 = i2d_DSA_SIG(v126, 0);
            v128 = v127;
            v195 = v127;
            if ( v127 )
            {
              if ( v127 <= 0xFFE7 )
              {
                v202 = 0;
                v203 = 0;
                v201 = 0;
                v200 = 0;
                *(_QWORD *)ptr_4 = 0;
                if ( sys_leap == 3 )
                {
                  v130 = 0;
                  v129 = 0;
                }
                else
                {
                  sub_5F334(&v200);
                  v129 = v200;
                  v128 = v195;
                  v130 = bswap32(v200);
                }
                LODWORD(v202) = v130;
                v131 = *(_DWORD *)(iffkey_info + 12);
                LODWORD(v203) = bswap32(v128);
                HIDWORD(v202) = bswap32(v131);
                v200 = sub_637E4(0, v128, 0, 0);
                HIDWORD(v203) = v200;
                i2d_DSA_SIG(v126, &v200);
                DSA_SIG_free(v126);
                if ( !v129 )
                  goto LABEL_167;
                ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
                v34 = EVP_MD_CTX_new(ptr_4[1], v170);
                EVP_DigestInit(v34, dword_B88E8);
                EVP_DigestUpdate(v34, &v202, 12);
                EVP_DigestUpdate(v34, HIDWORD(v203), v195);
                if ( !EVP_SignFinal(v34, ptr_4[1], &v195, dword_B88E0) )
                  goto LABEL_154;
                v35 = v195;
                if ( v195 > dword_B88E4 )
                  sub_6E8F0("ntp_crypto.c", 2337, 2, "len <= sign_siglen");
                goto LABEL_153;
              }
              v36 = 257;
              sub_64A18(3, "crypto_bob: signature is too big: %u", v127);
              DSA_SIG_free(v126);
            }
            else
            {
              v164 = ERR_get_error(0);
              v165 = (const char *)ERR_error_string(v164, 0);
              v36 = 271;
              sub_64A18(3, "crypto_bob: %s", v165);
              DSA_SIG_free(v126);
            }
          }
          else
          {
            v154 = ERR_get_error(0);
            v155 = (const char *)ERR_error_string(v154, 0);
            v36 = 271;
            sub_64A18(3, "crypto_bob: %s", v155);
          }
          goto LABEL_115;
        }
      }
    }
    goto LABEL_114;
  }
  LOWORD(v19) = 0;
  if ( v18 )
  {
    HIWORD(v19) = -32248;
    if ( v14 == v19 )
    {
      if ( !gqkey_info )
      {
        v36 = 270;
        sub_64A18(5, "crypto_bob2: scheme unavailable");
        goto LABEL_115;
      }
      v105 = EVP_PKEY_get0_RSA(*(_DWORD *)(gqkey_info + 4));
      RSA_get0_key(v105, &v197, &v198, &v199);
      v106 = bswap32(*a5);
      if ( v106 > 0x13u )
      {
        v107 = bswap32(a5[4]);
        if ( v107 <= (unsigned int)v106 - 20 )
        {
          v196 = v107;
          if ( v107 - 1 <= 0xFFE6 )
          {
            v108 = BN_bin2bn(a5 + 5, v107, 0);
            v185 = v108;
            if ( v108 )
            {
              v109 = BN_CTX_new(v108);
              v110 = ((int (*)(void))BN_new)();
              v111 = ((int (*)(void))BN_new)();
              v112 = ((int (*)(void))BN_new)();
              v188 = DSA_SIG_new();
              BN_rand(v110, 8 * v196, -1, 1);
              BN_div(0, v110, v110, v197, v109);
              BN_mod_exp(v112, v198, v185, v197, v109);
              BN_mod_mul(v112, v110, v112, v197, v109);
              BN_mod_exp(v111, v110, v199, v197, v109);
              sub_262EC(v111, v111);
              DSA_SIG_set0(v188, v112, v111);
              BN_CTX_free(v109);
              BN_free(v185);
              BN_free(v110);
              v113 = i2d_DSA_SIG(v188, 0);
              v114 = v113;
              v196 = v113;
              if ( v113 > 0 )
              {
                v202 = 0;
                v203 = 0;
                v201 = 0;
                v200 = 0;
                *(_QWORD *)ptr_4 = 0;
                if ( sys_leap == 3 )
                {
                  v116 = 0;
                  v115 = 0;
                }
                else
                {
                  sub_5F334(&v200);
                  v115 = v200;
                  v114 = v196;
                  v116 = bswap32(v200);
                }
                LODWORD(v202) = v116;
                v117 = *(_DWORD *)(gqkey_info + 12);
                LODWORD(v203) = bswap32(v114);
                HIDWORD(v202) = bswap32(v117);
                v200 = sub_637E4(0, v114, 0, 0);
                HIDWORD(v203) = v200;
                i2d_DSA_SIG(v188, &v200);
                DSA_SIG_free(v188);
                if ( !v115 )
                  goto LABEL_167;
                ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
                v34 = EVP_MD_CTX_new(ptr_4[1], v118);
                EVP_DigestInit(v34, dword_B88E8);
                EVP_DigestUpdate(v34, &v202, 12);
                EVP_DigestUpdate(v34, HIDWORD(v203), v196);
                if ( !EVP_SignFinal(v34, ptr_4[1], &v196, dword_B88E0) )
                  goto LABEL_154;
                v35 = v196;
                if ( v196 > dword_B88E4 )
                  sub_6E8F0("ntp_crypto.c", 2659, 2, "len <= sign_siglen");
                goto LABEL_153;
              }
              v160 = ERR_get_error(v113);
              v161 = (const char *)ERR_error_string(v160, 0);
              v36 = 271;
              sub_64A18(3, "crypto_bob2: %s", v161);
              DSA_SIG_free(v188);
            }
            else
            {
              v156 = ERR_get_error(0);
              v157 = (const char *)ERR_error_string(v156, 0);
              v36 = 271;
              sub_64A18(3, "crypto_bob2: %s", v157);
            }
            goto LABEL_115;
          }
        }
      }
      goto LABEL_114;
    }
    if ( v14 != -2113339392 )
      goto LABEL_39;
    if ( mvkey_info )
    {
      v20 = EVP_PKEY_get0_DSA(*(_DWORD *)(mvkey_info + 4));
      DSA_get0_pqg(v20, &v195, &v196);
      DSA_get0_key(v20, &v198, &v199);
      v21 = bswap32(*a5);
      if ( v21 > 0x13u )
      {
        v22 = bswap32(a5[4]);
        if ( v22 <= (unsigned int)v21 - 20 )
        {
          v194 = v22;
          if ( v22 - 1 <= 0xFFE6 )
          {
            v23 = BN_bin2bn(a5 + 5, v22, 0);
            v187 = v23;
            if ( v23 )
            {
              v24 = BN_CTX_new(v23);
              v25 = ((int (*)(void))BN_new)();
              v26 = ((int (*)(void))BN_new)();
              v27 = DSA_new();
              v190 = ((int (*)(void))BN_new)();
              v192 = ((int (*)(void))BN_new)();
              v193 = ((int (*)(void))BN_new)();
              do
              {
                v28 = BN_num_bits(v196);
                BN_rand(v25, v28, 0, 0);
                BN_div(0, v25, v25, v196, v24);
                BN_gcd(v26, v25, v196, v24);
              }
              while ( !BN_is_one(v26) );
              BN_mod_exp(v26, v197, v25, v195, v24);
              BN_mod_mul(v190, v26, v187, v195, v24);
              BN_mod_exp(v192, v199, v25, v195, v24);
              BN_mod_exp(v193, v198, v25, v195, v24);
              v29 = BN_dup(v198);
              DSA_set0_key(v27, v29, 0);
              DSA_set0_pqg(v27, v190, v192, v193);
              BN_CTX_free(v24);
              BN_free(v25);
              BN_free(v187);
              BN_free(v26);
              v30 = 0;
              v202 = 0;
              v203 = 0;
              v201 = 0;
              v200 = 0;
              *(_QWORD *)ptr_4 = 0;
              if ( sys_leap == 3 )
              {
                v31 = 0;
              }
              else
              {
                sub_5F334(&v200);
                v31 = v200;
                v30 = bswap32(v200);
              }
              LODWORD(v202) = v30;
              HIDWORD(v202) = bswap32(*(_DWORD *)(mvkey_info + 12));
              v32 = i2d_DSAparams(v27, 0);
              v194 = v32;
              if ( v32 )
              {
                LODWORD(v203) = bswap32(v32);
                v200 = sub_637E4(0, v32, 0, 0);
                HIDWORD(v203) = v200;
                i2d_DSAparams(v27, &v200);
                DSA_free(v27);
                if ( v31 )
                {
                  ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
                  v34 = EVP_MD_CTX_new(ptr_4[1], v33);
                  EVP_DigestInit(v34, dword_B88E8);
                  EVP_DigestUpdate(v34, &v202, 12);
                  EVP_DigestUpdate(v34, HIDWORD(v203), v194);
                  if ( EVP_SignFinal(v34, ptr_4[1], &v194, dword_B88E0) )
                  {
                    v35 = v194;
                    if ( v194 > dword_B88E4 )
                      sub_6E8F0("ntp_crypto.c", 3011, 2, "len <= sign_siglen");
                    goto LABEL_153;
                  }
LABEL_154:
                  EVP_MD_CTX_free(v34);
                }
LABEL_167:
                v43 = sub_26128(v181, (void **)&v202, a4);
                sub_278F0((int)&v202);
                return v43;
              }
              v150 = ERR_get_error(0);
              v151 = (const char *)ERR_error_string(v150, 0);
              v36 = 271;
              sub_64A18(3, "crypto_bob3: %s", v151);
              DSA_free(v27);
            }
            else
            {
              v152 = ERR_get_error(0);
              v153 = (const char *)ERR_error_string(v152, 0);
              v36 = 271;
              sub_64A18(3, "crypto_bob3: %s", v153);
            }
LABEL_115:
            v85 = v11 | 0x40000000;
            *(_DWORD *)(a2 + 4 * v9) |= 0x40u;
            v86 = (const char *)sub_6D014(v36);
            sub_6BCB0(v205, 256, "%04x %d %02x %s", v85, v179, v36, v86);
            sub_42270(v180, v205);
            if ( v85 >= 0 )
              return 0;
            return byte_8;
          }
        }
      }
LABEL_114:
      v36 = 257;
      goto LABEL_115;
    }
    sub_64A18(5, "crypto_bob3: scheme unavailable");
LABEL_189:
    v36 = 270;
    goto LABEL_115;
  }
  HIWORD(v19) = -32250;
  if ( v14 != v19 )
    goto LABEL_39;
  v202 = 0;
  if ( sys_leap == 3 || (sub_5F334(&v202), (v184 = v202) == 0) )
  {
    v36 = 258;
    goto LABEL_115;
  }
  v133 = bswap32(*a5);
  if ( v133 <= 0x13u )
    goto LABEL_114;
  v134 = bswap32(a5[4]);
  if ( v134 > (unsigned int)v133 - 20 )
    goto LABEL_114;
  v197 = v134;
  if ( v134 - 1 > 0xFFE6 )
    goto LABEL_114;
  v198 = (unsigned int)(a5 + 5);
  v135 = d2i_X509(0, &v198, v134);
  v182 = v135;
  if ( !v135 )
  {
    v166 = ERR_get_error(0);
    v167 = (const char *)ERR_error_string(v166, 0);
    v36 = 269;
    sub_64A18(3, "cert_sign: %s", v167);
    goto LABEL_115;
  }
  pubkey = X509_get_pubkey(v135);
  if ( !pubkey )
  {
    v168 = ERR_get_error(0);
    v169 = (const char *)ERR_error_string(v168, 0);
    v36 = 260;
    sub_64A18(3, "cert_sign: %s", v169);
    X509_free(v182);
    goto LABEL_115;
  }
  v136 = X509_new();
  version = X509_get_version(v182);
  v138 = X509_set_version(v136, version);
  v139 = ASN1_INTEGER_new(v138);
  ASN1_INTEGER_set(v139, v184);
  X509_set_serialNumber(v136, v139);
  v140 = X509_getm_notBefore(v136);
  X509_gmtime_adj(v140, 0);
  v141 = X509_getm_notAfter(v136);
  X509_gmtime_adj(v141, 31536000);
  issuer_name = X509_get_issuer_name(v136);
  v143 = strlen((const char *)dword_107274);
  X509_NAME_add_entry_by_txt(issuer_name, "commonName", 4097, dword_107274, v143, -1, 0);
  subject_name = X509_get_subject_name(v182);
  X509_set_subject_name(v136, subject_name);
  X509_set_pubkey(v136, pubkey);
  ext_count = X509_get_ext_count(v182);
  if ( ext_count > 0 )
  {
    v191 = v9;
    v146 = 0;
    v147 = ext_count;
    do
    {
      ext = X509_get_ext(v182, v146);
      if ( !X509_add_ext(v136, ext, -1) )
        sub_6E8F0("ntp_crypto.c", 3218, 2, "X509_add_ext(cert, ext, -1)");
      ++v146;
    }
    while ( v147 != v146 );
    v9 = v191;
  }
  X509_free(v182);
  sub_6636C(&v200, v184, 0);
  v149 = cert_host;
  if ( sub_2664C((unsigned __int8 *)&v200, (unsigned __int8 *)(cert_host + 28)) < 0
    || sub_2664C((unsigned __int8 *)&v200, (unsigned __int8 *)(v149 + 38)) > 0 )
  {
    v36 = 266;
    X509_free(v136);
    goto LABEL_115;
  }
  X509_sign(v136, dword_B88E0, dword_B88E8);
  v171 = X509_verify(v136, dword_B88E0);
  if ( v171 <= 0 )
  {
    v177 = ERR_get_error(v171);
    v178 = (const char *)ERR_error_string(v177, 0);
    v36 = 265;
    sub_64A18(3, "cert_sign: %s", v178);
    X509_free(v136);
    goto LABEL_115;
  }
  v172 = i2d_X509(v136, 0);
  LODWORD(v202) = bswap32(v184);
  *(_QWORD *)ptr_4 = 0;
  v173 = v172;
  v174 = a5[3];
  v197 = v173;
  v203 = bswap32(v173);
  HIDWORD(v202) = v174;
  v199 = sub_637E4(0, v173, 0, 0);
  HIDWORD(v203) = v199;
  i2d_X509(v136, &v199);
  ptr_4[0] = 0;
  ptr_4[1] = (void *)sub_637E4(0, dword_B88E4, 0, 0);
  v176 = EVP_MD_CTX_new(ptr_4[1], v175);
  EVP_DigestInit(v176, dword_B88E8);
  EVP_DigestUpdate(v176, &v202, 12);
  EVP_DigestUpdate(v176, HIDWORD(v203), v197);
  if ( EVP_SignFinal(v176, ptr_4[1], &v197, dword_B88E0) )
  {
    if ( v197 > dword_B88E4 )
      sub_6E8F0("ntp_crypto.c", 3261, 2, "len <= sign_siglen");
    ptr_4[0] = (void *)bswap32(v197);
  }
  EVP_MD_CTX_free(v176);
  X509_free(v136);
  v43 = sub_26128(v181, (void **)&v202, a4);
  sub_278F0((int)&v202);
  return v43;
}
