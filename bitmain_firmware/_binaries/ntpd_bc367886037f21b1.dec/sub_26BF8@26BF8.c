int __fastcall sub_26BF8(int a1, int a2)
{
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r3
  unsigned int v9; // r3
  int v10; // r3
  size_t n; // [sp+8h] [bp-134h] BYREF
  time_t v13; // [sp+Ch] [bp-130h] BYREF
  unsigned int v14[2]; // [sp+10h] [bp-12Ch] BYREF
  unsigned int v15; // [sp+18h] [bp-124h]
  int v16; // [sp+1Ch] [bp-120h]
  __int16 v17; // [sp+24h] [bp-118h]
  _BYTE v18[256]; // [sp+34h] [bp-108h] BYREF

  v2 = EVP_MD_CTX_new(a1, a2);
  if ( dword_107288 )
  {
    LODWORD(dbl_107290) = 0;
    pubkey = hostval;
    if ( !HIDWORD(dbl_107290) )
      HIDWORD(dbl_107290) = sub_637E4(0, dword_B88E4, 0, 0);
    EVP_DigestInit(v2, dword_B88E8);
    EVP_DigestUpdate(v2, &pubkey, 12);
    EVP_DigestUpdate(v2, dword_10728C, bswap32(dword_107288));
    if ( EVP_SignFinal(v2, HIDWORD(dbl_107290), &n, dword_B88E0) )
    {
      if ( n > dword_B88E4 )
        sub_6E8F0("ntp_crypto.c", 1868, 2, "len <= sign_siglen");
      LODWORD(dbl_107290) = bswap32(n);
    }
  }
  v3 = (_DWORD *)cinfo;
  if ( cinfo )
  {
    do
    {
      v4 = v3[20];
      v5 = hostval;
      v3[19] = 0;
      v3[15] = v5;
      if ( !v4 )
        v3[20] = sub_637E4(0, dword_B88E4, 0, 0);
      EVP_DigestInit(v2, dword_B88E8);
      EVP_DigestUpdate(v2, v3 + 15, 12);
      EVP_DigestUpdate(v2, v3[18], bswap32(v3[17]));
      if ( EVP_SignFinal(v2, v3[20], &n, dword_B88E0) )
      {
        if ( n > dword_B88E4 )
          sub_6E8F0("ntp_crypto.c", 1889, 2, "len <= sign_siglen");
        v3[19] = bswap32(n);
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  *(_DWORD *)&tai_leap = hostval;
  *(_DWORD *)&algn_107299[3] = dword_10726C;
  sub_2D77C(v14);
  if ( v14[0] == v15 && v14[1] == v16 )
  {
    v13 = time(0);
    sub_2D4D4(v14, v13 - 2085978496, &v13);
  }
  v6 = (_DWORD *)dword_1072A4;
  n = 12;
  if ( !dword_1072A4 || dword_1072A0 != 201326592 )
  {
    free((void *)dword_1072A4);
    v6 = (_DWORD *)sub_637E4(0, n, 0, 0);
    dword_1072A0 = bswap32(n);
    dword_1072A4 = (int)v6;
  }
  if ( v17 <= 10 )
  {
    memset(v6, 0, n);
    v10 = HIDWORD(dbl_1072A8);
    if ( HIDWORD(dbl_1072A8) )
      goto LABEL_22;
    goto LABEL_36;
  }
  *v6 = bswap32(v17);
  v7 = v14[0];
  v6[1] = bswap32(v14[0]);
  if ( v16 >= 0 )
    v8 = v15;
  else
    v8 = v7 + 2146304;
  if ( v16 >= 0 )
    v9 = v8 + 604800;
  else
    v9 = v8 + 13696;
  v6[2] = bswap32(v9);
  v10 = HIDWORD(dbl_1072A8);
  if ( !HIDWORD(dbl_1072A8) )
LABEL_36:
    HIDWORD(dbl_1072A8) = sub_637E4(v10, dword_B88E4, v10, v10);
LABEL_22:
  EVP_DigestInit(v2, dword_B88E8);
  EVP_DigestUpdate(v2, &tai_leap, 12);
  EVP_DigestUpdate(v2, dword_1072A4, n);
  if ( EVP_SignFinal(v2, HIDWORD(dbl_1072A8), &n, dword_B88E0) )
  {
    if ( n > dword_B88E4 )
      sub_6E8F0("ntp_crypto.c", 1939, 2, "len <= sign_siglen");
    LODWORD(dbl_1072A8) = bswap32(n);
  }
  crypto_flags |= 2u;
  sub_6BCB0(v18, 256, "signature update ts %u", bswap32(hostval));
  sub_42270(0, v18);
  return EVP_MD_CTX_free(v2);
}
