_DWORD *sub_FEAC8(_DWORD *a1, _DWORD *a2, ...)
{
  unsigned int v2; // r0
  _DWORD *v3; // r4
  int v4; // r1
  _DWORD v6[6]; // [sp+8h] [bp+0h] BYREF
  _DWORD *v7; // [sp+20h] [bp+18h]
  _DWORD *v8; // [sp+24h] [bp+1Ch]
  int v9; // [sp+28h] [bp+20h]
  unsigned int v10; // [sp+2Ch] [bp+24h]
  unsigned int v11; // [sp+30h] [bp+28h]
  unsigned int v12; // [sp+34h] [bp+2Ch]
  int varg_r2; // [sp+48h] [bp+40h] BYREF
  va_list varg_r2a; // [sp+48h] [bp+40h]
  int varg_r3; // [sp+4Ch] [bp+44h]
  unsigned int v16; // [sp+50h] [bp+48h]
  unsigned int v17; // [sp+54h] [bp+4Ch]
  int v18; // [sp+58h] [bp+50h]
  int v19; // [sp+5Ch] [bp+54h]
  va_list va1; // [sp+60h] [bp+58h] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v16 = va_arg(va1, _DWORD);
  v17 = va_arg(va1, _DWORD);
  v18 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v8 = a1;
  v7 = a2;
  v12 = sub_FE384((int)a2);
  v11 = sub_FE3F8(varg_r2, varg_r3, v16, v17, v18);
  if ( v19 + sub_FE450(varg_r2, varg_r3, v16, v17, v18) > v11 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v7 + 9));
    sub_FE3B4((int *)varg_r2a, v7);
    v10 = v19 + sub_FE450(varg_r2, varg_r3, v16, v17, v18);
    v9 = v10 / v12;
    if ( v10 > v11 )
    {
      v2 = sub_FE530(v9 + 1);
      sub_FEA04(v6, (int)v7, v12 * v2);
      varg_r2 = v6[0];
      varg_r3 = v6[1];
      v16 = v6[2];
      v17 = v6[3];
      v18 = v6[4];
    }
    pthread_mutex_unlock((pthread_mutex_t *)(v7 + 9));
  }
  v3 = v8;
  v4 = varg_r3;
  *v8 = varg_r2;
  v3[1] = v4;
  v3[2] = v16;
  v3[3] = v17;
  v3[4] = v18;
  return v8;
}
