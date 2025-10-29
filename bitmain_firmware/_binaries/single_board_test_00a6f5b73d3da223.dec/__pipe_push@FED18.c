int __fastcall _pipe_push(_DWORD *a1, char *a2, unsigned int a3)
{
  int result; // r0
  int v4; // r4
  int v5; // r0
  int v6; // r4
  size_t v7; // r3
  unsigned int v8; // r0
  int v9; // [sp+10h] [bp+0h] BYREF
  int v10; // [sp+14h] [bp+4h]
  unsigned int v11; // [sp+18h] [bp+8h]
  char *v12; // [sp+1Ch] [bp+Ch]
  int v13; // [sp+20h] [bp+10h]
  unsigned int v14; // [sp+2Ch] [bp+1Ch]
  char *v15; // [sp+30h] [bp+20h]
  _DWORD *v16; // [sp+34h] [bp+24h]
  int v17; // [sp+3Ch] [bp+2Ch] BYREF
  int v18; // [sp+40h] [bp+30h]
  unsigned int v19; // [sp+44h] [bp+34h]
  char *v20; // [sp+48h] [bp+38h]
  int v21; // [sp+4Ch] [bp+3Ch]
  int v22; // [sp+50h] [bp+40h] BYREF
  unsigned int v23; // [sp+54h] [bp+44h]
  size_t v24; // [sp+58h] [bp+48h]
  int v25; // [sp+5Ch] [bp+4Ch]

  v16 = a1;
  v15 = a2;
  v14 = a3;
  result = sub_FE384((int)a1);
  v25 = result;
  if ( v14 )
  {
    v24 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(v16 + 15));
    sub_FEC5C(&v17, v16, &v22);
    if ( v16[8] )
    {
      sub_FEAC8(&v9, v16, v17, v18, v19, v20, v21, v14);
      v17 = v9;
      v18 = v10;
      v19 = v11;
      v20 = v12;
      v21 = v13;
      v4 = v22;
      v5 = sub_FE450(v9, v10, v11, (unsigned int)v12, v13);
      if ( v4 - v5 >= v14 )
      {
        v7 = v14;
      }
      else
      {
        v6 = v22;
        v7 = v6 - sub_FE450(v17, v18, v19, (unsigned int)v20, v21);
      }
      v24 = v7;
      v8 = sub_FEBB8(v17, v18, v19, v20, v21, v15, v7);
      v16[6] = v8;
      pthread_mutex_unlock((pthread_mutex_t *)(v16 + 15));
      if ( v24 == v25 )
        result = pthread_cond_signal((pthread_cond_t *)(v16 + 22));
      else
        result = pthread_cond_broadcast((pthread_cond_t *)(v16 + 22));
      v23 = v14 - v24;
      if ( v14 != v24 )
        return _pipe_push(v16, &v15[v24], v23);
    }
    else
    {
      return pthread_mutex_unlock((pthread_mutex_t *)(v16 + 15));
    }
  }
  return result;
}
