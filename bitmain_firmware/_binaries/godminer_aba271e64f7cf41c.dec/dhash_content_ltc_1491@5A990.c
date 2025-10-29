void *dhash_content_ltc_1491()
{
  _QWORD src[3]; // [sp+4h] [bp-20h] BYREF
  void *dest; // [sp+1Ch] [bp-8h]

  src[2] = 0x3C001062A8LL;
  src[0] = 0x5A70C0005A454LL;
  src[1] = 370752;
  dest = calloc(1u, 0x18u);
  memcpy(dest, src, 0x18u);
  return dest;
}
