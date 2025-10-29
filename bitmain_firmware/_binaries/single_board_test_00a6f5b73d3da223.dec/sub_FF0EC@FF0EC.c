size_t __fastcall sub_FF0EC(_DWORD *a1, void *a2, size_t a3)
{
  size_t n; // r3
  int v5; // r0
  unsigned int v7[7]; // [sp+18h] [bp+0h] BYREF
  size_t v8; // [sp+34h] [bp+1Ch]
  void *dest; // [sp+38h] [bp+20h]
  _DWORD *v10; // [sp+3Ch] [bp+24h]
  unsigned int v11; // [sp+44h] [bp+2Ch] BYREF
  unsigned int v12; // [sp+48h] [bp+30h]
  unsigned int v13; // [sp+4Ch] [bp+34h]
  unsigned int v14; // [sp+50h] [bp+38h]
  int v15; // [sp+54h] [bp+3Ch]
  unsigned int v16; // [sp+58h] [bp+40h]
  size_t v17; // [sp+5Ch] [bp+44h]

  v10 = a1;
  dest = a2;
  v8 = a3;
  if ( !a3 )
    return 0;
  v17 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(v10 + 9));
  sub_FEE88(&v11, v10);
  v16 = sub_FE450(v11, v12, v13, v14, v15);
  if ( v16 )
  {
    sub_FE590(v10);
    n = v16;
    if ( v16 >= v8 )
      n = v8;
    v17 = n;
    sub_FEF24(v7, v11, v12, v13, v14, v15, (char *)dest, n, v10 + 5);
    v11 = v7[0];
    v12 = v7[1];
    v13 = v7[2];
    v14 = v7[3];
    v15 = v7[4];
    sub_FE590(v10);
    sub_FF010(v10, v11, v12, v13, v14, v15);
    v5 = sub_FE384((int)v10);
    if ( v5 == v17 )
      pthread_cond_signal((pthread_cond_t *)(v10 + 34));
    else
      pthread_cond_broadcast((pthread_cond_t *)(v10 + 34));
    return v17;
  }
  else
  {
    pthread_mutex_unlock((pthread_mutex_t *)(v10 + 9));
    return 0;
  }
}
