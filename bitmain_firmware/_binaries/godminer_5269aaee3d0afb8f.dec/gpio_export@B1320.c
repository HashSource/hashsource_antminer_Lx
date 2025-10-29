int __fastcall gpio_export(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r6
  const char *v5; // r2
  size_t v6; // r0
  const char *v7; // r2
  _DWORD *v8; // r3
  int v9; // r1
  const char *v11; // r2
  _DWORD *v12; // r3
  int v13; // r1
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  _DWORD *v20; // r3
  int v21; // r1
  int *v22; // r12
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r12
  _DWORD *v32; // r3
  int v33; // r1
  const char *v34; // r2
  _DWORD *v35; // r3
  int v36; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v38; // [sp+50h] [bp-1800h] BYREF
  int v39; // [sp+54h] [bp-17FCh]
  int v40; // [sp+58h] [bp-17F8h]
  int v41; // [sp+5Ch] [bp-17F4h]
  int v42; // [sp+60h] [bp-17F0h]
  int v43; // [sp+64h] [bp-17ECh]
  int v44; // [sp+68h] [bp-17E8h]
  int v45; // [sp+6Ch] [bp-17E4h]
  int v46; // [sp+70h] [bp-17E0h]
  char v47[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C0EC) )
  {
    LOWORD(v14) = -5936;
    HIWORD(v14) = (unsigned int)"q_ltc" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14[4];
    v38 = v15;
    v39 = v16;
    v40 = v17;
    v41 = v18;
    v42 = v19;
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, &v38);
    V_UNLOCK();
    LOWORD(v20) = -14756;
    HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v21) = -6288;
    HIWORD(v21) = (unsigned int)"low power mode select!" >> 16;
    zlog(*v20, v21, 165, "gpio_export", 11, 221, 100, v47);
    return -1;
  }
  else
  {
    LOWORD(v2) = -5916;
    HIWORD(v2) = (unsigned int)"_ticket_mask_ltc" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      LOWORD(v3) = -5864;
      HIWORD(v3) = (unsigned int)"chip_setting_check_bist_ltc" >> 16;
      v4 = open64(v3);
      if ( v4 < 0 )
      {
        LOWORD(v22) = -5840;
        HIWORD(v22) = (unsigned int)"ltc" >> 16;
        v23 = *v22;
        v24 = v22[1];
        v25 = v22[2];
        v26 = v22[3];
        v22 += 4;
        v38 = v23;
        v39 = v24;
        v40 = v25;
        v41 = v26;
        v27 = *v22;
        v28 = v22[1];
        v29 = v22[2];
        v30 = v22[3];
        v31 = v22[4];
        v42 = v27;
        v43 = v28;
        v44 = v29;
        v45 = v30;
        v46 = v31;
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, &v38);
        V_UNLOCK();
        LOWORD(v32) = -14756;
        HIWORD(v32) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v33) = -6288;
        HIWORD(v33) = (unsigned int)"low power mode select!" >> 16;
        zlog(*v32, v33, 165, "gpio_export", 11, 238, 100, v47);
        pthread_mutex_unlock(&stru_16C0EC);
        return -2;
      }
      else
      {
        LOWORD(v5) = -5760;
        HIWORD(v5) = ((unsigned int)&loc_12D6DE + 2) >> 16;
        v6 = snprintf(s, 0x40u, v5, a1);
        if ( write(v4, s, v6) < 0 )
        {
          LOWORD(v34) = -5804;
          HIWORD(v34) = (unsigned int)"_setting_reset_bist_ltc" >> 16;
          snprintf((char *)&v38, 0x800u, v34, a1);
          V_LOCK();
          logfmt_raw(v47, 0x1000u, 0, &v38);
          V_UNLOCK();
          LOWORD(v35) = -14756;
          HIWORD(v35) = (unsigned int)&unk_16B55C >> 16;
          LOWORD(v36) = -6288;
          HIWORD(v36) = (unsigned int)"low power mode select!" >> 16;
          zlog(*v35, v36, 165, "gpio_export", 11, 246, 100, v47);
          close(v4);
          pthread_mutex_unlock(&stru_16C0EC);
          return -3;
        }
        else
        {
          LOWORD(v7) = -5776;
          HIWORD(v7) = (unsigned int)"_setting_working_mode_ltc" >> 16;
          snprintf((char *)&v38, 0x800u, v7, a1);
          V_LOCK();
          logfmt_raw(v47, 0x1000u, 0, &v38);
          V_UNLOCK();
          LOWORD(v8) = -14756;
          HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
          LOWORD(v9) = -6288;
          HIWORD(v9) = (unsigned int)"low power mode select!" >> 16;
          zlog(*v8, v9, 165, "gpio_export", 11, 251, 20, v47);
          close(v4);
          pthread_mutex_unlock(&stru_16C0EC);
          return 0;
        }
      }
    }
    else
    {
      LOWORD(v11) = -5892;
      HIWORD(v11) = (unsigned int)"_setting_ticket_mask_ltc" >> 16;
      snprintf((char *)&v38, 0x800u, v11, a1);
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, &v38);
      V_UNLOCK();
      LOWORD(v12) = -14756;
      HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v13) = -6288;
      HIWORD(v13) = (unsigned int)"low power mode select!" >> 16;
      zlog(*v12, v13, 165, "gpio_export", 11, 229, 80, v47);
      pthread_mutex_unlock(&stru_16C0EC);
      return 0;
    }
  }
}
