char *__fastcall sub_15C2C(int a1, _DWORD *a2)
{
  char *v4; // r7
  _DWORD *v6; // r3
  _DWORD *v7; // [sp+0h] [bp-8h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1281586296 )
    sub_10788();
  if ( !a2 || *a2 != 1281582695 )
    sub_10788();
  if ( a2[1] != a1 )
    sub_10788();
  v4 = sub_151D4((int)a2);
  if ( !v4 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
      sub_15154("./../lib/isc/log.c", 449, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    v6 = *(_DWORD **)(a1 + 52);
    *(_DWORD *)(a1 + 52) = a2;
    v7 = v6;
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 28)) )
      sub_15154("./../lib/isc/log.c", 454, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
    sub_159B4(&v7);
  }
  return v4;
}
