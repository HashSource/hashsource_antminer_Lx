int __fastcall sub_70838(_DWORD *a1)
{
  int result; // r0

  if ( !a1 || *a1 != 1281586296 )
    sub_6E8F0(
      (int)"./../lib/isc/log.c",
      424,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  result = a1[13];
  if ( !result )
    sub_6E8F0((int)"./../lib/isc/log.c", 426, 1, "lctx->logconfig != ((void *)0)");
  return result;
}
