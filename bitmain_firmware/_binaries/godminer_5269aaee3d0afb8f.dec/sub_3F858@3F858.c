int __fastcall sub_3F858(_QWORD *a1, int *a2)
{
  int v2; // r2
  struct timeval v4; // [sp+0h] [bp-14h] BYREF
  unsigned int seed[3]; // [sp+8h] [bp-Ch] BYREF

  *a1 = *a2;
  gettimeofday(&v4, 0);
  *(_QWORD *)seed = v4.tv_usec + (int)&loc_F4240 * v4.tv_sec;
  v2 = rand_r(seed) & 0xFFFFFFF;
  dword_165F0C = v2;
  return 0;
}
