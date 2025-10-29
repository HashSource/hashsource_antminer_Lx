void *dhash_content_x7_2044()
{
  _QWORD src[3]; // [sp+4h] [bp-20h] BYREF
  void *dest; // [sp+1Ch] [bp-8h]

  src[2] = 0x5A001166B0LL;
  src[0] = 0x5B1AC0005B0FCLL;
  src[1] = 373504;
  dest = calloc(1u, 0x18u);
  memcpy(dest, src, 0x18u);
  return dest;
}
