_DWORD *__fastcall sub_FEE88(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v7; // [sp+8h] [bp+0h] BYREF
  int v8; // [sp+Ch] [bp+4h]
  unsigned int v9; // [sp+10h] [bp+8h]
  unsigned int v10; // [sp+14h] [bp+Ch]
  int v11; // [sp+18h] [bp+10h]
  _DWORD *v12; // [sp+20h] [bp+18h]
  _DWORD *v13; // [sp+24h] [bp+1Ch]
  int v14; // [sp+28h] [bp+20h] BYREF
  int v15; // [sp+2Ch] [bp+24h]
  unsigned int v16; // [sp+30h] [bp+28h]
  unsigned int v17; // [sp+34h] [bp+2Ch]
  int v18; // [sp+38h] [bp+30h]
  int i; // [sp+3Ch] [bp+34h]

  v13 = a1;
  v12 = a2;
  sub_FE3B4(&v14, a2);
  for ( i = sub_FE450(v14, v15, v16, v17, v18); !i && v12[7]; i = sub_FE450(v7, v8, v9, v10, v11) )
  {
    pthread_cond_wait((pthread_cond_t *)(v12 + 22), (pthread_mutex_t *)(v12 + 9));
    sub_FE3B4(&v7, v12);
    v14 = v7;
    v15 = v8;
    v16 = v9;
    v17 = v10;
    v18 = v11;
  }
  v2 = v13;
  v3 = v15;
  v4 = v16;
  v5 = v17;
  *v13 = v14;
  v2[1] = v3;
  v2[2] = v4;
  v2[3] = v5;
  v2[4] = v18;
  return v13;
}
