int sub_2B164()
{
  int v0; // r0
  const char *v1; // r6
  _DWORD *v2; // r0
  _DWORD *v3; // r11
  unsigned int v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r11
  _DWORD *v7; // r0
  FILE *v8; // r0
  FILE *v9; // r9
  char *v10; // r0
  char *v11; // r0
  char *v12; // r9
  int v13; // r9
  char *v14; // r0
  unsigned int v15; // r12
  int v16; // r1
  int v17; // r0
  int v18; // r1
  const char *v19; // r9
  char *v20; // r0
  _DWORD *v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r4
  const char *v25; // r0
  int error; // r0
  const char *v28; // r0
  int v29; // [sp+14h] [bp-528h] BYREF
  unsigned int v30; // [sp+18h] [bp-524h] BYREF
  unsigned int v31; // [sp+1Ch] [bp-520h]
  char *s1; // [sp+20h] [bp-51Ch] BYREF
  void *ptr; // [sp+24h] [bp-518h] BYREF
  void *v34; // [sp+28h] [bp-514h]
  _BYTE v35[8]; // [sp+2Ch] [bp-510h] BYREF
  char v36[4]; // [sp+34h] [bp-508h] BYREF
  char name[256]; // [sp+134h] [bp-408h] BYREF
  char v38[256]; // [sp+234h] [bp-308h] BYREF
  char s[2]; // [sp+334h] [bp-208h] BYREF
  __int16 v40; // [sp+336h] [bp-206h] BYREF
  _BYTE v41[256]; // [sp+434h] [bp-108h] BYREF

  if ( (crypto_flags & 1) != 0 )
    return sub_64A18(5, "crypto_setup: spurious crypto command");
  v0 = sub_6C368();
  if ( !RAND_status(v0) )
  {
    v1 = (const char *)dword_B88F0;
    if ( dword_B88F0 )
    {
      if ( *(_BYTE *)dword_B88F0 != 47 )
      {
        v1 = v36;
        sub_6BCB0(v36, 256, "%s/%s", keysdir[0], (const char *)dword_B88F0);
      }
    }
    else
    {
      v1 = v36;
      RAND_file_name();
    }
    if ( !RAND_load_file(v1, -1) )
    {
      sub_64A18(3, "crypto_setup: random seed file %s missing", v1);
      exit(-1);
    }
    sub_5F334(v35);
    RAND_seed(v35, 8);
    RAND_write_file(v1);
  }
  gethostname(name, 0x100u);
  if ( dword_B88F4 )
    sub_6D12C(name);
  if ( !dword_B88F8 )
    dword_B88F8 = sub_63948(name);
  *(_QWORD *)&hostval = 0;
  *(_QWORD *)&dword_107270 = 0;
  dbl_107278 = 0.0;
  *(_QWORD *)&pubkey = 0;
  *(_QWORD *)&dword_107288 = 0;
  dbl_107290 = 0.0;
  *(_QWORD *)&tai_leap = 0;
  *(_QWORD *)&dword_1072A0 = 0;
  dbl_1072A8 = 0.0;
  sub_6BCB0(v36, 256, "ntpkey_host_%s", name);
  v2 = sub_26B40(v36, dword_B88F8, 0);
  v3 = v2;
  if ( !v2 )
  {
    sub_64A18(3, "crypto_setup: host key file %s not found or corrupt", v36);
    exit(-1);
  }
  if ( EVP_PKEY_base_id(v2[1]) != 6 )
  {
    sub_64A18(3, "crypto_setup: host key is not RSA key type");
    exit(-1);
  }
  v4 = bswap32(v3[3]);
  dword_B88EC = v3[1];
  dword_10726C = v4;
  dword_B88E0 = dword_B88EC;
  v5 = i2d_PublicKey(dword_B88EC, 0);
  v6 = bswap32(v5);
  v29 = sub_637E4(0, v5, 0, 0);
  dword_10728C = v29;
  i2d_PublicKey(dword_B88EC, &v29);
  dword_107288 = v6;
  dword_107284 = dword_10726C;
  sub_6BCB0(v36, 256, "ntpkey_sign_%s", name);
  v7 = sub_26B40(v36, dword_B88F8, 0);
  if ( v7 )
    dword_B88E0 = v7[1];
  sub_6BCB0(v36, 256, "ntpkey_cert_%s", name);
  if ( v36[0] == 47 )
    sub_6D12C(v38);
  else
    sub_6BCB0(v38, 256, "%s/%s", keysdir[0], v36);
  v8 = (FILE *)fopen64(v38, "r");
  v9 = v8;
  if ( !v8 )
    goto LABEL_45;
  v10 = fgets(s, 256, v8);
  if ( !v10 )
  {
    sub_64A18(3, "crypto_cert: empty file %s", v38);
    goto LABEL_51;
  }
  v11 = strrchr(v10, 46);
  if ( !v11 )
  {
    sub_64A18(3, "crypto_cert: no filestamp %s", v38);
LABEL_51:
    fclose(v9);
    cinfo = 0;
LABEL_46:
    sub_64A18(3, "crypto_setup: certificate file %s not found or corrupt", v36);
    exit(-1);
  }
  if ( sscanf(v11 + 1, "%u", &v30) != 1 )
  {
    sub_64A18(3, "crypto_cert: invalid filestamp %s", v38);
    fclose(v9);
    goto LABEL_45;
  }
  if ( !PEM_read(v9, &s1, &ptr) )
  {
    error = ERR_get_error(0);
    v28 = (const char *)ERR_error_string(error, 0);
    sub_64A18(3, "crypto_cert: %s", v28);
    fclose(v9);
    cinfo = 0;
    goto LABEL_46;
  }
  fclose(v9);
  free(ptr);
  v12 = s1;
  if ( strcmp(s1, "CERTIFICATE") )
  {
    sub_64A18(5, "crypto_cert: wrong PEM type %s", v12);
    free(s1);
    free(v34);
    cinfo = 0;
    goto LABEL_46;
  }
  free(v12);
  v13 = sub_27A00(v34, v31, v30);
  free(v34);
  if ( !v13 )
  {
LABEL_45:
    cinfo = 0;
    goto LABEL_46;
  }
  v14 = strrchr(s, 10);
  v15 = v31;
  if ( v14 )
    *v14 = 0;
  sub_6BCB0(v41, 256, "%s 0x%x len %lu", &v40, *(_DWORD *)(v13 + 4), v15, &_stack_chk_guard);
  sub_42270(0, v41);
  v16 = *(_DWORD *)(v13 + 20);
  cinfo = v13;
  dword_B88E8 = v16;
  cert_host = v13;
  v17 = EVP_PKEY_size(dword_B88E0);
  v18 = *(_DWORD *)(cinfo + 4);
  dword_B88E4 = v17;
  if ( (v18 & 8) != 0 )
    crypto_flags |= 0x10u;
  v19 = *(const char **)(cinfo + 48);
  if ( strcmp(v19, *(const char **)(cinfo + 52)) )
  {
    sub_64A18(3, "crypto_setup: certificate %s is not self-signed", v36);
    exit(-1);
  }
  dword_107274 = sub_63948(v19);
  dword_107270 = bswap32(strlen(*(const char **)(cinfo + 48)));
  sys_hostname = dword_107274;
  v20 = strchr((const char *)dword_107274, 64);
  if ( v20 )
  {
    v29 = (int)(v20 + 1);
    sys_groupname = sub_63948(v20 + 1);
  }
  else
  {
    v29 = 0;
  }
  if ( dword_B88FC )
    sub_6D12C(name);
  sub_6BCB0(v36, 256, "ntpkey_iffkey_%s", name);
  iffkey_info = (int)sub_26B40(v36, dword_B88F8, 0);
  if ( iffkey_info )
    crypto_flags |= 0x20u;
  sub_6BCB0(v36, 256, "ntpkey_gqkey_%s", name);
  gqkey_info = (int)sub_26B40(v36, dword_B88F8, 0);
  if ( gqkey_info )
    crypto_flags |= 0x40u;
  sub_6BCB0(v36, 256, "ntpkey_mvkey_%s", name);
  v21 = sub_26B40(v36, dword_B88F8, 0);
  v22 = crypto_flags;
  mvkey_info = (int)v21;
  if ( v21 )
    v22 = crypto_flags | 0x80;
  v23 = *(_DWORD *)(cinfo + 16);
  v24 = v22 | (v23 << 16) | 1;
  crypto_flags = v24;
  v25 = (const char *)OBJ_nid2ln(v23);
  sub_6BCB0(v41, 256, "setup 0x%x host %s %s", v24, name, v25);
  return sub_42270(0, v41);
}
