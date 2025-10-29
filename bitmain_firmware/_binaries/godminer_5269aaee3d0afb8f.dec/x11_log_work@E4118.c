FILE *x11_log_work()
{
  int v0; // r1
  int v1; // r0
  FILE *result; // r0
  FILE **v3; // r4
  FILE *v4; // r5
  size_t v5; // r0
  const void *v6; // r0
  char v7[260]; // [sp+0h] [bp-104h] BYREF

  LOWORD(v3) = -14772;
  memset(v7, 0, 0x100u);
  LOWORD(v0) = -5976;
  LOWORD(v1) = 6816;
  HIWORD(v0) = (unsigned int)&loc_12D608 >> 16;
  HIWORD(v1) = (unsigned int)"repeat nonce %s %s %s" >> 16;
  result = (FILE *)fopen64(v1, v0);
  HIWORD(v3) = (unsigned int)&unk_16B54C >> 16;
  *v3 = result;
  if ( result )
  {
    v4 = result;
    v5 = strlen(v7);
    fwrite(v7, v5, 1u, v4);
    LOWORD(v6) = 12876;
    HIWORD(v6) = (unsigned int)"Invalid UTF-8 %s" >> 16;
    fwrite(v6, 1u, 1u, *v3);
    return (FILE *)fflush(*v3);
  }
  return result;
}
