int __fastcall sub_3F0D4(int *a1)
{
  struct timeval tv; // [sp+8h] [bp+8h] BYREF

  gettimeofday(&tv, 0);
  *a1 = tv.tv_sec ^ tv.tv_usec;
  *a1 ^= getpid();
  return 0;
}
