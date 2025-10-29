int __fastcall gpio_unexport(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  const char *v7; // r2
  size_t v8; // r0
  const char *v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  const char *v13; // r2
  _DWORD *v14; // r3
  int v15; // r1
  int *v16; // r12
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r12
  _DWORD *v22; // r3
  int v23; // r1
  int *v24; // r12
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  _DWORD *v34; // r3
  int v35; // r1
  const char *v36; // r2
  _DWORD *v37; // r3
  int v38; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v40; // [sp+50h] [bp-1800h] BYREF
  int v41; // [sp+54h] [bp-17FCh]
  int v42; // [sp+58h] [bp-17F8h]
  int v43; // [sp+5Ch] [bp-17F4h]
  int v44; // [sp+60h] [bp-17F0h]
  int v45; // [sp+64h] [bp-17ECh]
  int v46; // [sp+68h] [bp-17E8h]
  int v47; // [sp+6Ch] [bp-17E4h]
  int v48; // [sp+70h] [bp-17E0h]
  __int16 v49; // [sp+74h] [bp-17DCh]
  char v50[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C0EC) )
  {
    LOWORD(v16) = -5936;
    HIWORD(v16) = (unsigned int)"q_ltc" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v4 = -1;
    v21 = v16[4];
    v40 = v17;
    v41 = v18;
    v42 = v19;
    v43 = v20;
    v44 = v21;
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, &v40);
    V_UNLOCK();
    LOWORD(v22) = -14756;
    HIWORD(v22) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v23) = -6288;
    HIWORD(v23) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v22, v23, 165, "gpio_unexport", 13, 273, 100, v50);
    return v4;
  }
  LOWORD(v2) = -5916;
  HIWORD(v2) = (unsigned int)"_ticket_mask_ltc" >> 16;
  snprintf(s, 0x40u, v2, a1);
  v3 = access(s, 0);
  v4 = v3;
  if ( !v3 )
  {
    LOWORD(v5) = -5712;
    HIWORD(v5) = (unsigned int)"_setting_share_mode_ltc" >> 16;
    v6 = open64(v5);
    if ( v6 < 0 )
    {
      LOWORD(v24) = -5684;
      HIWORD(v24) = (unsigned int)"_setting_share_mode_ltc" >> 16;
      v25 = *v24;
      v26 = v24[1];
      v27 = v24[2];
      v28 = v24[3];
      v24 += 4;
      v40 = v25;
      v41 = v26;
      v42 = v27;
      v43 = v28;
      v29 = *v24;
      v30 = v24[1];
      v31 = v24[2];
      v32 = v24[3];
      v24 += 4;
      v44 = v29;
      v45 = v30;
      v46 = v31;
      v47 = v32;
      v33 = v24[1];
      v48 = *v24;
      v49 = v33;
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, &v40);
      V_UNLOCK();
      LOWORD(v34) = -14756;
      HIWORD(v34) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v35) = -6288;
      HIWORD(v35) = (unsigned int)"low power mode select!" >> 16;
      v4 = -2;
      zlog(*v34, v35, 165, "gpio_unexport", 13, 290, 100, v50);
      pthread_mutex_unlock(&stru_16C0EC);
    }
    else
    {
      LOWORD(v7) = -5760;
      HIWORD(v7) = ((unsigned int)&loc_12D6DE + 2) >> 16;
      v8 = snprintf(s, 0x40u, v7, a1);
      if ( write(v6, s, v8) < 0 )
      {
        LOWORD(v36) = -5644;
        HIWORD(v36) = (unsigned int)"ns/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_setting_ltc.c" >> 16;
        snprintf((char *)&v40, 0x800u, v36, a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, &v40);
        V_UNLOCK();
        LOWORD(v37) = -14756;
        HIWORD(v37) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v38) = -6288;
        HIWORD(v38) = (unsigned int)"low power mode select!" >> 16;
        v4 = -2;
        zlog(*v37, v38, 165, "gpio_unexport", 13, 298, 100, v50);
      }
      else
      {
        LOWORD(v9) = -5616;
        HIWORD(v9) = (unsigned int)"r_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_setting_ltc.c" >> 16;
        snprintf((char *)&v40, 0x800u, v9, a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, &v40);
        V_UNLOCK();
        LOWORD(v10) = -14756;
        HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v11) = -6288;
        HIWORD(v11) = (unsigned int)"low power mode select!" >> 16;
        zlog(*v10, v11, 165, "gpio_unexport", 13, 304, 20, v50);
      }
      close(v6);
      pthread_mutex_unlock(&stru_16C0EC);
    }
    return v4;
  }
  LOWORD(v13) = -5752;
  HIWORD(v13) = (unsigned int)"c" >> 16;
  snprintf((char *)&v40, 0x800u, v13, a1, v3);
  V_LOCK();
  logfmt_raw(v50, 0x1000u, 0, &v40);
  V_UNLOCK();
  LOWORD(v14) = -14756;
  HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v15) = -6288;
  HIWORD(v15) = (unsigned int)"low power mode select!" >> 16;
  zlog(*v14, v15, 165, "gpio_unexport", 13, 281, 80, v50);
  pthread_mutex_unlock(&stru_16C0EC);
  return 0;
}
