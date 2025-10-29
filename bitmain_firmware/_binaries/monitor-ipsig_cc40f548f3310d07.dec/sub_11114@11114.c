int sub_11114()
{
  size_t v0; // r4
  _BYTE *v1; // r5
  _QWORD src[4]; // [sp+Ch] [bp-ACh] BYREF
  double v4[5]; // [sp+2Ch] [bp-8Ch] BYREF
  char s[100]; // [sp+54h] [bp-64h] BYREF

  memset(src, 0, 30);
  memset(v4, 0, sizeof(v4));
  memset(s, 0, sizeof(s));
  if ( !sub_10AFC("eth0", (char *)v4) )
    puts("get IP error");
  sub_10CC0((char *)src, "eth0");
  v0 = strlen((const char *)src);
  strncpy(byte_220AC, (const char *)src, v0);
  v1 = (_BYTE *)stpcpy(s, v4);
  *v1 = 44;
  memcpy(v1 + 1, src, v0 + 1);
  if ( sendto(dword_220A4, s, v0 + v1 - s + 1, 0, (const struct sockaddr *)&dword_220E4, 0x10u) < 0 )
    printf("send error....");
  else
    printf("send ipmac:\n%s\n", s);
  return 1;
}
