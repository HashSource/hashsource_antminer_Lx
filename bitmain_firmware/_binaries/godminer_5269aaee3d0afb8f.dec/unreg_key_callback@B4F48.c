int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  int *v5; // r12
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r12
  _DWORD *v21; // r3
  int v22; // r1
  int v24; // [sp+10h] [bp-1804h] BYREF
  int v25; // [sp+14h] [bp-1800h]
  int v26; // [sp+18h] [bp-17FCh]
  int v27; // [sp+1Ch] [bp-17F8h]
  int v28; // [sp+20h] [bp-17F4h]
  int v29; // [sp+24h] [bp-17F0h]
  int v30; // [sp+28h] [bp-17ECh]
  int v31; // [sp+2Ch] [bp-17E8h]
  char v32[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_16C438);
  if ( v2 )
  {
    LOWORD(v15) = -5936;
    HIWORD(v15) = (unsigned int)"q_ltc" >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v19 = v15[3];
    v20 = v15[4];
    v24 = v16;
    v25 = v17;
    v26 = v18;
    v27 = v19;
    v28 = v20;
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, &v24);
    V_UNLOCK();
    LOWORD(v21) = -14756;
    HIWORD(v21) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v22) = -3320;
    HIWORD(v22) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    zlog(*v21, v22, 163, "unreg_key_callback", 18, 434, 100, v32);
    return -1;
  }
  else
  {
    v3 = (int *)&off_16C454;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        LOWORD(v5) = -2952;
        HIWORD(v5) = (unsigned int)"r chain[%d]!" >> 16;
        v6 = *v5;
        v7 = v5[1];
        v8 = v5[2];
        v9 = v5[3];
        v5 += 4;
        v24 = v6;
        v25 = v7;
        v26 = v8;
        v27 = v9;
        v10 = v5[1];
        v11 = v5[2];
        v12 = v5[3];
        v28 = *v5;
        v29 = v10;
        v30 = v11;
        v31 = v12;
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, &v24);
        V_UNLOCK();
        LOWORD(v13) = -14756;
        HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v14) = -3320;
        HIWORD(v14) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
        zlog(*v13, v14, 163, "unreg_key_callback", 18, 448, 80, v32);
        goto LABEL_7;
      }
    }
    dword_16C434[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_16C438);
    return 0;
  }
}
