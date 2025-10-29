int __fastcall check_nonce_kda(int a1, int a2)
{
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r6
  int *v6; // r3
  int *p_src; // r2
  int v8; // r1
  char v9; // r1
  char *v10; // r3
  char *v11; // r2
  char v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r7
  unsigned int v15; // r3
  int v16; // lr
  int *v17; // r4
  char *v18; // r12
  char *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  char v27; // r3
  char *v28; // r2
  char *v29; // r3
  char v30; // r1
  char *v31; // r3
  char *v32; // r2
  unsigned int v33; // r0
  unsigned int v34; // t1
  unsigned int v35; // t1
  bool v36; // cf
  _DWORD *v38; // r3
  int v39; // r1
  int v40; // r3
  _DWORD *v41; // r3
  int v42; // r1
  int v43; // r3
  _DWORD *v44; // r3
  int v45; // r1
  int v46; // [sp+Ch] [bp-1174h]
  int src; // [sp+10h] [bp-1170h] BYREF
  int v48; // [sp+14h] [bp-116Ch] BYREF
  _DWORD v49[7]; // [sp+18h] [bp-1168h] BYREF
  int v50; // [sp+34h] [bp-114Ch] BYREF
  _DWORD v51[7]; // [sp+38h] [bp-1148h] BYREF
  int v52; // [sp+54h] [bp-112Ch] BYREF
  char dest[288]; // [sp+58h] [bp-1128h] BYREF
  _DWORD v54[7]; // [sp+178h] [bp-1008h] BYREF
  int v55; // [sp+194h] [bp-FECh] BYREF
  char v56; // [sp+198h] [bp-FE8h] BYREF
  _BYTE v57[189]; // [sp+11B7h] [bp+37h] BYREF

  v3 = *(_DWORD *)(a1 + 624);
  v4 = *(unsigned __int8 *)(a2 + 89);
  v5 = *(_DWORD *)(v3 + 4 * (v4 + 11552));
  memcpy(dest, (const void *)(v3 + 286 * v4 + 9216), 0x11Eu);
  v6 = (int *)((char *)&v48 + 3);
  p_src = &src;
  v8 = *(_DWORD *)(a2 + 84);
  src = *(_DWORD *)(a2 + 80);
  v48 = v8;
  do
  {
    v9 = *(_BYTE *)p_src;
    *(_BYTE *)p_src = *(_BYTE *)v6;
    p_src = (int *)((char *)p_src + 1);
    *(_BYTE *)v6 = v9;
    v6 = (int *)((char *)v6 - 1);
  }
  while ( p_src < v6 );
  blake2s_init((int *)((unsigned int)v57 & 0xFFFFFFC0), 32);
  blake2s_update((_DWORD *)((unsigned int)v57 & 0xFFFFFFC0), dest, 0x116u);
  blake2s_update((_DWORD *)((unsigned int)v57 & 0xFFFFFFC0), (char *)&src, 8u);
  blake2s_final((unsigned int)v57 & 0xFFFFFFC0, v49, 0x20u);
  v10 = (char *)&v50 + 3;
  v11 = (char *)v49;
  do
  {
    v12 = *v11;
    *v11++ = *v10;
    *v10-- = v12;
  }
  while ( v11 < v10 );
  v13 = target_to_diff_kda(v49);
  v14 = v13;
  if ( v13 <= 0x19 )
  {
    V_LOCK();
    LOWORD(v43) = -14040;
    HIWORD(v43) = (unsigned int)"do prepare finished\n" >> 16;
    logfmt_raw((char *)v54, 0x1000u, 0, v43, v14, *(unsigned __int8 *)(a2 + 88), 26, v46, src, v48);
    V_UNLOCK();
    LOWORD(v44) = -14756;
    HIWORD(v44) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v45) = -14252;
    HIWORD(v45) = (unsigned int)"1304401cbe540448a4cacd7e98421a850503e2f0d102f1d3" >> 16;
    zlog(*v44, v45, 154, "check_nonce_kda", 15, 387, 20, v54);
    return 2;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 88);
    if ( v15 == v13 )
    {
      if ( v5 <= v15 )
      {
        v16 = *(unsigned __int8 *)(a2 + 89);
        v51[0] = v49[0];
        v51[1] = v49[1];
        v51[2] = v49[2];
        v51[3] = v49[3];
        v17 = (int *)(v3 + 32 * (v16 + 1460));
        v18 = (char *)&v52 + 3;
        v19 = (char *)v51;
        v51[4] = v49[4];
        v51[5] = v49[5];
        v51[6] = v49[6];
        v52 = v50;
        v20 = *v17;
        v21 = v17[1];
        v22 = v17[2];
        v23 = v17[3];
        v17 += 4;
        v54[0] = v20;
        v54[1] = v21;
        v54[2] = v22;
        v54[3] = v23;
        v24 = v17[1];
        v25 = v17[2];
        v26 = v17[3];
        v54[4] = *v17;
        v54[5] = v24;
        v54[6] = v25;
        v55 = v26;
        do
        {
          v27 = *v19;
          *v19++ = *v18;
          *v18-- = v27;
        }
        while ( v19 < v18 );
        v28 = (char *)&v55 + 3;
        v29 = (char *)v54;
        do
        {
          v30 = *v29;
          *v29++ = *v28;
          *v28-- = v30;
        }
        while ( v29 < v28 );
        v31 = dest;
        v32 = &v56;
        while ( 1 )
        {
          v34 = *((_DWORD *)v31 - 1);
          v31 -= 4;
          v33 = v34;
          v35 = *((_DWORD *)v32 - 1);
          v32 -= 4;
          v36 = v33 >= v35;
          if ( v33 > v35 )
            break;
          if ( !v36 || v31 == (char *)v51 )
            return 0;
        }
      }
      V_LOCK();
      logfmt_raw((char *)v54, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 88), v5);
      V_UNLOCK();
      LOWORD(v38) = -14756;
      HIWORD(v38) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v39) = -14252;
      HIWORD(v39) = (unsigned int)"1304401cbe540448a4cacd7e98421a850503e2f0d102f1d3" >> 16;
      zlog(*v38, v39, 154, "check_nonce_kda", 15, 397, 20, v54);
      return 1;
    }
    else
    {
      V_LOCK();
      LOWORD(v40) = 29484;
      HIWORD(v40) = (unsigned int)"update_temperature" >> 16;
      logfmt_raw((char *)v54, 0x1000u, 0, v40, v14, *(unsigned __int8 *)(a2 + 88), v5, v46, src, v48);
      V_UNLOCK();
      LOWORD(v41) = -14756;
      HIWORD(v41) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v42) = -14252;
      HIWORD(v42) = (unsigned int)"1304401cbe540448a4cacd7e98421a850503e2f0d102f1d3" >> 16;
      zlog(*v41, v42, 154, "check_nonce_kda", 15, 392, 20, v54);
      return 3;
    }
  }
}
