int __fastcall sub_28028(int a1, int a2)
{
  int v3; // r12
  unsigned int v4; // r0
  int v5; // r8
  size_t v6; // r7
  int v7; // r6
  unsigned int *v8; // r4
  unsigned int v9; // r9
  unsigned int v10; // r3
  int v11; // r5
  unsigned __int16 v12; // lr
  _BOOL4 v13; // r2
  int v14; // r9
  int v15; // r5
  const char *v16; // r0
  unsigned int v18; // r2
  int v19; // r3
  const char *v20; // r1
  int v21; // r9
  void *v22; // r0
  void *v23; // r0
  _DWORD *v24; // r0
  int v25; // r3
  int v26; // r0
  bool v27; // zf
  int v28; // r2
  unsigned int v29; // r2
  int v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r12
  unsigned __int64 *v33; // r0
  unsigned int v34; // lr
  unsigned int v35; // r1
  unsigned int v36; // r3
  unsigned int v37; // r2
  unsigned __int64 v38; // r2
  unsigned int v39; // r12
  int v40; // lr
  int v41; // r3
  int v42; // r0
  int v43; // r0
  int v44; // r0
  unsigned int v45; // r2
  int v46; // r0
  int v47; // r1
  int v48; // r12
  const char *v49; // r3
  unsigned int v50; // r9
  int v51; // r0
  int digestbyname; // r3
  __int16 v53; // r2
  int v54; // r2
  void *v55; // r0
  void *v56; // r0
  void *v57; // r0
  int v58; // r0
  int v59; // r4
  int v60; // r0
  void *v61; // r0
  void *v62; // r0
  int v63; // r9
  void *v64; // r0
  int v65; // r0
  int v66; // r3
  const char *v67; // r1
  unsigned int v68; // r2
  int v69; // r0
  int v70; // r0
  int v71; // r3
  unsigned int v72; // r9
  _DWORD *v73; // r0
  int v74; // r2
  const char *v75; // r3
  int v76; // r1
  const char *v77; // r0
  size_t v78; // r0
  unsigned int *v79; // r0
  unsigned int *v80; // r9
  unsigned int v81; // r7
  unsigned int v82; // r2
  unsigned int v83; // r7
  int v84; // r3
  unsigned int v85; // r1
  unsigned int v86; // r0
  unsigned int v87; // r2
  unsigned int v88; // r3
  int v89; // r0
  int v90; // r0
  unsigned int v91; // r2
  int v92; // r12
  const char *v93; // r3
  int v94; // r0
  int v95; // r0
  int v96; // r0
  unsigned int v97; // r2
  int v98; // r0
  int v99; // r12
  const char *v100; // r3
  int v101; // r3
  int v102; // r2
  int v103; // r1
  const char *v104; // r3
  int v105; // r9
  const char *v106; // r0
  int v107; // r0
  int v108; // r0
  const char *v109; // r0
  int v110; // r0
  int error; // r0
  const char *v112; // r0
  int v113; // r0
  const char *v114; // r0
  int v115; // r0
  unsigned int v116; // r2
  int v117; // [sp+0h] [bp-184h]
  unsigned int v118; // [sp+0h] [bp-184h]
  unsigned int v119; // [sp+0h] [bp-184h]
  unsigned int v120; // [sp+0h] [bp-184h]
  int v121; // [sp+1Ch] [bp-168h]
  int v122; // [sp+1Ch] [bp-168h]
  int v123; // [sp+1Ch] [bp-168h]
  int v124; // [sp+1Ch] [bp-168h]
  int v125; // [sp+1Ch] [bp-168h]
  int v126; // [sp+1Ch] [bp-168h]
  const char *v127; // [sp+1Ch] [bp-168h]
  int v128; // [sp+1Ch] [bp-168h]
  unsigned __int16 v129; // [sp+24h] [bp-160h]
  int v130; // [sp+24h] [bp-160h]
  const char *v131; // [sp+24h] [bp-160h]
  int v132; // [sp+24h] [bp-160h]
  unsigned int v133; // [sp+28h] [bp-15Ch]
  int v135; // [sp+38h] [bp-14Ch]
  int v136; // [sp+40h] [bp-144h]
  int v137; // [sp+40h] [bp-144h]
  int v138; // [sp+40h] [bp-144h]
  int v139; // [sp+40h] [bp-144h]
  int v140; // [sp+40h] [bp-144h]
  int v141; // [sp+40h] [bp-144h]
  int v142; // [sp+40h] [bp-144h]
  const char *v143; // [sp+40h] [bp-144h]
  int v144; // [sp+44h] [bp-140h]
  const char *v145; // [sp+44h] [bp-140h]
  int v146; // [sp+44h] [bp-140h]
  int v147; // [sp+44h] [bp-140h]
  int v148; // [sp+48h] [bp-13Ch]
  int v149; // [sp+48h] [bp-13Ch]
  int v150; // [sp+48h] [bp-13Ch]
  int v151; // [sp+48h] [bp-13Ch]
  int v152; // [sp+4Ch] [bp-138h]
  int v153; // [sp+4Ch] [bp-138h]
  int v154; // [sp+4Ch] [bp-138h]
  int v155; // [sp+4Ch] [bp-138h]
  int v156; // [sp+50h] [bp-134h]
  int v157; // [sp+50h] [bp-134h]
  int v158; // [sp+50h] [bp-134h]
  int v159; // [sp+54h] [bp-130h]
  int v160; // [sp+5Ch] [bp-128h] BYREF
  unsigned int *v161; // [sp+60h] [bp-124h] BYREF
  unsigned int *v162; // [sp+64h] [bp-120h] BYREF
  unsigned int *v163; // [sp+68h] [bp-11Ch] BYREF
  int v164; // [sp+6Ch] [bp-118h] BYREF
  int v165; // [sp+70h] [bp-114h] BYREF
  int v166; // [sp+74h] [bp-110h] BYREF
  int v167; // [sp+78h] [bp-10Ch] BYREF
  _BYTE v168[256]; // [sp+7Ch] [bp-108h] BYREF

  v3 = *(_DWORD *)(a2 + 84);
  v4 = v3 - 48;
  v135 = *(_BYTE *)(a2 + 88) & 7;
  if ( v3 - 48 > 24 )
  {
    v5 = a2 + 88;
    v6 = 0;
    v7 = 48;
    v133 = 0;
    do
    {
      v8 = (unsigned int *)(v5 + 4 * (v7 / 4));
      v9 = bswap32(*v8);
      v10 = v9 & 0xFFFF0000;
      v11 = (unsigned __int16)v9;
      v12 = bswap32(v8[1]);
      v129 = v12;
      v13 = (unsigned __int16)v9 <= 7u;
      if ( (((v9 & 0xFFFF0000) >> 24) & 0x3F) != 2 )
        v13 = 1;
      v121 = v12;
      if ( v13 )
      {
        v10 = v9 & 0xBFFF0000 | 0x40000000;
        ++sys_badlength;
      }
      if ( v4 < (unsigned __int16)v9 )
        return 257;
      if ( (unsigned __int16)v9 <= 0x17u )
      {
        if ( v10 == -2113863680 )
          goto LABEL_58;
        if ( v10 <= 0x82010000 )
        {
          if ( v10 == 33947648 )
            goto LABEL_164;
          if ( v10 > 0x2060000 )
          {
            if ( v10 == 34078720 || v10 == 34144256 || v10 == 34013184 )
            {
LABEL_164:
              v122 = a1 + 16;
              v15 = 257;
              goto LABEL_19;
            }
            goto LABEL_43;
          }
          if ( v10 == 33685504 || v10 == 33751040 )
            goto LABEL_164;
          goto LABEL_52;
        }
        if ( v10 == -2113601536 )
        {
LABEL_69:
          v26 = sub_263D8(v8, 0, a1);
          v27 = v6 == 12;
          if ( v6 == 12 )
            v27 = v26 == 256;
          v21 = v26;
          v28 = !v27;
          if ( v27 )
          {
            if ( sys_leap != 3 )
              sub_2DBA4(bswap32(v8[5]), *(_DWORD *)(a2 + 72), v28);
            v6 = 12;
            v29 = v8[3];
            *(_DWORD *)&tai_leap = v8[2];
            *(_DWORD *)&algn_107299[3] = v29;
            sub_277A4();
            sub_26094((__int16 *)&byte_9[5], a1, (int)"%d seconds", bswap32(v8[5]));
            v30 = *(_DWORD *)(a1 + 300);
            *(_DWORD *)(a1 + 136) |= 0x4000u;
            v31 = v8[3];
            *(_DWORD *)(a1 + 300) = v30 & 0xFFFFFF7F;
            sub_6BCB0(
              v168,
              256,
              "leap TAI offset %d at %u expire %u fs %u",
              bswap32(v8[5]),
              bswap32(v8[6]),
              bswap32(v8[7]),
              bswap32(v31));
            sub_42270(a1 + 16, v168);
            v3 = *(_DWORD *)(a2 + 84);
            goto LABEL_46;
          }
          if ( v26 != 256 )
            goto LABEL_39;
          goto LABEL_60;
        }
        LOWORD(v18) = 0;
        if ( v10 <= 0x82050000 )
        {
          HIWORD(v18) = -32253;
          if ( v10 == v18 )
          {
LABEL_38:
            v21 = sub_263D8(v8, (unsigned int *)(a1 + 184), a1);
            if ( v21 != 256 )
              goto LABEL_39;
            v139 = EVP_PKEY_size(dword_B88EC);
            if ( v139 != v6
              || (v126 = EVP_PKEY_get0_RSA(dword_B88EC),
                  v78 = RSA_size(),
                  v79 = (unsigned int *)malloc(v78),
                  (v80 = v79) == 0) )
            {
              v122 = a1 + 16;
              v15 = 267;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            if ( RSA_private_decrypt(v6, v8 + 5, v79, v126, 4) != 4 )
            {
              v122 = a1 + 16;
              free(v80);
              v15 = 267;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            v81 = *v80;
            free(v80);
            sub_3364C(a1);
            v82 = v8[3];
            v83 = bswap32(v81);
            v84 = v135 - 1;
            v85 = v8[2];
            if ( (unsigned int)(v135 - 1) <= 1 )
              v84 = *(_DWORD *)(a1 + 164);
            v86 = *(_DWORD *)(a1 + 300) & 0xFFFFFF7F;
            *(_DWORD *)(a1 + 136) |= 0x800u;
            v87 = bswap32(v82);
            if ( (unsigned int)(v135 - 1) <= 1 )
              v83 ^= v84;
            *(_DWORD *)(a1 + 300) = v86;
            *(_DWORD *)(a1 + 168) = v83;
            v88 = v83;
            v6 = v139;
            sub_6BCB0(v168, 256, "cook %x ts %u fs %u", v88, bswap32(v85), v87);
            goto LABEL_110;
          }
          if ( v10 == -2113667072 )
          {
LABEL_79:
            v21 = sub_263D8(v8, (unsigned int *)(a1 + 208), a1);
            if ( v21 != 256 )
              goto LABEL_39;
            if ( (*(_BYTE *)(a1 + 72) & 0x20) == 0 || *(unsigned __int16 *)(a1 + 132) == v121 )
            {
              v32 = v8[2];
              if ( v32 )
              {
                v33 = *(unsigned __int64 **)(a1 + 220);
                if ( !v33 )
                {
                  v33 = (unsigned __int64 *)sub_637E4(0, 8, 0, 0);
                  v32 = v8[2];
                  *(_DWORD *)(a1 + 220) = v33;
                }
                v34 = v8[3];
                v35 = bswap32(v32);
                v36 = v8[6];
                v37 = v8[5];
                *(_DWORD *)(a1 + 208) = v32;
                *(_DWORD *)(a1 + 212) = v34;
                v38 = _byteswap_uint64(__PAIR64__(v37, v36));
                v39 = bswap32(v34);
                v40 = *(_DWORD *)(a1 + 136);
                *v33 = v38;
                *(_DWORD *)(a1 + 160) = v38;
                v117 = v38;
                LODWORD(v38) = *(_DWORD *)(a1 + 300);
                *(_DWORD *)(a1 + 136) = v40 | 0x1000;
                *(_DWORD *)(a1 + 300) = v38 & 0xFFFFFF7F;
                sub_6BCB0(v168, 256, "auto seq %d key %x ts %u fs %u", HIDWORD(v38), v117, v35, v39);
                goto LABEL_110;
              }
            }
            goto LABEL_60;
          }
          if ( v10 == -2113798144 )
            goto LABEL_46;
          goto LABEL_43;
        }
        HIWORD(v18) = -32249;
        if ( v10 == v18 )
        {
LABEL_65:
          v122 = a1 + 16;
          v14 = sub_263D8(v8, 0, a1);
          if ( v14 != 256 )
            goto LABEL_18;
          v25 = *(_DWORD *)(a1 + 172);
          if ( !v25 )
          {
            sub_64A18(5, "crypto_iff: scheme unavailable");
            goto LABEL_162;
          }
          if ( bswap32(v8[3]) != *(_DWORD *)(v25 + 12) )
          {
            v20 = "crypto_iff: invalid filestamp %u";
            goto LABEL_33;
          }
          v89 = EVP_PKEY_get0_DSA(*(_DWORD *)(v25 + 4));
          v153 = v89;
          if ( !v89 )
          {
            sub_64A18(5, "crypto_iff: defective key");
LABEL_160:
            v15 = 260;
            v9 = bswap32(*v8);
            goto LABEL_19;
          }
          if ( !*(_DWORD *)(a1 + 176) )
          {
            sub_64A18(5, "crypto_iff: missing challenge");
            goto LABEL_162;
          }
          v146 = BN_CTX_new(v89);
          v150 = BN_new();
          v90 = BN_new();
          v91 = bswap32(v8[4]);
          v162 = v8 + 5;
          v140 = v90;
          v157 = d2i_DSA_SIG(0, &v162, v91);
          if ( !v157 )
          {
            v15 = 271;
            BN_free(v140);
            BN_free(v150);
            v110 = BN_CTX_free(v146);
            error = ERR_get_error(v110);
            v112 = (const char *)ERR_error_string(error, 0);
            sub_64A18(3, "crypto_iff: %s", v112);
            v9 = bswap32(*v8);
            goto LABEL_19;
          }
          DSA_get0_key(v153, &v167, 0);
          DSA_get0_pqg(v153, &v163, 0);
          DSA_SIG_get0(v157, &v165, &v166);
          BN_mod_exp(v140, v167, *(_DWORD *)(a1 + 176), v163, v146);
          BN_mod_exp(v150, v164, v165, v163, v146);
          BN_mod_mul(v140, v140, v150, v163, v146);
          sub_262EC(v140, v140);
          v154 = BN_cmp(v140, v166);
          BN_free(v140);
          BN_free(v150);
          BN_CTX_free(v146);
          BN_free(*(_DWORD *)(a1 + 176));
          *(_DWORD *)(a1 + 176) = 0;
          DSA_SIG_free(v157);
          if ( v154 )
          {
            sub_64A18(5, "crypto_iff: identity not verified");
            goto LABEL_162;
          }
          v92 = *(_DWORD *)(a1 + 136);
          v93 = *(const char **)(a1 + 152);
          v119 = bswap32(v8[3]);
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          *(_DWORD *)(a1 + 136) = v92 | 0x200;
          sub_6BCB0(v168, 256, "iff %s fs %u", v93, v119);
          goto LABEL_110;
        }
        if ( v10 <= v18 )
          goto LABEL_16;
      }
      else
      {
        v6 = bswap32(v8[4]);
        v133 = bswap32(v8[3]);
        if ( !v6 || (unsigned int)(unsigned __int16)v9 - 24 < v6 )
          return 257;
        if ( v10 == -2113667072 )
          goto LABEL_79;
        if ( v10 <= 0x82040000 )
        {
          if ( v10 == -2113863680 )
            goto LABEL_58;
          if ( v10 > 0x82010000 )
          {
            if ( v10 == -2113798144 )
            {
              v21 = sub_263D8(v8, 0, a1);
              if ( v21 != 256 )
              {
LABEL_39:
                v15 = v21;
                v122 = a1 + 16;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v63 = sub_27F08(v8);
              if ( !v63 )
              {
                v122 = a1 + 16;
                v15 = 269;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v64 = *(void **)(a1 + 152);
              if ( v64 )
                free(v64);
              v65 = sub_63948(*(_DWORD *)(v63 + 52));
              v66 = *(_DWORD *)(a1 + 156);
              v67 = *(const char **)(v63 + 52);
              *(_DWORD *)(a1 + 156) = v63;
              v137 = v66;
              *(_DWORD *)(a1 + 152) = v65;
              if ( strcmp(*(const char **)(v63 + 48), v67) )
                goto LABEL_121;
              if ( (*(_DWORD *)(v63 + 4) & 1) != 0 )
              {
                v101 = *(_DWORD *)(a1 + 136);
                v27 = *(_DWORD *)(a1 + 80) == 0;
                v102 = *(_DWORD *)(v63 + 56);
                *(_DWORD *)(a1 + 136) = v101 | 0x100;
                *(_DWORD *)(a1 + 180) = v102;
                if ( v27 || (v101 & 0xF0) == 0 )
                  *(_DWORD *)(a1 + 136) = v101 | 0x300;
LABEL_121:
                if ( v137 )
                {
                  v68 = *(_DWORD *)(v137 + 68);
                  v167 = *(_DWORD *)(v137 + 72);
                  v69 = d2i_X509(0, &v167, bswap32(v68));
                  if ( !v69 )
                  {
                    v122 = a1 + 16;
                    v15 = 269;
                    v9 = bswap32(*v8);
                    *(_DWORD *)(v137 + 4) |= 0x80u;
                    goto LABEL_19;
                  }
                  v125 = v69;
                  if ( X509_verify(v69, *(_DWORD *)(v63 + 8)) <= 0 )
                  {
                    v115 = v125;
                    v122 = a1 + 16;
                    X509_free(v115);
                    v15 = 265;
                    v9 = bswap32(*v8);
                    *(_DWORD *)(v137 + 4) |= 0x80u;
                    goto LABEL_19;
                  }
                  X509_free(v125);
                  if ( sub_2664C((unsigned __int8 *)(v137 + 28), (unsigned __int8 *)(v63 + 28)) < 0 )
                  {
                    v71 = *(_DWORD *)(v137 + 4);
LABEL_126:
                    v122 = a1 + 16;
                    v72 = *v8;
                    *(_DWORD *)(v137 + 4) = v71 | 0x80;
                    v9 = bswap32(v72);
                    v15 = 266;
                    goto LABEL_19;
                  }
                  v70 = sub_2664C((unsigned __int8 *)(v137 + 28), (unsigned __int8 *)(v63 + 38));
                  v71 = *(_DWORD *)(v137 + 4);
                  if ( v70 > 0 )
                    goto LABEL_126;
                  *(_DWORD *)(v137 + 4) = v71 | 2;
                }
              }
              if ( !*(_DWORD *)(a1 + 140) )
              {
                v116 = *(_DWORD *)(v63 + 68);
                v160 = *(_DWORD *)(v63 + 72);
                v128 = d2i_X509(0, &v160, bswap32(v116));
                *(_DWORD *)(a1 + 140) = X509_get_pubkey(v128);
                X509_free(v128);
              }
              v103 = *(_DWORD *)(v63 + 16);
              v104 = *(const char **)(v63 + 48);
              *(_DWORD *)(a1 + 300) &= ~0x80u;
              v143 = v104;
              v132 = v103;
              v127 = *(const char **)(v63 + 52);
              v105 = *(_DWORD *)(v63 + 4);
              v106 = (const char *)OBJ_nid2ln(v103);
              sub_6BCB0(v168, 256, "cert %s %s 0x%x %s (%u) fs %u", v143, v127, v105, v106, v132, bswap32(v8[3]));
LABEL_110:
              sub_42270(a1 + 16, v168);
              v3 = *(_DWORD *)(a2 + 84);
              goto LABEL_46;
            }
            if ( v10 == -2113732608 )
              goto LABEL_38;
            goto LABEL_43;
          }
LABEL_52:
          if ( v10 == 33619968 )
          {
            if ( (*(_DWORD *)(a1 + 136) & 0x100) != 0 )
              goto LABEL_144;
            v22 = *(void **)(a1 + 232);
            if ( v22 )
            {
              if ( *(unsigned __int16 *)(a1 + 132) != v12 )
              {
LABEL_144:
                v122 = a1 + 16;
                v15 = 271;
                goto LABEL_19;
              }
              free(v22);
            }
            v23 = (void *)sub_637E4(0, (unsigned __int16)v9, 0, 0);
            v24 = memcpy(v23, v8, (unsigned __int16)v9);
            v24[1] = bswap32(*(unsigned __int16 *)(a1 + 60));
            *(_DWORD *)(a1 + 232) = v24;
LABEL_58:
            if ( !*(_DWORD *)(a1 + 136) )
            {
              if ( (unsigned __int16)v9 <= 0x17u )
                sub_6E8F0("ntp_crypto.c", 561, 2, "len >= (6 * 4)");
              if ( v6 - 1 >= 0x200 || (unsigned int)(unsigned __int16)v9 - 24 < v6 )
              {
                v122 = a1 + 16;
                v15 = 257;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              if ( (crypto_flags & 0x10) != 0 )
              {
                if ( (v133 & 0x10) == 0 )
                  goto LABEL_140;
                v133 |= 0x2300u;
              }
              else if ( (unsigned int)(v135 - 1) <= 1 )
              {
                if ( (crypto_flags & 0xF0) != 0 )
                {
                  if ( (v133 & 0xF0) == 0 )
                    goto LABEL_140;
                }
                else if ( (v133 & 0xF0) != 0 )
                {
LABEL_140:
                  v122 = a1 + 16;
                  v15 = 262;
                  v9 = bswap32(*v8);
                  goto LABEL_19;
                }
              }
              v50 = HIWORD(v133);
              v51 = OBJ_nid2sn(HIWORD(v133));
              digestbyname = EVP_get_digestbyname(v51);
              if ( !digestbyname )
              {
                v122 = a1 + 16;
                v15 = 261;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v53 = v121;
              v123 = digestbyname;
              *(_WORD *)(a1 + 132) = v53;
              if ( v135 == 4 )
                v133 |= 0x1000u;
              v54 = v133;
              if ( (v133 & 2) == 0 )
              {
                v54 = v133 | 0x4000;
                v133 |= 0x4000u;
              }
              RAND_bytes(a1 + 164, 4, v54);
              v55 = *(void **)(a1 + 148);
              *(_DWORD *)(a1 + 136) = v133;
              *(_DWORD *)(a1 + 144) = v123;
              if ( v55 )
                free(v55);
              v56 = (void *)sub_637E4(0, v6 + 1, 0, 0);
              *(_DWORD *)(a1 + 148) = v56;
              memcpy(v56, v8 + 5, v6);
              *(_BYTE *)(*(_DWORD *)(a1 + 148) + v6) = 0;
              v57 = *(void **)(a1 + 152);
              if ( v57 )
                free(v57);
              v58 = sub_63948(*(_DWORD *)(a1 + 148));
              v59 = *(unsigned __int16 *)(a1 + 60);
              v130 = *(unsigned __int16 *)(a1 + 132);
              v124 = *(_DWORD *)(a1 + 148);
              *(_DWORD *)(a1 + 152) = v58;
              v60 = OBJ_nid2ln(v50);
              sub_6BCB0(v168, 256, "assoc %d %d host %s %s", v59, v130, v124, v60);
              goto LABEL_110;
            }
            if ( *(unsigned __int16 *)(a1 + 132) != v121 )
            {
              v122 = a1 + 16;
              v15 = 271;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
LABEL_60:
            v3 = *(_DWORD *)(a2 + 84);
            goto LABEL_46;
          }
          goto LABEL_43;
        }
        if ( v10 == -2113470464 )
          goto LABEL_65;
        if ( v10 <= 0x82070000 )
        {
          if ( v10 == -2113601536 )
            goto LABEL_69;
LABEL_16:
          if ( v10 == -2113536000 )
          {
            v122 = a1 + 16;
            v14 = sub_263D8(v8, 0, a1);
            if ( v14 != 256 )
              goto LABEL_18;
            v73 = (_DWORD *)sub_27F08(v8);
            if ( !v73 )
            {
              v15 = 269;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            v74 = v73[4];
            *(_DWORD *)(a1 + 300) &= ~0x80u;
            v149 = v74;
            v145 = (const char *)v73[12];
            v75 = (const char *)v73[13];
            v76 = v73[1];
            *(_DWORD *)(a1 + 136) |= 0x2000u;
            v131 = v75;
            v138 = v76;
            v77 = (const char *)OBJ_nid2ln(v74);
            sub_6BCB0(v168, 256, "sign %s %s 0x%x %s (%u) fs %u", v145, v131, v138, v77, v149, bswap32(v8[3]));
LABEL_129:
            sub_42270(v122, v168);
            goto LABEL_60;
          }
          goto LABEL_43;
        }
      }
      if ( v10 == -2113404928 )
      {
        v122 = a1 + 16;
        v14 = sub_263D8(v8, 0, a1);
        if ( v14 != 256 )
        {
LABEL_18:
          v15 = v14;
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        v41 = *(_DWORD *)(a1 + 172);
        if ( !v41 )
        {
          sub_64A18(5, "crypto_gq: scheme unavailable");
          goto LABEL_162;
        }
        if ( bswap32(v8[3]) < *(_DWORD *)(v41 + 12) )
        {
          v20 = "crypto_gq: invalid filestamp %u";
LABEL_33:
          v15 = 259;
          sub_64A18(5, v20);
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        v42 = EVP_PKEY_get0_RSA(*(_DWORD *)(v41 + 4));
        if ( !v42 )
        {
          sub_64A18(5, "crypto_gq: defective key");
          goto LABEL_160;
        }
        v43 = RSA_get0_key(v42, &v164, 0, &v165);
        if ( !*(_DWORD *)(a1 + 176) )
        {
          sub_64A18(5, "crypto_gq: missing challenge");
          goto LABEL_162;
        }
        v144 = BN_CTX_new(v43);
        v136 = BN_new();
        v44 = BN_new();
        v45 = bswap32(v8[4]);
        v163 = v8 + 5;
        v148 = v44;
        v46 = d2i_DSA_SIG(0, &v163, v45);
        v152 = v46;
        if ( !v46 )
        {
          v15 = 271;
          BN_CTX_free(v144);
          BN_free(v136);
          v107 = BN_free(v148);
          v108 = ERR_get_error(v107);
          v109 = (const char *)ERR_error_string(v108, 0);
          sub_64A18(3, "crypto_gq: %s", v109);
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        DSA_SIG_get0(v46, &v166, &v167);
        v47 = *(_DWORD *)(a1 + 180);
        if ( !v47 )
        {
          sub_64A18(5, "crypto_gq: missing group key");
          goto LABEL_162;
        }
        BN_mod_exp(v148, v47, *(_DWORD *)(a1 + 176), v164, v144);
        BN_mod_exp(v136, v166, v165, v164, v144);
        BN_mod_mul(v136, v148, v136, v164, v144);
        sub_262EC(v136, v136);
        v156 = BN_cmp(v136, v167);
        BN_CTX_free(v144);
        BN_free(v136);
        BN_free(v148);
        BN_free(*(_DWORD *)(a1 + 176));
        *(_DWORD *)(a1 + 176) = 0;
        DSA_SIG_free(v152);
        if ( v156 )
        {
          sub_64A18(5, "crypto_gq: identity not verified");
          goto LABEL_162;
        }
        v48 = *(_DWORD *)(a1 + 136);
        v49 = *(const char **)(a1 + 152);
        v118 = bswap32(v8[3]);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        *(_DWORD *)(a1 + 136) = v48 | 0x200;
        sub_6BCB0(v168, 256, "gq %s fs %u", v49, v118);
        goto LABEL_129;
      }
      if ( v10 == -2113339392 )
      {
        v122 = a1 + 16;
        v14 = sub_263D8(v8, 0, a1);
        if ( v14 != 256 )
          goto LABEL_18;
        v19 = *(_DWORD *)(a1 + 172);
        if ( !v19 )
        {
          sub_64A18(5, "crypto_mv: scheme unavailable");
          goto LABEL_162;
        }
        if ( bswap32(v8[3]) != *(_DWORD *)(v19 + 12) )
        {
          v20 = "crypto_mv: invalid filestamp %u";
          goto LABEL_33;
        }
        v94 = EVP_PKEY_get0_DSA(*(_DWORD *)(v19 + 4));
        v141 = v94;
        if ( !v94 )
        {
          sub_64A18(5, "crypto_mv: defective key");
          goto LABEL_160;
        }
        DSA_get0_pqg(v94, &v162, 0);
        v95 = DSA_get0_key(v141, &v163, &v164);
        if ( !*(_DWORD *)(a1 + 176) )
        {
          sub_64A18(5, "crypto_mv: missing challenge");
          goto LABEL_162;
        }
        v147 = BN_CTX_new(v95);
        v158 = BN_new();
        v142 = BN_new();
        v96 = BN_new();
        v97 = bswap32(v8[4]);
        v161 = v8 + 5;
        v151 = v96;
        v98 = d2i_DSAparams(0, &v161, v97);
        v155 = v98;
        if ( !v98 )
        {
          v113 = ERR_get_error(0);
          v114 = (const char *)ERR_error_string(v113, 0);
          sub_64A18(3, "crypto_mv: %s", v114);
          v15 = 271;
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        DSA_get0_pqg(v98, &v165, &v166);
        BN_mod_exp(v142, v166, v163, v162, v147);
        BN_mod_exp(v151, v167, v164, v162, v147);
        BN_mod_mul(v142, v142, v151, v162, v147);
        BN_mod_mul(v142, v142, v165, v162, v147);
        v159 = BN_cmp(v142, *(_DWORD *)(a1 + 176));
        BN_CTX_free(v147);
        BN_free(v158);
        BN_free(v142);
        BN_free(v151);
        BN_free(*(_DWORD *)(a1 + 176));
        *(_DWORD *)(a1 + 176) = 0;
        DSA_free(v155);
        if ( v159 )
        {
          sub_64A18(5, "crypto_mv: identity not verified");
LABEL_162:
          v15 = 270;
          v9 = bswap32(*v8);
LABEL_19:
          v16 = (const char *)sub_6D014(v15);
          sub_6BCB0(v168, 256, "%04x %d %02x %s", v9, v129, v15, v16);
          sub_42270(v122, v168);
          return v15;
        }
        v99 = *(_DWORD *)(a1 + 136);
        v100 = *(const char **)(a1 + 152);
        v120 = bswap32(v8[3]);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        *(_DWORD *)(a1 + 136) = v99 | 0x200;
        sub_6BCB0(v168, 256, "mv %s fs %u", v100, v120);
        goto LABEL_129;
      }
LABEL_43:
      if ( (v10 & 0xC0000000) != 0 )
        goto LABEL_144;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        v61 = (void *)sub_637E4(0, (unsigned __int16)v9, 0, 0);
        v62 = memcpy(v61, v8, (unsigned __int16)v9);
        v3 = *(_DWORD *)(a2 + 84);
        *(_DWORD *)(a1 + 232) = v62;
      }
LABEL_46:
      v7 += (v11 + 3) & 0xFFFFFFFC;
      v4 = v3 - v7;
    }
    while ( v3 - v7 > 24 );
  }
  return 256;
}
