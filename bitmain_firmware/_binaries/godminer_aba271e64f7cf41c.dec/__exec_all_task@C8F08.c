int __fastcall _exec_all_task(int result)
{
  int v1; // [sp+4h] [bp-28h]
  struct timespec *v2; // [sp+Ch] [bp-20h]
  int v3; // [sp+14h] [bp-18h]
  int v4; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]

  v1 = result;
  v4 = *(_DWORD *)(result + 6144);
  for ( i = 0; i < v4; ++i )
  {
    v2 = (struct timespec *)(v1 + 16 * (i + 128));
    clock_gettime(1, v2 + 1);
    v3 = (v2[1].tv_nsec - v2->tv_nsec) / 1000000
       + vshld_n_s64(
           4 * (vshld_n_s64(v2[1].tv_sec - v2->tv_sec, 5u) - (v2[1].tv_sec - v2->tv_sec)) + v2[1].tv_sec - v2->tv_sec,
           3u);
    clock_gettime(1, v2);
    result = (*(int (__fastcall **)(int))(v1 + 4 * i))(v3);
  }
  return result;
}
