_DWORD *__fastcall sub_268E8(const char *a1, int a2, int a3)
{
  FILE *v6; // r0
  FILE *v7; // r7
  char *v8; // r0
  char *v9; // r0
  int PrivateKey; // r10
  int v11; // r0
  _DWORD *v12; // r4
  int v13; // r0
  char *v14; // r0
  int v15; // r0
  const char *v17; // r1
  int error; // r0
  const char *v19; // r0
  int v20; // [sp+8h] [bp-30Ch] BYREF
  char v21[256]; // [sp+Ch] [bp-308h] BYREF
  char s[2]; // [sp+10Ch] [bp-208h] BYREF
  char v23[254]; // [sp+10Eh] [bp-206h] BYREF
  _BYTE v24[256]; // [sp+20Ch] [bp-108h] BYREF

  if ( *a1 == 47 )
    sub_6D12C(v21);
  else
    sub_6BCB0(v21, 256, "%s/%s", keysdir[0], a1);
  v6 = (FILE *)fopen64(v21, "r");
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = fgets(s, 256, v6);
  if ( !v8 )
  {
    v17 = "crypto_key: empty file %s";
    goto LABEL_14;
  }
  v9 = strrchr(v8, 46);
  if ( !v9 )
  {
    v17 = "crypto_key: no filestamp %s";
    goto LABEL_14;
  }
  if ( sscanf(v9 + 1, "%u", &v20) != 1 )
  {
    v17 = "crypto_key: invalid filestamp %s";
LABEL_14:
    v12 = 0;
    sub_64A18(3, v17, v21);
    fclose(v7);
    return v12;
  }
  PrivateKey = PEM_read_PrivateKey(v7, 0, 0, a2);
  v11 = fclose(v7);
  if ( !PrivateKey )
  {
    error = ERR_get_error(v11);
    v19 = (const char *)ERR_error_string(error, 0);
    sub_64A18(3, "crypto_key: %s", v19);
    exit(-1);
  }
  v12 = (_DWORD *)sub_637E4(0, 16, 0, 0);
  *v12 = pkinfo;
  v12[1] = PrivateKey;
  pkinfo = (int)v12;
  v13 = sub_63948(a1);
  v12[3] = v20;
  v12[2] = v13;
  v14 = strrchr(s, 10);
  if ( v14 )
    *v14 = 0;
  v15 = EVP_PKEY_size(PrivateKey);
  sub_6BCB0(v24, 256, "%s mod %d", v23, 8 * v15);
  sub_42270(a3, v24);
  return v12;
}
