int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  int *v16; // r12
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r12
  _DWORD *v22; // r3
  int v23; // r1
  int v24; // [sp+10h] [bp-1800h] BYREF
  int v25; // [sp+14h] [bp-17FCh]
  int v26; // [sp+18h] [bp-17F8h]
  int v27; // [sp+1Ch] [bp-17F4h]
  int v28; // [sp+20h] [bp-17F0h]
  int v29; // [sp+24h] [bp-17ECh]
  int v30; // [sp+28h] [bp-17E8h]
  char v31[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_16C438);
  if ( v2 )
  {
    LOWORD(v16) = -5936;
    HIWORD(v16) = (unsigned int)"q_ltc" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v2 = -1;
    v21 = v16[4];
    v24 = v17;
    v25 = v18;
    v26 = v19;
    v27 = v20;
    v28 = v21;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &v24);
    V_UNLOCK();
    LOWORD(v22) = -14756;
    HIWORD(v22) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v23) = -3320;
    HIWORD(v23) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    zlog(*v22, v23, 163, "reg_key_callback", 16, 398, 100, v31);
  }
  else
  {
    v3 = &off_16C454;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        LOWORD(v6) = -2980;
        HIWORD(v6) = (unsigned int)"!" >> 16;
        v7 = *v6;
        v8 = v6[1];
        v9 = v6[2];
        v10 = v6[3];
        v6 += 4;
        v2 = -2;
        v24 = v7;
        v25 = v8;
        v26 = v9;
        v27 = v10;
        v11 = v6[1];
        v12 = v6[2];
        v28 = *v6;
        v29 = v11;
        v30 = v12;
        V_LOCK();
        logfmt_raw(v31, 0x1000u, 0, &v24);
        V_UNLOCK();
        LOWORD(v13) = -14756;
        HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v14) = -3320;
        HIWORD(v14) = (unsigned int)"ster/backend/device/hal/drv_pic/pic_1704.c" >> 16;
        zlog(*v13, v14, 163, "reg_key_callback", 16, 414, 100, v31);
        goto LABEL_7;
      }
    }
    dword_16C434[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_16C438);
  }
  return v2;
}
