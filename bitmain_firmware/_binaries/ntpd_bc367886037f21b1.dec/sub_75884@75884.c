_DWORD *__fastcall sub_75884(_DWORD *result, int a2, unsigned int a3)
{
  if ( !result )
    sub_6E8F0((int)"./../lib/isc/unix/time.c", 90, 0, "i != ((void *)0)");
  if ( a3 > 0x3B9AC9FF )
    sub_6E8F0((int)"./../lib/isc/unix/time.c", 91, 0, "nanoseconds < 1000000000");
  result[1] = a3;
  *result = a2;
  return result;
}
