int __fastcall sub_6EC00(int a1)
{
  __int64 v1; // r4
  _DWORD *v4; // [sp+8h] [bp-1Ch]
  __int64 v5; // [sp+10h] [bp-14h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v4 = (_DWORD *)(a1 + 16);
  clock_gettime(1, (struct timespec *)(a1 + 24));
  v5 = (v4[3] - v4[1]) / 1000000 + vshld_n_s64(4 * (vshld_n_s64(v4[2] - *v4, 5u) - (v4[2] - *v4)) + v4[2] - *v4, 3u);
  clock_gettime(1, (struct timespec *)(a1 + 16));
  v1 = v5;
  if ( v5 < 0 )
    v1 = 0;
  *(_QWORD *)(a1 + 8) -= v1;
  if ( *(int *)(a1 + 12) < 0 )
    *(_QWORD *)(a1 + 8) = 0;
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 44));
}
