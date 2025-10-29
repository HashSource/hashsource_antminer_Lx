int __fastcall iic_init(int a1)
{
  pthread_mutex_t *v2; // r0
  int v3; // r5
  const char *v4; // r2
  _DWORD *v5; // r6
  int v6; // r3
  int v7; // r1
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int *v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r12
  int *v26; // r3
  int v27; // r0
  int v28; // r1
  int *v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int *v33; // r3
  int v34; // r0
  int v35; // r1
  int *v36; // r12
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r1
  int *v42; // r12
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r12
  int *v48; // r3
  int v49; // r0
  int v50; // r1
  int s; // [sp+10h] [bp-1800h] BYREF
  int v52; // [sp+14h] [bp-17FCh]
  int v53; // [sp+18h] [bp-17F8h]
  int v54; // [sp+1Ch] [bp-17F4h]
  int v55; // [sp+20h] [bp-17F0h]
  __int16 v56; // [sp+24h] [bp-17ECh]
  char v57[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -16116;
  HIWORD(v2) = (unsigned int)&unk_16B00C >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v42) = -5108;
    HIWORD(v42) = (unsigned int)"_reset_VBK" >> 16;
    v43 = *v42;
    v44 = v42[1];
    v45 = v42[2];
    v46 = v42[3];
    v3 = -4;
    v47 = v42[4];
    s = v43;
    v52 = v44;
    v53 = v45;
    v54 = v46;
    v55 = v47;
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v48) = -14756;
    HIWORD(v48) = (unsigned int)&unk_16B55C >> 16;
    v49 = *v48;
    LOWORD(v48) = -5188;
    LOWORD(v50) = -5088;
    HIWORD(v48) = (unsigned int)"core_id:%d" >> 16;
    HIWORD(v50) = (unsigned int)"ing_software_reset_VBK" >> 16;
    zlog(v49, v50, 164, v48, 8, 20, 100, v57);
    return v3;
  }
  if ( a1 )
  {
    v3 = i2c_init();
    if ( v3 < 0 )
    {
      LOWORD(v20) = -4920;
      HIWORD(v20) = (unsigned int)"Setting_get_addr_VBK" >> 16;
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v3 = -1;
      v25 = v20[4];
      s = v21;
      v52 = v22;
      v53 = v23;
      v54 = v24;
      v55 = v25;
      V_LOCK();
      logfmt_raw(v57, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v26) = -14756;
      HIWORD(v26) = (unsigned int)&unk_16B55C >> 16;
      v27 = *v26;
      LOWORD(v26) = -5188;
      LOWORD(v28) = -5088;
      HIWORD(v26) = (unsigned int)"core_id:%d" >> 16;
      HIWORD(v28) = (unsigned int)"ing_software_reset_VBK" >> 16;
      zlog(v27, v28, 164, v26, 8, 32, 100, v57);
    }
    else
    {
      LOWORD(v4) = -4900;
      HIWORD(v4) = (unsigned int)"" >> 16;
      LOWORD(v5) = -14756;
      snprintf(
        (char *)&s,
        0x800u,
        v4,
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 7));
      V_LOCK();
      logfmt_raw(v57, 0x1000u, 0, &s);
      HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
      V_UNLOCK();
      LOWORD(v6) = -5188;
      LOWORD(v7) = -5088;
      HIWORD(v6) = (unsigned int)"core_id:%d" >> 16;
      HIWORD(v7) = (unsigned int)"ing_software_reset_VBK" >> 16;
      zlog(*v5, v7, 164, v6, 8, 36, 20, v57);
      if ( i2c_select(v3, *(unsigned __int16 *)(a1 + 4)) )
      {
        LOWORD(v8) = -4832;
        HIWORD(v8) = (unsigned int)"ing_open_cores_VBK" >> 16;
        v9 = *v8;
        v10 = v8[1];
        v11 = v8[2];
        v12 = v8[3];
        v8 += 4;
        s = v9;
        v52 = v10;
        v53 = v11;
        v54 = v12;
        v13 = v8[1];
        v55 = *v8;
        v56 = v13;
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        v14 = *v5;
        v15 = 38;
        goto LABEL_6;
      }
      if ( i2c_ioctl(v3, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        LOWORD(v36) = -4808;
        HIWORD(v36) = (unsigned int)"Setting_open_cores_VBK" >> 16;
        v37 = *v36;
        v38 = v36[1];
        v39 = v36[2];
        v40 = v36[3];
        v36 += 4;
        s = v37;
        v52 = v38;
        v53 = v39;
        v54 = v40;
        v41 = v36[1];
        v55 = *v36;
        LOBYTE(v56) = v41;
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        v14 = *v5;
        v15 = 43;
LABEL_6:
        LOWORD(v16) = -5188;
        LOWORD(v17) = -5088;
        HIWORD(v16) = (unsigned int)"core_id:%d" >> 16;
        HIWORD(v17) = (unsigned int)"ing_software_reset_VBK" >> 16;
        zlog(v14, v17, 164, v16, 8, v15, 100, v57);
        if ( v3 )
        {
          v18 = v3;
          v3 = -1;
          i2c_uninit(v18);
        }
        else
        {
          v3 = -1;
        }
      }
    }
  }
  else
  {
    LOWORD(v29) = -6120;
    HIWORD(v29) = (unsigned int)"tmp/release/build/godminer-origin_master/backend/backend_ltc/chip_reg_io_ltc.c" >> 16;
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v3 = -3;
    s = v30;
    v52 = v31;
    LOWORD(v53) = v32;
    BYTE2(v53) = BYTE2(v32);
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v33) = -14756;
    HIWORD(v33) = (unsigned int)&unk_16B55C >> 16;
    v34 = *v33;
    LOWORD(v33) = -5188;
    LOWORD(v35) = -5088;
    HIWORD(v33) = (unsigned int)"core_id:%d" >> 16;
    HIWORD(v35) = (unsigned int)"ing_software_reset_VBK" >> 16;
    zlog(v34, v35, 164, v33, 8, 26, 100, v57);
  }
  pthread_mutex_unlock(&stru_16C10C);
  return v3;
}
