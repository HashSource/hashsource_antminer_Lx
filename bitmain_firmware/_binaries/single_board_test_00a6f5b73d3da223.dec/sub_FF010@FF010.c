int sub_FF010(_DWORD *a1, ...)
{
  _DWORD v2[7]; // [sp+8h] [bp+0h] BYREF
  _DWORD *v3; // [sp+24h] [bp+1Ch]
  unsigned int v4; // [sp+2Ch] [bp+24h]
  int varg_r1; // [sp+3Ch] [bp+34h] BYREF
  va_list varg_r1a; // [sp+3Ch] [bp+34h]
  int varg_r2; // [sp+40h] [bp+38h]
  unsigned int varg_r3; // [sp+44h] [bp+3Ch]
  unsigned int v9; // [sp+48h] [bp+40h]
  int v10; // [sp+4Ch] [bp+44h]
  va_list va1; // [sp+50h] [bp+48h] BYREF

  va_start(va1, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(va1, _DWORD);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v9 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  v3 = a1;
  v4 = sub_FE3F8(varg_r1, varg_r2, varg_r3, v9, v10);
  if ( sub_FE450(varg_r1, varg_r2, varg_r3, v9, v10) > v4 >> 2 )
    return pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 15));
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 9));
  sub_FE3B4((int *)varg_r1a, v3);
  v4 = sub_FE3F8(varg_r1, varg_r2, varg_r3, v9, v10);
  if ( sub_FE450(varg_r1, varg_r2, varg_r3, v9, v10) <= v4 >> 2 )
    sub_FEA04(v2, (int)v3, v4 >> 1);
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  return pthread_mutex_unlock((pthread_mutex_t *)(v3 + 15));
}
