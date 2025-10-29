int __fastcall sub_788EC(int result, _DWORD *a2)
{
  int v2; // r12
  __int64 v3; // r2

  if ( !result || *(_DWORD *)result != 1114990113 )
    sub_6E8F0(
      (int)"./../lib/isc/buffer.c",
      114,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6E8F0((int)"./../lib/isc/buffer.c", 115, 0, "r != ((void *)0)");
  v2 = *(_DWORD *)(result + 12);
  v3 = *(_QWORD *)(result + 4);
  *a2 = v3 + v2;
  a2[1] = HIDWORD(v3) - v2;
  return result;
}
