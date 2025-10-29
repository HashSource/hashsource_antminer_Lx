void *__fastcall sub_26128(_DWORD *a1, void **a2, int a3)
{
  unsigned int v5; // r1
  size_t v6; // r3
  unsigned int v7; // r12
  size_t v8; // r8
  unsigned int v9; // r4
  void *result; // r0
  void *v11; // r2
  int v12; // r9
  const void *v13; // r1
  unsigned int v14; // r3
  const void *v15; // r1
  int v16; // r10
  int v17; // r2
  int v18; // r12

  v5 = (unsigned int)a2[2];
  v6 = bswap32(v5);
  if ( v6 > 0xFFE7 )
    sub_6E8F0("ntp_crypto.c", 1774, 2, "vallen <= (65535 - (6 * 4))");
  v7 = (unsigned int)a2[4];
  v8 = bswap32(v7);
  v9 = ((v6 + 3) & 0xFFFFFFFC) + 24 + ((v8 + 3) & 0xFFFFFFFC);
  if ( a3 + v9 > 0x830 )
    return 0;
  result = *a2;
  v11 = a2[1];
  a1[4] = v5;
  a1[2] = result;
  a1[3] = v11;
  if ( v6 )
  {
    v15 = a2[3];
    if ( v15 )
    {
      v16 = v6 >> 2;
      v12 = (v6 >> 2) + 1;
      if ( (v6 & 0xFFFFFFFC) < v6 )
      {
        v17 = v16 + 4;
        v18 = v16 + 2;
        v16 = (v6 >> 2) + 1;
        v12 = v18;
        a1[v17 + 1] = 0;
      }
      result = memcpy(a1 + 5, v15, v6);
      v6 = v16;
      v7 = (unsigned int)a2[4];
      goto LABEL_5;
    }
    v6 = 0;
  }
  v12 = 1;
LABEL_5:
  a1[v6 + 5] = v7;
  if ( v8 )
  {
    v13 = a2[5];
    if ( v13 )
    {
      if ( (v8 & 0xFFFFFFFC) < v8 )
        a1[v12 + 5 + (v8 >> 2)] = 0;
      result = memcpy(&a1[v12 + 5], v13, v8);
    }
  }
  v14 = bswap32(*(unsigned __int16 *)a1) | v9;
  if ( v9 <= 0xFFE7 )
    result = (void *)v9;
  *a1 = bswap32(v14);
  if ( v9 > 0xFFE7 )
    sub_6E8F0("ntp_crypto.c", 1815, 1, "len <= (65535 - (6 * 4))");
  return result;
}
