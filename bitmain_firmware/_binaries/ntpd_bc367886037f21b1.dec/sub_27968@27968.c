void __fastcall sub_27968(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  if ( a1[2] )
    EVP_PKEY_free();
  v2 = (void *)a1[12];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[13];
  if ( v3 )
    free(v3);
  if ( a1[14] )
    BN_free();
  sub_278F0((int)(a1 + 15));
  free(a1);
}
